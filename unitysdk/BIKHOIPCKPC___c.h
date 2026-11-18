#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BIKHOIPCKPC___C_JBFHLMPJHLK_OFFSET UNITYSDK_OFFSET(0x1691DCA0)
#define BIKHOIPCKPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1691DC50)
#define BIKHOIPCKPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1691DC90)

inline static constexpr unsigned int BIKHOIPCKPC___c_TypeDefinitionIndex = 46384;

class BIKHOIPCKPC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BIKHOIPCKPC___c_TypeDefinitionIndex)->GetStaticField(0x45CB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BIKHOIPCKPC___c_TypeDefinitionIndex)->GetStaticField(0x45CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKHOIPCKPC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKHOIPCKPC___C__CTOR_OFFSET))(this);
	}

	::System::Void JBFHLMPJHLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKHOIPCKPC___C_JBFHLMPJHLK_OFFSET))(this);
	}
};
