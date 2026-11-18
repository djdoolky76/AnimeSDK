#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JAFPMLCADPA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x19445110)
#define JAFPMLCADPA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19444B90)
#define JAFPMLCADPA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19445020)
#define JAFPMLCADPA_PLDLNEAIIGP_OFFSET UNITYSDK_OFFSET(0x19444DA0)

inline static constexpr unsigned int JAFPMLCADPA_TypeDefinitionIndex = 53841;

class JAFPMLCADPA : public ::System::Object
{
public:
	static ::MoleMole::FeverConfig** StaticGet_FLOEJPFANOO()
	{
		return (::MoleMole::FeverConfig**)Il2CppClass::FromTypeDefinitionIndex(JAFPMLCADPA_TypeDefinitionIndex)->GetStaticField(0x37FE0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JAFPMLCADPA_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigInspireZoneOperation* PLDLNEAIIGP(::MoleMole::Battle::InspireZoneOperationType OBNIAHNMHPF)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + JAFPMLCADPA_PLDLNEAIIGP_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JAFPMLCADPA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::FeverConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::FeverConfig*(*)())((::PBYTE)hIl2Cpp + JAFPMLCADPA_COPIDBEMEIE_OFFSET))();
	}
};
