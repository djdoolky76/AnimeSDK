#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEEMBDAMHIE;
namespace System { template <typename T> class Action_1; }

#define FIJKJNPANOA___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1FB10E80)
#define FIJKJNPANOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB10E30)
#define FIJKJNPANOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB10E70)

inline static constexpr unsigned int FIJKJNPANOA___c_TypeDefinitionIndex = 28860;

class FIJKJNPANOA___c : public ::System::Object
{
public:
	static ::System::Action_1<::OEEMBDAMHIE*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::OEEMBDAMHIE*>**)Il2CppClass::FromTypeDefinitionIndex(FIJKJNPANOA___c_TypeDefinitionIndex)->GetStaticField(0x25E10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FIJKJNPANOA___c_TypeDefinitionIndex)->GetStaticField(0x25E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJKJNPANOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJKJNPANOA___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::OEEMBDAMHIE* NFCNHEHIADH)
	{
		return ((::System::Void(*)(::PVOID, ::OEEMBDAMHIE*))((::PBYTE)hIl2Cpp + FIJKJNPANOA___C_DHIPFOHDMOE_OFFSET))(this, NFCNHEHIADH);
	}
};
