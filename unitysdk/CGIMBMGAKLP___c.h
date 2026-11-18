#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CGIMBMGAKLP___C_CECLPEDLCDP_OFFSET UNITYSDK_OFFSET(0x10E392D0)
#define CGIMBMGAKLP___C_GOLOOBKNAIA_OFFSET UNITYSDK_OFFSET(0x10E39040)
#define CGIMBMGAKLP___C_JMBLADDMMHI_OFFSET UNITYSDK_OFFSET(0x10E39110)
#define CGIMBMGAKLP___C_JOCIOFCLIDJ_OFFSET UNITYSDK_OFFSET(0x10E391F0)
#define CGIMBMGAKLP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E38FF0)
#define CGIMBMGAKLP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E39030)

inline static constexpr unsigned int CGIMBMGAKLP___c_TypeDefinitionIndex = 75064;

class CGIMBMGAKLP___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__22_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CGIMBMGAKLP___c_TypeDefinitionIndex)->GetStaticField(0x40330);
	}
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CGIMBMGAKLP___c_TypeDefinitionIndex)->GetStaticField(0x40338);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGIMBMGAKLP___c_TypeDefinitionIndex)->GetStaticField(0x40340);
	}
	static ::System::Action** StaticGet___9__26_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CGIMBMGAKLP___c_TypeDefinitionIndex)->GetStaticField(0x40348);
	}
	static ::System::Action** StaticGet___9__22_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CGIMBMGAKLP___c_TypeDefinitionIndex)->GetStaticField(0x40350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C__CTOR_OFFSET))(this);
	}

	::System::Void GOLOOBKNAIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C_GOLOOBKNAIA_OFFSET))(this);
	}

	::System::Void JMBLADDMMHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C_JMBLADDMMHI_OFFSET))(this);
	}

	::System::Void JOCIOFCLIDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C_JOCIOFCLIDJ_OFFSET))(this);
	}

	::System::Void CECLPEDLCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP___C_CECLPEDLCDP_OFFSET))(this);
	}
};
