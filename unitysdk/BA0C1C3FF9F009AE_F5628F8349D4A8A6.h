#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define BA0C1C3FF9F009AE_F5628F8349D4A8A6_AB9B1BA9E2F6BB28_OFFSET UNITYSDK_OFFSET(0x399F3E0)
#define BA0C1C3FF9F009AE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39A1D40)
#define BA0C1C3FF9F009AE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA0C1C3FF9F009AE_F5628F8349D4A8A6_TypeDefinitionIndex = 12527;

class BA0C1C3FF9F009AE_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BA0C1C3FF9F009AE_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BA0C1C3FF9F009AE_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BA0C1C3FF9F009AE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_F2C54999C1BBBACC()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(BA0C1C3FF9F009AE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA0C1C3FF9F009AE_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA0C1C3FF9F009AE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AB9B1BA9E2F6BB28(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BA0C1C3FF9F009AE_F5628F8349D4A8A6_AB9B1BA9E2F6BB28_OFFSET))(this, A6CAE7339066B0FB);
	}
};
