#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCNJDEPJFG;
class ONPKEJKAEOI;

#define COCNJDEPJFG_KJMNFLGHEKE_EOKPEMGOPNA_OFFSET UNITYSDK_OFFSET(0x15347F60)
#define COCNJDEPJFG_KJMNFLGHEKE_GBNINLNBOLD_OFFSET UNITYSDK_OFFSET(0x15347CE0)
#define COCNJDEPJFG_KJMNFLGHEKE_MKIFLNPIBEN_OFFSET UNITYSDK_OFFSET(0x15347E20)
#define COCNJDEPJFG_KJMNFLGHEKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15347CD0)

inline static constexpr unsigned int COCNJDEPJFG_KJMNFLGHEKE_TypeDefinitionIndex = 86195;

class COCNJDEPJFG_KJMNFLGHEKE : public ::System::Object
{
public:
	::COCNJDEPJFG* KLHPEBKNIFB; // 0x10
	::ONPKEJKAEOI* IOLNIEOLEAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCNJDEPJFG_KJMNFLGHEKE__CTOR_OFFSET))(this);
	}

	::System::Void GBNINLNBOLD(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCNJDEPJFG_KJMNFLGHEKE_GBNINLNBOLD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MKIFLNPIBEN(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCNJDEPJFG_KJMNFLGHEKE_MKIFLNPIBEN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EOKPEMGOPNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCNJDEPJFG_KJMNFLGHEKE_EOKPEMGOPNA_OFFSET))(this);
	}
};
