#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_HAAMHAPMKDL_NKHOJJKHJDD_OFFSET UNITYSDK_OFFSET(0x1A2D7960)
#define KNLKGLCAPGH_HAAMHAPMKDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D7950)

inline static constexpr unsigned int KNLKGLCAPGH_HAAMHAPMKDL_TypeDefinitionIndex = 41099;

class KNLKGLCAPGH_HAAMHAPMKDL : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HAAMHAPMKDL__CTOR_OFFSET))(this);
	}

	::System::Void NKHOJJKHJDD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HAAMHAPMKDL_NKHOJJKHJDD_OFFSET))(this, GLAOEHCGCFO);
	}
};
