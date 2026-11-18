#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCNJIFBMMIG_MAACIAMALBA;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define PCNJIFBMMIG___C_GIDHOMOGLJH_OFFSET UNITYSDK_OFFSET(0x19498330)
#define PCNJIFBMMIG___C_MDHGDGLEKEO_OFFSET UNITYSDK_OFFSET(0x19498280)
#define PCNJIFBMMIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19498230)
#define PCNJIFBMMIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19498270)

inline static constexpr unsigned int PCNJIFBMMIG___c_TypeDefinitionIndex = 92055;

class PCNJIFBMMIG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCNJIFBMMIG___c_TypeDefinitionIndex)->GetStaticField(0x36260);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PCNJIFBMMIG___c_TypeDefinitionIndex)->GetStaticField(0x36268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCNJIFBMMIG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNJIFBMMIG___C__CTOR_OFFSET))(this);
	}

	::System::Void MDHGDGLEKEO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PCNJIFBMMIG___C_MDHGDGLEKEO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Int32 GIDHOMOGLJH(::PCNJIFBMMIG_MAACIAMALBA* LEDMDCCOJEL, ::PCNJIFBMMIG_MAACIAMALBA* LONJDPHDNPD)
	{
		return ((::System::Int32(*)(::PVOID, ::PCNJIFBMMIG_MAACIAMALBA*, ::PCNJIFBMMIG_MAACIAMALBA*))((::PBYTE)hIl2Cpp + PCNJIFBMMIG___C_GIDHOMOGLJH_OFFSET))(this, LEDMDCCOJEL, LONJDPHDNPD);
	}
};
