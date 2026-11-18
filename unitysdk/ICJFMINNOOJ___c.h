#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBGHHAHMAII;
namespace System { template <typename T> class Action_1; }

#define ICJFMINNOOJ___C_KFEMPBFMLLP_OFFSET UNITYSDK_OFFSET(0x181AB810)
#define ICJFMINNOOJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181AB7C0)
#define ICJFMINNOOJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181AB800)

inline static constexpr unsigned int ICJFMINNOOJ___c_TypeDefinitionIndex = 48319;

class ICJFMINNOOJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::FBGHHAHMAII*>** StaticGet___9__26_0()
	{
		return (::System::Action_1<::FBGHHAHMAII*>**)Il2CppClass::FromTypeDefinitionIndex(ICJFMINNOOJ___c_TypeDefinitionIndex)->GetStaticField(0x3B240);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ICJFMINNOOJ___c_TypeDefinitionIndex)->GetStaticField(0x3B248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJFMINNOOJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJFMINNOOJ___C__CTOR_OFFSET))(this);
	}

	::System::Void KFEMPBFMLLP(::FBGHHAHMAII* NGDJMMAJBJH)
	{
		return ((::System::Void(*)(::PVOID, ::FBGHHAHMAII*))((::PBYTE)hIl2Cpp + ICJFMINNOOJ___C_KFEMPBFMLLP_OFFSET))(this, NGDJMMAJBJH);
	}
};
