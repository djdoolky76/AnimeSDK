#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LEAJNLHLLOH___C_KHPGFGOFKMH_OFFSET UNITYSDK_OFFSET(0x1A306B90)
#define LEAJNLHLLOH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A306B40)
#define LEAJNLHLLOH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A306B80)

inline static constexpr unsigned int LEAJNLHLLOH___c_TypeDefinitionIndex = 92967;

class LEAJNLHLLOH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__20_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LEAJNLHLLOH___c_TypeDefinitionIndex)->GetStaticField(0x4A1A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LEAJNLHLLOH___c_TypeDefinitionIndex)->GetStaticField(0x4A1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEAJNLHLLOH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAJNLHLLOH___C__CTOR_OFFSET))(this);
	}

	::System::Void KHPGFGOFKMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAJNLHLLOH___C_KHPGFGOFKMH_OFFSET))(this);
	}
};
