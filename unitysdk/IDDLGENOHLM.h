#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IDDLGENOHLM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF8384D0)
#define IDDLGENOHLM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF8388C0)
#define IDDLGENOHLM_FINJCMEHLCC_OFFSET UNITYSDK_OFFSET(0xF8382B0)
#define IDDLGENOHLM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0xF8386E0)
#define IDDLGENOHLM_PLDLNEAIIGP_OFFSET UNITYSDK_OFFSET(0xF8380C0)

inline static constexpr unsigned int IDDLGENOHLM_TypeDefinitionIndex = 47720;

class IDDLGENOHLM : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeamInspireZone** StaticGet_KHLAEMHKJIA()
	{
		return (::MoleMole::Config::ConfigTeamInspireZone**)Il2CppClass::FromTypeDefinitionIndex(IDDLGENOHLM_TypeDefinitionIndex)->GetStaticField(0x48090);
	}

	static ::MoleMole::Config::ConfigInspireZoneOperation* PLDLNEAIIGP(::MoleMole::Battle::InspireZoneOperationType DHMKAMPCAAE)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + IDDLGENOHLM_PLDLNEAIIGP_OFFSET))(DHMKAMPCAAE);
	}

	static ::System::String* FINJCMEHLCC(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IDDLGENOHLM_FINJCMEHLCC_OFFSET))(ABHBKFJKINO);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IDDLGENOHLM_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigTeamInspireZone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigTeamInspireZone*(*)())((::PBYTE)hIl2Cpp + IDDLGENOHLM_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IDDLGENOHLM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
