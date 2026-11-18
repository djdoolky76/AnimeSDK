#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GDKBOONBJOD___C_FFCHFACBIBH_OFFSET UNITYSDK_OFFSET(0x189F5C90)
#define GDKBOONBJOD___C_FPEHCNHPOBF_OFFSET UNITYSDK_OFFSET(0x189F5CB0)
#define GDKBOONBJOD___C_LAINIGJCKGE_OFFSET UNITYSDK_OFFSET(0x189F5CC0)
#define GDKBOONBJOD___C_OOOIOIGHPEC_OFFSET UNITYSDK_OFFSET(0x189F5CA0)
#define GDKBOONBJOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F5C40)
#define GDKBOONBJOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189F5C80)

inline static constexpr unsigned int GDKBOONBJOD___c_TypeDefinitionIndex = 55385;

class GDKBOONBJOD___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__8_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDKBOONBJOD___c_TypeDefinitionIndex)->GetStaticField(0x440D0);
	}
	static ::System::Action** StaticGet___9__9_19()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDKBOONBJOD___c_TypeDefinitionIndex)->GetStaticField(0x440D8);
	}
	static ::System::Action** StaticGet___9__9_13()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDKBOONBJOD___c_TypeDefinitionIndex)->GetStaticField(0x440E0);
	}
	static ::System::Action** StaticGet___9__9_5()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GDKBOONBJOD___c_TypeDefinitionIndex)->GetStaticField(0x440E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDKBOONBJOD___c_TypeDefinitionIndex)->GetStaticField(0x440F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKBOONBJOD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD___C__CTOR_OFFSET))(this);
	}

	::System::Void FFCHFACBIBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD___C_FFCHFACBIBH_OFFSET))(this);
	}

	::System::Void OOOIOIGHPEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD___C_OOOIOIGHPEC_OFFSET))(this);
	}

	::System::Void FPEHCNHPOBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD___C_FPEHCNHPOBF_OFFSET))(this);
	}

	::System::Void LAINIGJCKGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD___C_LAINIGJCKGE_OFFSET))(this);
	}
};
