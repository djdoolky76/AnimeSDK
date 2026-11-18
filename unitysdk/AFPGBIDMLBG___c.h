#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AFPGBIDMLBG___C_BDFIFBOALPO_OFFSET UNITYSDK_OFFSET(0x181F0F20)
#define AFPGBIDMLBG___C_PGONGNMMNIM_OFFSET UNITYSDK_OFFSET(0x181F0F10)
#define AFPGBIDMLBG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F0EC0)
#define AFPGBIDMLBG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0F00)

inline static constexpr unsigned int AFPGBIDMLBG___c_TypeDefinitionIndex = 44039;

class AFPGBIDMLBG___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__12_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AFPGBIDMLBG___c_TypeDefinitionIndex)->GetStaticField(0x2FDC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AFPGBIDMLBG___c_TypeDefinitionIndex)->GetStaticField(0x2FDC8);
	}
	static ::System::Action** StaticGet___9__12_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AFPGBIDMLBG___c_TypeDefinitionIndex)->GetStaticField(0x2FDD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPGBIDMLBG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG___C__CTOR_OFFSET))(this);
	}

	::System::Void PGONGNMMNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG___C_PGONGNMMNIM_OFFSET))(this);
	}

	::System::Void BDFIFBOALPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG___C_BDFIFBOALPO_OFFSET))(this);
	}
};
