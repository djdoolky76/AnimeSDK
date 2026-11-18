#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HLIMEMCJGKD_CIPCJDNLLLM_OFFSET UNITYSDK_OFFSET(0x16F439E0)
#define HLIMEMCJGKD_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16F43D60)
#define HLIMEMCJGKD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16F44030)
#define HLIMEMCJGKD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16F43F40)
#define HLIMEMCJGKD_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x16F441F0)

inline static constexpr unsigned int HLIMEMCJGKD_TypeDefinitionIndex = 38483;

class HLIMEMCJGKD : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeleportSelections** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigTeleportSelections**)Il2CppClass::FromTypeDefinitionIndex(HLIMEMCJGKD_TypeDefinitionIndex)->GetStaticField(0x3DF60);
	}

	static ::MoleMole::Config::ConfigTeleportSelection3C* CIPCJDNLLLM(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF)
	{
		return ((::MoleMole::Config::ConfigTeleportSelection3C*(*)(::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_CIPCJDNLLLM_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigTeleportSelections* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigTeleportSelections*(*)())((::PBYTE)hIl2Cpp + HLIMEMCJGKD_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigTeleportSelections* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}
};
