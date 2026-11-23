#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E9E81D8677537399_F5628F8349D4A8A6_E58324CD3FD9D24B_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define E9E81D8677537399_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39FEBC0)
#define E9E81D8677537399_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_F5628F8349D4A8A6_TypeDefinitionIndex = 11866;

class E9E81D8677537399_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E9E81D8677537399_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E9E81D8677537399_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E9E81D8677537399_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_FDE7746D7ED93F4E()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E9E81D8677537399_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E9E81D8677537399_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void E58324CD3FD9D24B(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E9E81D8677537399_F5628F8349D4A8A6_E58324CD3FD9D24B_OFFSET))(this, A6CAE7339066B0FB);
	}
};
