#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GDGCHLIBEHM___C_OEMPAGIIFHH_OFFSET UNITYSDK_OFFSET(0x175244A0)
#define GDGCHLIBEHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17524450)
#define GDGCHLIBEHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17524490)

inline static constexpr unsigned int GDGCHLIBEHM___c_TypeDefinitionIndex = 54990;

class GDGCHLIBEHM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDGCHLIBEHM___c_TypeDefinitionIndex)->GetStaticField(0x37800);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDGCHLIBEHM___c_TypeDefinitionIndex)->GetStaticField(0x37808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGCHLIBEHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM___C__CTOR_OFFSET))(this);
	}

	::System::Void OEMPAGIIFHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM___C_OEMPAGIIFHH_OFFSET))(this);
	}
};
