#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A223FB9332BF2543;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define A223FB9332BF2543_ED0914F4CF9FC178_A28595C1AD48B89A_OFFSET UNITYSDK_OFFSET(0x3A5B560)
#define A223FB9332BF2543_ED0914F4CF9FC178_B7E166C27C202873_OFFSET UNITYSDK_OFFSET(0x3A5B910)
#define A223FB9332BF2543_ED0914F4CF9FC178__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A223FB9332BF2543_ED0914F4CF9FC178_TypeDefinitionIndex = 12971;

class A223FB9332BF2543_ED0914F4CF9FC178 : public ::System::Object
{
public:
	::A223FB9332BF2543* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* ABC587902F5F29C7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A223FB9332BF2543_ED0914F4CF9FC178__CTOR_OFFSET))(this);
	}

	::System::Void A28595C1AD48B89A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_ED0914F4CF9FC178_A28595C1AD48B89A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void B7E166C27C202873(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A223FB9332BF2543_ED0914F4CF9FC178_B7E166C27C202873_OFFSET))(this, A6CAE7339066B0FB);
	}
};
