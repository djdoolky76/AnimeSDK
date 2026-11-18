#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPANJPHEHLI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEMKNMHALDP_LOGPFOKMOMD_OFFSET UNITYSDK_OFFSET(0x15F17310)
#define GEMKNMHALDP_PEIANADHJHB_OFFSET UNITYSDK_OFFSET(0x15F17130)
#define GEMKNMHALDP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F17060)
#define GEMKNMHALDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15F17050)

inline static constexpr unsigned int GEMKNMHALDP_TypeDefinitionIndex = 83209;

class GEMKNMHALDP : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::PPANJPHEHLI>** StaticGet_GCMNJHHFNPG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::PPANJPHEHLI>**)Il2CppClass::FromTypeDefinitionIndex(GEMKNMHALDP_TypeDefinitionIndex)->GetStaticField(0x46350);
	}
	static ::MoleMole::Config::AnimatorEvent** StaticGet_NODFBOOHJGH()
	{
		return (::MoleMole::Config::AnimatorEvent**)Il2CppClass::FromTypeDefinitionIndex(GEMKNMHALDP_TypeDefinitionIndex)->GetStaticField(0x46358);
	}
	static ::System::Boolean* StaticGet_JJAEDPDEHEJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GEMKNMHALDP_TypeDefinitionIndex)->GetStaticField(0x10260);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMKNMHALDP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEMKNMHALDP__CCTOR_OFFSET))();
	}

	static ::PPANJPHEHLI PEIANADHJHB(::MoleMole::Config::AnimatorEvent* ECMMKCJLBMD)
	{
		return ((::PPANJPHEHLI(*)(::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + GEMKNMHALDP_PEIANADHJHB_OFFSET))(ECMMKCJLBMD);
	}

	static ::PPANJPHEHLI LOGPFOKMOMD(::MoleMole::Config::AnimatorEvent* ECMMKCJLBMD)
	{
		return ((::PPANJPHEHLI(*)(::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + GEMKNMHALDP_LOGPFOKMOMD_OFFSET))(ECMMKCJLBMD);
	}
};
