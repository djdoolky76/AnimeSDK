#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define DBJFFDGJBON___C_JJEOKLPGANB_OFFSET UNITYSDK_OFFSET(0x193F87E0)
#define DBJFFDGJBON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F8790)
#define DBJFFDGJBON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193F87D0)

inline static constexpr unsigned int DBJFFDGJBON___c_TypeDefinitionIndex = 58235;

class DBJFFDGJBON___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DBJFFDGJBON___c_TypeDefinitionIndex)->GetStaticField(0x313A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJFFDGJBON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJFFDGJBON___C__CTOR_OFFSET))(this);
	}

	::System::Single JJEOKLPGANB(::MoleMole::Battle::Entity* PIIPCLCCOIG)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBJFFDGJBON___C_JJEOKLPGANB_OFFSET))(this, PIIPCLCCOIG);
	}
};
