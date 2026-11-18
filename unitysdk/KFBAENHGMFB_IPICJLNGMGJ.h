#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_IPICJLNGMGJ_EOHBEEMBAGP_OFFSET UNITYSDK_OFFSET(0x15159840)
#define KFBAENHGMFB_IPICJLNGMGJ_GLDJCKOJDHA_OFFSET UNITYSDK_OFFSET(0x15159830)
#define KFBAENHGMFB_IPICJLNGMGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15159820)

inline static constexpr unsigned int KFBAENHGMFB_IPICJLNGMGJ_TypeDefinitionIndex = 78596;

class KFBAENHGMFB_IPICJLNGMGJ : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::UInt32 HHEGANCPILH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_IPICJLNGMGJ__CTOR_OFFSET))(this);
	}

	::System::Void GLDJCKOJDHA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_IPICJLNGMGJ_GLDJCKOJDHA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EOHBEEMBAGP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_IPICJLNGMGJ_EOHBEEMBAGP_OFFSET))(this, PIIPCLCCOIG);
	}
};
