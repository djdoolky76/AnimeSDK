#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostEffects; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKNHLLDALCE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x149B54D0)
#define DKNHLLDALCE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x149B4DC0)
#define DKNHLLDALCE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x149B4CD0)
#define DKNHLLDALCE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x149B5260)
#define DKNHLLDALCE_PMOAMLBDMNL_OFFSET UNITYSDK_OFFSET(0x149B4FF0)

inline static constexpr unsigned int DKNHLLDALCE_TypeDefinitionIndex = 64678;

class DKNHLLDALCE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>** StaticGet_FEFOFNHCDDA()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>**)Il2CppClass::FromTypeDefinitionIndex(DKNHLLDALCE_TypeDefinitionIndex)->GetStaticField(0x314B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>** StaticGet_DONBLIIMPPI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>**)Il2CppClass::FromTypeDefinitionIndex(DKNHLLDALCE_TypeDefinitionIndex)->GetStaticField(0x314B8);
	}
	static ::MoleMole::Config::ConfigGhostEffects** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGhostEffects**)Il2CppClass::FromTypeDefinitionIndex(DKNHLLDALCE_TypeDefinitionIndex)->GetStaticField(0x314C0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DKNHLLDALCE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigGhostMove* PMOAMLBDMNL(::MoleMole::Config::CharacterSize BEPMDFENBMH)
	{
		return ((::MoleMole::Config::ConfigGhostMove*(*)(::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + DKNHLLDALCE_PMOAMLBDMNL_OFFSET))(BEPMDFENBMH);
	}

	static ::MoleMole::Config::ConfigGhostEffect* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigGhostEffect*(*)(::System::String*))((::PBYTE)hIl2Cpp + DKNHLLDALCE_KGNEJKNNODJ_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DKNHLLDALCE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigGhostEffects* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGhostEffects*(*)())((::PBYTE)hIl2Cpp + DKNHLLDALCE_COPIDBEMEIE_OFFSET))();
	}
};
