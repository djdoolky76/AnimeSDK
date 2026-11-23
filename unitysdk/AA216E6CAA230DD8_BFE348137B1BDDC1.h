#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AA216E6CAA230DD8;
class EFC4AEA2121EC272;
namespace ABC::UI { class MonoAvatarIcon; }

#define AA216E6CAA230DD8_BFE348137B1BDDC1_FC02CEFBC1940B0D_OFFSET UNITYSDK_OFFSET(0x1CBBF80)
#define AA216E6CAA230DD8_BFE348137B1BDDC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA216E6CAA230DD8_BFE348137B1BDDC1_TypeDefinitionIndex = 9674;

class AA216E6CAA230DD8_BFE348137B1BDDC1 : public ::System::Object
{
public:
	::AA216E6CAA230DD8* A544919C800E2923; // 0x10
	::System::Int32 B48C66E5FB2449C6; // 0x18
	::System::Byte _padding0[0x4];
	::EFC4AEA2121EC272* BB2E1543C8559C1A; // 0x20
	::ABC::UI::MonoAvatarIcon* F45A155F61126DA2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_BFE348137B1BDDC1__CTOR_OFFSET))(this);
	}

	::System::Void FC02CEFBC1940B0D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_BFE348137B1BDDC1_FC02CEFBC1940B0D_OFFSET))(this);
	}
};
