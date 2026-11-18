#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNPHNIKEBAL;
class JNIMKFPOOHC;
namespace System { class Action; }

#define PEDFBHLLIBA___C_EEGDGECAGMB_OFFSET UNITYSDK_OFFSET(0x1F4A2540)
#define PEDFBHLLIBA___C_IAFAPKFCMLN_OFFSET UNITYSDK_OFFSET(0x1F4A2690)
#define PEDFBHLLIBA___C_PHDMACMBDDE_OFFSET UNITYSDK_OFFSET(0x1F4A2550)
#define PEDFBHLLIBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A24F0)
#define PEDFBHLLIBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A2530)

inline static constexpr unsigned int PEDFBHLLIBA___c_TypeDefinitionIndex = 96456;

class PEDFBHLLIBA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PEDFBHLLIBA___c_TypeDefinitionIndex)->GetStaticField(0x52EE0);
	}
	static ::System::Action** StaticGet___9__53_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PEDFBHLLIBA___c_TypeDefinitionIndex)->GetStaticField(0x52EE8);
	}
	static ::System::Action** StaticGet___9__32_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PEDFBHLLIBA___c_TypeDefinitionIndex)->GetStaticField(0x52EF0);
	}
	static ::JNIMKFPOOHC** StaticGet___9__79_0()
	{
		return (::JNIMKFPOOHC**)Il2CppClass::FromTypeDefinitionIndex(PEDFBHLLIBA___c_TypeDefinitionIndex)->GetStaticField(0x52EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEDFBHLLIBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA___C__CTOR_OFFSET))(this);
	}

	::System::Void EEGDGECAGMB(::BNPHNIKEBAL* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::BNPHNIKEBAL*))((::PBYTE)hIl2Cpp + PEDFBHLLIBA___C_EEGDGECAGMB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PHDMACMBDDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA___C_PHDMACMBDDE_OFFSET))(this);
	}

	::System::Void IAFAPKFCMLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA___C_IAFAPKFCMLN_OFFSET))(this);
	}
};
