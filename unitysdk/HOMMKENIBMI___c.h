#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBMJAGGDPGC;
namespace System { template <typename T> class Action_1; }

#define HOMMKENIBMI___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x16D04E30)
#define HOMMKENIBMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D04DE0)
#define HOMMKENIBMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D04E20)

inline static constexpr unsigned int HOMMKENIBMI___c_TypeDefinitionIndex = 60016;

class HOMMKENIBMI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOMMKENIBMI___c_TypeDefinitionIndex)->GetStaticField(0x37BD0);
	}
	static ::System::Action_1<::JBMJAGGDPGC*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::JBMJAGGDPGC*>**)Il2CppClass::FromTypeDefinitionIndex(HOMMKENIBMI___c_TypeDefinitionIndex)->GetStaticField(0x37BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOMMKENIBMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMKENIBMI___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::JBMJAGGDPGC* NPLINKPKJON)
	{
		return ((::System::Void(*)(::PVOID, ::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI___C_DHIPFOHDMOE_OFFSET))(this, NPLINKPKJON);
	}
};
