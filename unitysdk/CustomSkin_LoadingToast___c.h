#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CUSTOMSKIN_LOADINGTOAST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1831BAB0)
#define CUSTOMSKIN_LOADINGTOAST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1831BAF0)
#define CUSTOMSKIN_LOADINGTOAST___C__ONSHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1831BB00)

inline static constexpr unsigned int CustomSkin_LoadingToast___c_TypeDefinitionIndex = 48624;

class CustomSkin_LoadingToast___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x371B0);
	}
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x371B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnShow_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__ONSHOW_B__4_0_OFFSET))(this);
	}
};
