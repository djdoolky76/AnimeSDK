#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MNMBOBMKPGH___C_GLEPGIKABGJ_OFFSET UNITYSDK_OFFSET(0x14D95C70)
#define MNMBOBMKPGH___C_KJKCJJMAJKA_OFFSET UNITYSDK_OFFSET(0x14D95B80)
#define MNMBOBMKPGH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D95B30)
#define MNMBOBMKPGH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D95B70)

inline static constexpr unsigned int MNMBOBMKPGH___c_TypeDefinitionIndex = 64093;

class MNMBOBMKPGH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__23_27()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MNMBOBMKPGH___c_TypeDefinitionIndex)->GetStaticField(0x4A450);
	}
	static ::System::Action** StaticGet___9__23_26()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MNMBOBMKPGH___c_TypeDefinitionIndex)->GetStaticField(0x4A458);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNMBOBMKPGH___c_TypeDefinitionIndex)->GetStaticField(0x4A460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNMBOBMKPGH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMBOBMKPGH___C__CTOR_OFFSET))(this);
	}

	::System::Void KJKCJJMAJKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMBOBMKPGH___C_KJKCJJMAJKA_OFFSET))(this);
	}

	::System::Void GLEPGIKABGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMBOBMKPGH___C_GLEPGIKABGJ_OFFSET))(this);
	}
};
