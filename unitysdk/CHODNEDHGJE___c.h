#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CHODNEDHGJE___C_EDOEIHIOPNA_OFFSET UNITYSDK_OFFSET(0x128FB400)
#define CHODNEDHGJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128FB3B0)
#define CHODNEDHGJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128FB3F0)

inline static constexpr unsigned int CHODNEDHGJE___c_TypeDefinitionIndex = 88601;

class CHODNEDHGJE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__58_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE___c_TypeDefinitionIndex)->GetStaticField(0x3D650);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE___c_TypeDefinitionIndex)->GetStaticField(0x3D658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE___C__CTOR_OFFSET))(this);
	}

	::System::Void EDOEIHIOPNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE___C_EDOEIHIOPNA_OFFSET))(this);
	}
};
