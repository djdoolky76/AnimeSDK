#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GDMELEJIGLD___C_DJKBBBPKNJL_OFFSET UNITYSDK_OFFSET(0x165EDB20)
#define GDMELEJIGLD___C_NJKHJBAENEN_OFFSET UNITYSDK_OFFSET(0x165ED890)
#define GDMELEJIGLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165ED840)
#define GDMELEJIGLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165ED880)

inline static constexpr unsigned int GDMELEJIGLD___c_TypeDefinitionIndex = 56885;

class GDMELEJIGLD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDMELEJIGLD___c_TypeDefinitionIndex)->GetStaticField(0x31BD0);
	}
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDMELEJIGLD___c_TypeDefinitionIndex)->GetStaticField(0x31BD8);
	}
	static ::System::Action** StaticGet___9__8_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDMELEJIGLD___c_TypeDefinitionIndex)->GetStaticField(0x31BE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMELEJIGLD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMELEJIGLD___C__CTOR_OFFSET))(this);
	}

	::System::Void NJKHJBAENEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMELEJIGLD___C_NJKHJBAENEN_OFFSET))(this);
	}

	::System::Void DJKBBBPKNJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMELEJIGLD___C_DJKBBBPKNJL_OFFSET))(this);
	}
};
