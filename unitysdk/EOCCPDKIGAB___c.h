#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EOCCPDKIGAB___C_NEKMLKIENAK_OFFSET UNITYSDK_OFFSET(0x11AAB290)
#define EOCCPDKIGAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AAB240)
#define EOCCPDKIGAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAB280)

inline static constexpr unsigned int EOCCPDKIGAB___c_TypeDefinitionIndex = 68075;

class EOCCPDKIGAB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EOCCPDKIGAB___c_TypeDefinitionIndex)->GetStaticField(0x40870);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOCCPDKIGAB___c_TypeDefinitionIndex)->GetStaticField(0x40878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOCCPDKIGAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCCPDKIGAB___C__CTOR_OFFSET))(this);
	}

	::System::Void NEKMLKIENAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCCPDKIGAB___C_NEKMLKIENAK_OFFSET))(this);
	}
};
