#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHENCBMNLHL;
namespace System { template <typename T> class Action_1; }

#define NEGKPFEAMNK___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0xE18FCF0)
#define NEGKPFEAMNK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE18FCA0)
#define NEGKPFEAMNK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE18FCE0)

inline static constexpr unsigned int NEGKPFEAMNK___c_TypeDefinitionIndex = 90570;

class NEGKPFEAMNK___c : public ::System::Object
{
public:
	static ::System::Action_1<::DHENCBMNLHL*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::DHENCBMNLHL*>**)Il2CppClass::FromTypeDefinitionIndex(NEGKPFEAMNK___c_TypeDefinitionIndex)->GetStaticField(0x424D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NEGKPFEAMNK___c_TypeDefinitionIndex)->GetStaticField(0x424D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGKPFEAMNK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGKPFEAMNK___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::DHENCBMNLHL* LOALFCNFLFB)
	{
		return ((::System::Void(*)(::PVOID, ::DHENCBMNLHL*))((::PBYTE)hIl2Cpp + NEGKPFEAMNK___C_DAGKBNKBPCI_OFFSET))(this, LOALFCNFLFB);
	}
};
