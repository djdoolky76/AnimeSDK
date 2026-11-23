#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A70D898CE3E14190.h"
#include "unitysdk/B4F5E4527802C58E_F52938EFAECC6FCA.h"

namespace System { template <typename T> class Action_1; }

#define B4F5E4527802C58E_E3E30D1EDEECB6CE_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2289870)
#define B4F5E4527802C58E_E3E30D1EDEECB6CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4F5E4527802C58E_E3E30D1EDEECB6CE_TypeDefinitionIndex = 6999;

class B4F5E4527802C58E_E3E30D1EDEECB6CE : public ::B4F5E4527802C58E_F52938EFAECC6FCA
{
public:
	::System::Int32 A347DE23C32BF6D6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action_1<::A70D898CE3E14190>* F1C5198FBC44AFCA; // 0x18
	::System::Action_1<::System::Int32>* EF83AF6569A651BD; // 0x20
	::System::Boolean B20DD4BE3449C7DE; // 0x28
	::System::Boolean E7474AA7085F4303; // 0x29
	::System::Boolean B9D71D2A26172E16; // 0x2A
	::System::Byte _padding1[0x5];
	::System::Action_1<::System::Boolean>* E1B39ABD9EAF0DFE; // 0x30

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_E3E30D1EDEECB6CE_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_E3E30D1EDEECB6CE__CTOR_OFFSET))(this);
	}
};
