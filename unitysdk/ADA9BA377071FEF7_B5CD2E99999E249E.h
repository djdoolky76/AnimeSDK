#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADA9BA377071FEF7;
namespace MiHoYo::SDK { class NetworkResponseModel; }

#define ADA9BA377071FEF7_B5CD2E99999E249E_F63BB04D900FBE21_OFFSET UNITYSDK_OFFSET(0x3954C30)
#define ADA9BA377071FEF7_B5CD2E99999E249E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADA9BA377071FEF7_B5CD2E99999E249E_TypeDefinitionIndex = 12396;

class ADA9BA377071FEF7_B5CD2E99999E249E : public ::System::Object
{
public:
	::ADA9BA377071FEF7* A544919C800E2923; // 0x10
	::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA9BA377071FEF7_B5CD2E99999E249E__CTOR_OFFSET))(this);
	}

	::System::Void F63BB04D900FBE21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA9BA377071FEF7_B5CD2E99999E249E_F63BB04D900FBE21_OFFSET))(this);
	}
};
