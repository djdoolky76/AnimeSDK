#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEFABLGCLOI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorZone; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIJBBIHJKAF_LOGPFOKMOMD_OFFSET UNITYSDK_OFFSET(0x1862C000)
#define KIJBBIHJKAF_PEIANADHJHB_OFFSET UNITYSDK_OFFSET(0x1862C3C0)
#define KIJBBIHJKAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862BF30)
#define KIJBBIHJKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1862BF20)

inline static constexpr unsigned int KIJBBIHJKAF_TypeDefinitionIndex = 71438;

class KIJBBIHJKAF : public ::System::Object
{
public:
	static ::MoleMole::Config::AnimatorZone** StaticGet_PBJHAKBBOIA()
	{
		return (::MoleMole::Config::AnimatorZone**)Il2CppClass::FromTypeDefinitionIndex(KIJBBIHJKAF_TypeDefinitionIndex)->GetStaticField(0x51FD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::AEFABLGCLOI>** StaticGet_GCMNJHHFNPG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::AEFABLGCLOI>**)Il2CppClass::FromTypeDefinitionIndex(KIJBBIHJKAF_TypeDefinitionIndex)->GetStaticField(0x51FD8);
	}
	static ::System::Boolean* StaticGet_JJAEDPDEHEJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KIJBBIHJKAF_TypeDefinitionIndex)->GetStaticField(0x13810);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJBBIHJKAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJBBIHJKAF__CCTOR_OFFSET))();
	}

	static ::AEFABLGCLOI LOGPFOKMOMD(::MoleMole::Config::AnimatorZone* ECMMKCJLBMD)
	{
		return ((::AEFABLGCLOI(*)(::MoleMole::Config::AnimatorZone*))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_LOGPFOKMOMD_OFFSET))(ECMMKCJLBMD);
	}

	static ::AEFABLGCLOI PEIANADHJHB(::MoleMole::Config::AnimatorZone* ECMMKCJLBMD)
	{
		return ((::AEFABLGCLOI(*)(::MoleMole::Config::AnimatorZone*))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_PEIANADHJHB_OFFSET))(ECMMKCJLBMD);
	}
};
