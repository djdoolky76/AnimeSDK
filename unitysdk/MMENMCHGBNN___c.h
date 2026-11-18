#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MMENMCHGBNN___C_CNGIHBKGNLA_OFFSET UNITYSDK_OFFSET(0x1A69C5D0)
#define MMENMCHGBNN___C_KAGBPBDGFPL_OFFSET UNITYSDK_OFFSET(0x1A69C750)
#define MMENMCHGBNN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A69C580)
#define MMENMCHGBNN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69C5C0)

inline static constexpr unsigned int MMENMCHGBNN___c_TypeDefinitionIndex = 55152;

class MMENMCHGBNN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MMENMCHGBNN___c_TypeDefinitionIndex)->GetStaticField(0x50B30);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MMENMCHGBNN___c_TypeDefinitionIndex)->GetStaticField(0x50B38);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMENMCHGBNN___c_TypeDefinitionIndex)->GetStaticField(0x50B40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMENMCHGBNN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMENMCHGBNN___C__CTOR_OFFSET))(this);
	}

	::System::Void CNGIHBKGNLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMENMCHGBNN___C_CNGIHBKGNLA_OFFSET))(this);
	}

	::System::Void KAGBPBDGFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMENMCHGBNN___C_KAGBPBDGFPL_OFFSET))(this);
	}
};
