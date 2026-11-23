#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AE02E8F41E452C48;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define AE02E8F41E452C48_B24FFCC6E029E27F_F2D4B3CA19E877C2_OFFSET UNITYSDK_OFFSET(0x3AC8D40)
#define AE02E8F41E452C48_B24FFCC6E029E27F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE02E8F41E452C48_B24FFCC6E029E27F_TypeDefinitionIndex = 12097;

class AE02E8F41E452C48_B24FFCC6E029E27F : public ::System::Object
{
public:
	::AE02E8F41E452C48* A544919C800E2923; // 0x10
	::System::String* E3439718A10032C3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_B24FFCC6E029E27F__CTOR_OFFSET))(this);
	}

	::System::Void F2D4B3CA19E877C2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_B24FFCC6E029E27F_F2D4B3CA19E877C2_OFFSET))(this, A6CAE7339066B0FB);
	}
};
