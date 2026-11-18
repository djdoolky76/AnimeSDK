#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_ILDJPLBALHD_DGCFEJBHOBN_OFFSET UNITYSDK_OFFSET(0x1791A2C0)
#define KNLKGLCAPGH_ILDJPLBALHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A2B0)

inline static constexpr unsigned int KNLKGLCAPGH_ILDJPLBALHD_TypeDefinitionIndex = 41108;

class KNLKGLCAPGH_ILDJPLBALHD : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_ILDJPLBALHD__CTOR_OFFSET))(this);
	}

	::System::Void DGCFEJBHOBN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_ILDJPLBALHD_DGCFEJBHOBN_OFFSET))(this, GLAOEHCGCFO);
	}
};
