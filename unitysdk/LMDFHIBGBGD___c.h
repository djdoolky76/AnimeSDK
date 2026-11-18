#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LMDFHIBGBGD___C_GBKBKDEPKKH_OFFSET UNITYSDK_OFFSET(0x1A627E30)
#define LMDFHIBGBGD___C_HEHMDHNAMPF_OFFSET UNITYSDK_OFFSET(0x1A627D50)
#define LMDFHIBGBGD___C_LCGNBFBCACP_OFFSET UNITYSDK_OFFSET(0x1A627E20)
#define LMDFHIBGBGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A627D00)
#define LMDFHIBGBGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A627D40)

inline static constexpr unsigned int LMDFHIBGBGD___c_TypeDefinitionIndex = 79909;

class LMDFHIBGBGD___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__62_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LMDFHIBGBGD___c_TypeDefinitionIndex)->GetStaticField(0x4D640);
	}
	static ::System::Action** StaticGet___9__62_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LMDFHIBGBGD___c_TypeDefinitionIndex)->GetStaticField(0x4D648);
	}
	static ::System::Action** StaticGet___9__61_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LMDFHIBGBGD___c_TypeDefinitionIndex)->GetStaticField(0x4D650);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LMDFHIBGBGD___c_TypeDefinitionIndex)->GetStaticField(0x4D658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDFHIBGBGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD___C__CTOR_OFFSET))(this);
	}

	::System::Void HEHMDHNAMPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD___C_HEHMDHNAMPF_OFFSET))(this);
	}

	::System::Void LCGNBFBCACP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD___C_LCGNBFBCACP_OFFSET))(this);
	}

	::System::Void GBKBKDEPKKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD___C_GBKBKDEPKKH_OFFSET))(this);
	}
};
