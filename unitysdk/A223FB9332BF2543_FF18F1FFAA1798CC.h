#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A223FB9332BF2543;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define A223FB9332BF2543_FF18F1FFAA1798CC_ABAC59CE76E43E8A_OFFSET UNITYSDK_OFFSET(0x3A5BC30)
#define A223FB9332BF2543_FF18F1FFAA1798CC_F42DC49E39C5869B_OFFSET UNITYSDK_OFFSET(0x3A5BF70)
#define A223FB9332BF2543_FF18F1FFAA1798CC_F5857C060F51D824_OFFSET UNITYSDK_OFFSET(0x3A5C1A0)
#define A223FB9332BF2543_FF18F1FFAA1798CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A223FB9332BF2543_FF18F1FFAA1798CC_TypeDefinitionIndex = 12972;

class A223FB9332BF2543_FF18F1FFAA1798CC : public ::System::Object
{
public:
	::A223FB9332BF2543* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* F31966AD23B8B3D8; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B874E2F5E456D27C; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A223FB9332BF2543_FF18F1FFAA1798CC__CTOR_OFFSET))(this);
	}

	::System::Void ABAC59CE76E43E8A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_FF18F1FFAA1798CC_ABAC59CE76E43E8A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F42DC49E39C5869B(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_FF18F1FFAA1798CC_F42DC49E39C5869B_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F5857C060F51D824(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_FF18F1FFAA1798CC_F5857C060F51D824_OFFSET))(this, A6CAE7339066B0FB);
	}
};
