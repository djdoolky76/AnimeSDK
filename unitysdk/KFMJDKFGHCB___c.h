#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define KFMJDKFGHCB___C_CKGDGAOBGMP_OFFSET UNITYSDK_OFFSET(0x129942D0)
#define KFMJDKFGHCB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12994280)
#define KFMJDKFGHCB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129942C0)

inline static constexpr unsigned int KFMJDKFGHCB___c_TypeDefinitionIndex = 57605;

class KFMJDKFGHCB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KFMJDKFGHCB___c_TypeDefinitionIndex)->GetStaticField(0x413F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMJDKFGHCB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB___C__CTOR_OFFSET))(this);
	}

	::System::Void CKGDGAOBGMP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB___C_CKGDGAOBGMP_OFFSET))(this, KECKGDFIALJ);
	}
};
