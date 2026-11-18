#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDAIPDJIFFP_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x126CCF60)
#define LDAIPDJIFFP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x126CD230)
#define LDAIPDJIFFP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x126CD140)
#define LDAIPDJIFFP_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x126CD430)

inline static constexpr unsigned int LDAIPDJIFFP_TypeDefinitionIndex = 90832;

class LDAIPDJIFFP : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeamEntity** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigTeamEntity**)Il2CppClass::FromTypeDefinitionIndex(LDAIPDJIFFP_TypeDefinitionIndex)->GetStaticField(0x36680);
	}

	static ::MoleMole::Config::ConfigTeamEntity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigTeamEntity*(*)())((::PBYTE)hIl2Cpp + LDAIPDJIFFP_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigTeamEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}
};
