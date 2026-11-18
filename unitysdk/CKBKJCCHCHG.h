#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CKBKJCCHCHG_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x145CF270)
#define CKBKJCCHCHG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x145CF060)
#define CKBKJCCHCHG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x145CEF70)
#define CKBKJCCHCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x145CEF60)

inline static constexpr unsigned int CKBKJCCHCHG_TypeDefinitionIndex = 51152;

class CKBKJCCHCHG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAutoBattleAccessoryEffect** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigAutoBattleAccessoryEffect**)Il2CppClass::FromTypeDefinitionIndex(CKBKJCCHCHG_TypeDefinitionIndex)->GetStaticField(0x40390);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBKJCCHCHG__CTOR_OFFSET))(this);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigAutoBattleAccessoryEffect* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigAutoBattleAccessoryEffect*(*)())((::PBYTE)hIl2Cpp + CKBKJCCHCHG_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
