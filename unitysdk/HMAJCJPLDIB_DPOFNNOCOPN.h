#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMAJCJPLDIB;
namespace System { class Action; }

#define HMAJCJPLDIB_DPOFNNOCOPN_KGABBGBMGKM_OFFSET UNITYSDK_OFFSET(0x15DC48E0)
#define HMAJCJPLDIB_DPOFNNOCOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC48D0)

inline static constexpr unsigned int HMAJCJPLDIB_DPOFNNOCOPN_TypeDefinitionIndex = 59037;

class HMAJCJPLDIB_DPOFNNOCOPN : public ::System::Object
{
public:
	::HMAJCJPLDIB* KLHPEBKNIFB; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_DPOFNNOCOPN__CTOR_OFFSET))(this);
	}

	::System::Void KGABBGBMGKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_DPOFNNOCOPN_KGABBGBMGKM_OFFSET))(this);
	}
};
