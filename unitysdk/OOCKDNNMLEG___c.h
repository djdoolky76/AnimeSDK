#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define OOCKDNNMLEG___C_BKCCHPDNGGE_OFFSET UNITYSDK_OFFSET(0x16F8A530)
#define OOCKDNNMLEG___C_DLHKHAFGPKC_OFFSET UNITYSDK_OFFSET(0x16F8A540)
#define OOCKDNNMLEG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F8A4E0)
#define OOCKDNNMLEG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8A520)

inline static constexpr unsigned int OOCKDNNMLEG___c_TypeDefinitionIndex = 81860;

class OOCKDNNMLEG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Single>** StaticGet___9__75_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG___c_TypeDefinitionIndex)->GetStaticField(0x3A0C0);
	}
	static ::System::Func_1<::System::Single>** StaticGet___9__74_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG___c_TypeDefinitionIndex)->GetStaticField(0x3A0C8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OOCKDNNMLEG___c_TypeDefinitionIndex)->GetStaticField(0x3A0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCKDNNMLEG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG___C__CTOR_OFFSET))(this);
	}

	::System::Single BKCCHPDNGGE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG___C_BKCCHPDNGGE_OFFSET))(this);
	}

	::System::Single DLHKHAFGPKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG___C_DLHKHAFGPKC_OFFSET))(this);
	}
};
