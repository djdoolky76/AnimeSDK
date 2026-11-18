#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define BHBNLOPOGJG_KNEKGNOADJO_DBINEMJPFME_OFFSET UNITYSDK_OFFSET(0x14C438B0)
#define BHBNLOPOGJG_KNEKGNOADJO_KOMJJEDPLAP_OFFSET UNITYSDK_OFFSET(0x14C438A0)
#define BHBNLOPOGJG_KNEKGNOADJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14C43890)

inline static constexpr unsigned int BHBNLOPOGJG_KNEKGNOADJO_TypeDefinitionIndex = 60229;

class BHBNLOPOGJG_KNEKGNOADJO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_KNEKGNOADJO__CTOR_OFFSET))(this);
	}

	::System::Void KOMJJEDPLAP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_KNEKGNOADJO_KOMJJEDPLAP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DBINEMJPFME(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_KNEKGNOADJO_DBINEMJPFME_OFFSET))(this, PIIPCLCCOIG);
	}
};
