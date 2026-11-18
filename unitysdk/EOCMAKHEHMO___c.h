#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EOCMAKHEHMO___C_NLFDKJJKIBG_OFFSET UNITYSDK_OFFSET(0x11CBC710)
#define EOCMAKHEHMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CBC6C0)
#define EOCMAKHEHMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBC700)

inline static constexpr unsigned int EOCMAKHEHMO___c_TypeDefinitionIndex = 53270;

class EOCMAKHEHMO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOCMAKHEHMO___c_TypeDefinitionIndex)->GetStaticField(0x4CE00);
	}
	static ::System::Action** StaticGet___9__72_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EOCMAKHEHMO___c_TypeDefinitionIndex)->GetStaticField(0x4CE08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOCMAKHEHMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO___C__CTOR_OFFSET))(this);
	}

	::System::Void NLFDKJJKIBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO___C_NLFDKJJKIBG_OFFSET))(this);
	}
};
