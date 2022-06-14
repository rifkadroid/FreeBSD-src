#include <sys/cdefs.h>

/*
 * Tail queue functions.
 */

#define	LOCAL_TAILQ_EMPTY(head)	((head)->cstqh_first == NULL)

#define	LOCAL_TAILQ_FIRST(head)	((head)->cstqh_first)

#define	LOCAL_TAILQ_FOREACH(var, head, field)					\
	for ((var) = LOCAL_TAILQ_FIRST((head));				\
	    (var);							\
	    (var) = LOCAL_TAILQ_NEXT((var), field))

#define	LOCAL_TAILQ_NEXT(elm, field) ((elm)->field.cstqe_next)
