#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KLDMNFJNOEO;
namespace System { template <typename T> class Action_1; }

#define GFMKBBIPMHB___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x125CE140)
#define GFMKBBIPMHB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125CE0F0)
#define GFMKBBIPMHB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125CE130)

inline static constexpr unsigned int GFMKBBIPMHB___c_TypeDefinitionIndex = 75383;

class GFMKBBIPMHB___c : public ::System::Object
{
public:
	static ::System::Action_1<::KLDMNFJNOEO*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::KLDMNFJNOEO*>**)Il2CppClass::FromTypeDefinitionIndex(GFMKBBIPMHB___c_TypeDefinitionIndex)->GetStaticField(0x46360);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFMKBBIPMHB___c_TypeDefinitionIndex)->GetStaticField(0x46368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMKBBIPMHB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKBBIPMHB___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::KLDMNFJNOEO* FGHPFMJNHLE)
	{
		return ((::System::Void(*)(::PVOID, ::KLDMNFJNOEO*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB___C_DAGKBNKBPCI_OFFSET))(this, FGHPFMJNHLE);
	}
};
