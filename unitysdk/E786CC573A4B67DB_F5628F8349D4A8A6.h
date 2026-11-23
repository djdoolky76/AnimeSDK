#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E786CC573A4B67DB_F5628F8349D4A8A6_A37EF53CE597AD39_OFFSET UNITYSDK_OFFSET(0x3A5AE40)
#define E786CC573A4B67DB_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A5D580)
#define E786CC573A4B67DB_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E786CC573A4B67DB_F5628F8349D4A8A6_TypeDefinitionIndex = 12980;

class E786CC573A4B67DB_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E786CC573A4B67DB_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E786CC573A4B67DB_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E786CC573A4B67DB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_FE9102701817EE34()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(E786CC573A4B67DB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E786CC573A4B67DB_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A37EF53CE597AD39(::MiHoYo::SDK::NetworkResponseModel* E0BB02EDCCFC0E4E)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_F5628F8349D4A8A6_A37EF53CE597AD39_OFFSET))(this, E0BB02EDCCFC0E4E);
	}
};
