#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1417BB04C63EF58;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define B1417BB04C63EF58_AE5C26FB0E7FA9B1_ABAC59CE76E43E8A_OFFSET UNITYSDK_OFFSET(0x39756F0)
#define B1417BB04C63EF58_AE5C26FB0E7FA9B1_F42DC49E39C5869B_OFFSET UNITYSDK_OFFSET(0x3975B00)
#define B1417BB04C63EF58_AE5C26FB0E7FA9B1_F5857C060F51D824_OFFSET UNITYSDK_OFFSET(0x3975CA0)
#define B1417BB04C63EF58_AE5C26FB0E7FA9B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1417BB04C63EF58_AE5C26FB0E7FA9B1_TypeDefinitionIndex = 12481;

class B1417BB04C63EF58_AE5C26FB0E7FA9B1 : public ::System::Object
{
public:
	::B1417BB04C63EF58* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* F31966AD23B8B3D8; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B874E2F5E456D27C; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AE5C26FB0E7FA9B1__CTOR_OFFSET))(this);
	}

	::System::Void ABAC59CE76E43E8A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AE5C26FB0E7FA9B1_ABAC59CE76E43E8A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F42DC49E39C5869B(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AE5C26FB0E7FA9B1_F42DC49E39C5869B_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F5857C060F51D824(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AE5C26FB0E7FA9B1_F5857C060F51D824_OFFSET))(this, A6CAE7339066B0FB);
	}
};
