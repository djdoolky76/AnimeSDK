#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E83E61D0C2CE972F_F5628F8349D4A8A6_B4CABFB004E981F4_OFFSET UNITYSDK_OFFSET(0x3A299D0)
#define E83E61D0C2CE972F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2BA50)
#define E83E61D0C2CE972F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E83E61D0C2CE972F_F5628F8349D4A8A6_TypeDefinitionIndex = 12866;

class E83E61D0C2CE972F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E83E61D0C2CE972F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E83E61D0C2CE972F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E83E61D0C2CE972F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_B61CC0AF0D30B87F()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E83E61D0C2CE972F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B4CABFB004E981F4(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_F5628F8349D4A8A6_B4CABFB004E981F4_OFFSET))(this, A6CAE7339066B0FB);
	}
};
