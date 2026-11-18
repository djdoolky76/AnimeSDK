#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFEIIJKCIBN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/OMGFCFDABLN.h"

class AKLPCMMHKEO;
namespace System::Collections { class IList; }

#define EBNPOEHOAGD_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x7FE52D0)
#define EBNPOEHOAGD_HDMEDBJIIGB_OFFSET UNITYSDK_OFFSET(0x7FE5220)
#define EBNPOEHOAGD__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE52C0)

inline static constexpr unsigned int EBNPOEHOAGD_TypeDefinitionIndex = 70062;

class EBNPOEHOAGD : public ::DFEIIJKCIBN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNPOEHOAGD__CTOR_OFFSET))(this);
	}

	::System::Void HDMEDBJIIGB(::LGCNEDCMPKM& IOEFNIACMDD, ::LGCNEDCMPKM& CMHJOFNCDHB, ::AKLPCMMHKEO* ENJCPELCNKI)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::LGCNEDCMPKM&, ::AKLPCMMHKEO*))((::PBYTE)hIl2Cpp + EBNPOEHOAGD_HDMEDBJIIGB_OFFSET))(this, IOEFNIACMDD, CMHJOFNCDHB, ENJCPELCNKI);
	}

	::System::Collections::IList* FHDJDIIPGGP(::LGCNEDCMPKM& BKBGPKNGNMF, ::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::System::Collections::IList*(*)(::PVOID, ::LGCNEDCMPKM&, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + EBNPOEHOAGD_FHDJDIIPGGP_OFFSET))(this, BKBGPKNGNMF, LOACBJBANNC);
	}
};
