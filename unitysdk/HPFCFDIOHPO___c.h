#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define HPFCFDIOHPO___C_OEDDALBNIHP_OFFSET UNITYSDK_OFFSET(0x153899D0)
#define HPFCFDIOHPO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15389980)
#define HPFCFDIOHPO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153899C0)

inline static constexpr unsigned int HPFCFDIOHPO___c_TypeDefinitionIndex = 90619;

class HPFCFDIOHPO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPFCFDIOHPO___c_TypeDefinitionIndex)->GetStaticField(0x44360);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__19_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(HPFCFDIOHPO___c_TypeDefinitionIndex)->GetStaticField(0x44368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPFCFDIOHPO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO___C__CTOR_OFFSET))(this);
	}

	::System::Void OEDDALBNIHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO___C_OEDDALBNIHP_OFFSET))(this);
	}
};
