#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDEKNCGIEDI;
namespace System { template <typename T> class Action_1; }

#define CBNACACDIOM___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x18DC3C90)
#define CBNACACDIOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC3C40)
#define CBNACACDIOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC3C80)

inline static constexpr unsigned int CBNACACDIOM___c_TypeDefinitionIndex = 83995;

class CBNACACDIOM___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDEKNCGIEDI*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MDEKNCGIEDI*>**)Il2CppClass::FromTypeDefinitionIndex(CBNACACDIOM___c_TypeDefinitionIndex)->GetStaticField(0x47BE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CBNACACDIOM___c_TypeDefinitionIndex)->GetStaticField(0x47BE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNACACDIOM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNACACDIOM___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::MDEKNCGIEDI* FLKIFCFCDCF)
	{
		return ((::System::Void(*)(::PVOID, ::MDEKNCGIEDI*))((::PBYTE)hIl2Cpp + CBNACACDIOM___C_DAGKBNKBPCI_OFFSET))(this, FLKIFCFCDCF);
	}
};
