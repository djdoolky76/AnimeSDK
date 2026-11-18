#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DEAKMFEBBIN___C_GAPNPIAGGJN_OFFSET UNITYSDK_OFFSET(0x15369310)
#define DEAKMFEBBIN___C_HGCICDADJKH_OFFSET UNITYSDK_OFFSET(0x153693E0)
#define DEAKMFEBBIN___C_LLDHEEMIGLL_OFFSET UNITYSDK_OFFSET(0x153691E0)
#define DEAKMFEBBIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15369190)
#define DEAKMFEBBIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153691D0)

inline static constexpr unsigned int DEAKMFEBBIN___c_TypeDefinitionIndex = 67719;

class DEAKMFEBBIN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEAKMFEBBIN___c_TypeDefinitionIndex)->GetStaticField(0x3A850);
	}
	static ::System::Action** StaticGet___9__59_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DEAKMFEBBIN___c_TypeDefinitionIndex)->GetStaticField(0x3A858);
	}
	static ::System::Action** StaticGet___9__59_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DEAKMFEBBIN___c_TypeDefinitionIndex)->GetStaticField(0x3A860);
	}
	static ::System::Action** StaticGet___9__66_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DEAKMFEBBIN___c_TypeDefinitionIndex)->GetStaticField(0x3A868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAKMFEBBIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN___C__CTOR_OFFSET))(this);
	}

	::System::Void LLDHEEMIGLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN___C_LLDHEEMIGLL_OFFSET))(this);
	}

	::System::Void GAPNPIAGGJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN___C_GAPNPIAGGJN_OFFSET))(this);
	}

	::System::Void HGCICDADJKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN___C_HGCICDADJKH_OFFSET))(this);
	}
};
