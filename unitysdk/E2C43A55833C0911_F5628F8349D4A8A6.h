#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E2C43A55833C0911_F5628F8349D4A8A6_A8F085D1B0DCF480_OFFSET UNITYSDK_OFFSET(0x39E2BB0)
#define E2C43A55833C0911_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39E59F0)
#define E2C43A55833C0911_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2C43A55833C0911_F5628F8349D4A8A6_TypeDefinitionIndex = 12721;

class E2C43A55833C0911_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E2C43A55833C0911_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E2C43A55833C0911_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E2C43A55833C0911_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_E24FFC86744F9F1C()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E2C43A55833C0911_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E2C43A55833C0911_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C43A55833C0911_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A8F085D1B0DCF480(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E2C43A55833C0911_F5628F8349D4A8A6_A8F085D1B0DCF480_OFFSET))(this, A6CAE7339066B0FB);
	}
};
