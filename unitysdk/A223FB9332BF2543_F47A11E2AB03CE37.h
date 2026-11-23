#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A223FB9332BF2543;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define A223FB9332BF2543_F47A11E2AB03CE37_ABC2814B570150BB_OFFSET UNITYSDK_OFFSET(0x3A5C4F0)
#define A223FB9332BF2543_F47A11E2AB03CE37_B4DF91E2497732B1_OFFSET UNITYSDK_OFFSET(0x3A5C390)
#define A223FB9332BF2543_F47A11E2AB03CE37__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A223FB9332BF2543_F47A11E2AB03CE37_TypeDefinitionIndex = 12973;

class A223FB9332BF2543_F47A11E2AB03CE37 : public ::System::Object
{
public:
	::A223FB9332BF2543* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B7950A1927C7A5E6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A223FB9332BF2543_F47A11E2AB03CE37__CTOR_OFFSET))(this);
	}

	::System::Void B4DF91E2497732B1(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_F47A11E2AB03CE37_B4DF91E2497732B1_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void ABC2814B570150BB(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_F47A11E2AB03CE37_ABC2814B570150BB_OFFSET))(this, A6CAE7339066B0FB);
	}
};
