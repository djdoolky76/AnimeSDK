#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DJDDGKFCNAJ___C_AMFFMPCMELB_OFFSET UNITYSDK_OFFSET(0x19D68590)
#define DJDDGKFCNAJ___C_JCLGFGDDNDK_OFFSET UNITYSDK_OFFSET(0x19D685A0)
#define DJDDGKFCNAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D68540)
#define DJDDGKFCNAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D68580)

inline static constexpr unsigned int DJDDGKFCNAJ___c_TypeDefinitionIndex = 40326;

class DJDDGKFCNAJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJDDGKFCNAJ___c_TypeDefinitionIndex)->GetStaticField(0x404C0);
	}
	static ::System::Action** StaticGet___9__10_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DJDDGKFCNAJ___c_TypeDefinitionIndex)->GetStaticField(0x404C8);
	}
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DJDDGKFCNAJ___c_TypeDefinitionIndex)->GetStaticField(0x404D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJDDGKFCNAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ___C__CTOR_OFFSET))(this);
	}

	::System::Void AMFFMPCMELB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ___C_AMFFMPCMELB_OFFSET))(this);
	}

	::System::Void JCLGFGDDNDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ___C_JCLGFGDDNDK_OFFSET))(this);
	}
};
