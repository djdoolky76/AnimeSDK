#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define GNACLIIBMED___C_LCMFPJJCJLD_OFFSET UNITYSDK_OFFSET(0x179FED40)
#define GNACLIIBMED___C_PJJBGCDCNDL_OFFSET UNITYSDK_OFFSET(0x179FED30)
#define GNACLIIBMED___C_PLKMINALOBO_OFFSET UNITYSDK_OFFSET(0x179FEE20)
#define GNACLIIBMED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FECE0)
#define GNACLIIBMED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179FED20)

inline static constexpr unsigned int GNACLIIBMED___c_TypeDefinitionIndex = 40207;

class GNACLIIBMED___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GNACLIIBMED___c_TypeDefinitionIndex)->GetStaticField(0x3DDD0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__76_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GNACLIIBMED___c_TypeDefinitionIndex)->GetStaticField(0x3DDD8);
	}
	static ::System::Action** StaticGet___9__84_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GNACLIIBMED___c_TypeDefinitionIndex)->GetStaticField(0x3DDE0);
	}
	static ::System::Func_1<::UnityEngine::Vector2>** StaticGet___9__76_24()
	{
		return (::System::Func_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(GNACLIIBMED___c_TypeDefinitionIndex)->GetStaticField(0x3DDE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNACLIIBMED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 PJJBGCDCNDL()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED___C_PJJBGCDCNDL_OFFSET))(this);
	}

	::System::Void LCMFPJJCJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED___C_LCMFPJJCJLD_OFFSET))(this);
	}

	::System::Boolean PLKMINALOBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED___C_PLKMINALOBO_OFFSET))(this);
	}
};
