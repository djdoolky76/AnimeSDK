#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NMEOBOGLNNE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16B891E0)
#define NMEOBOGLNNE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16B88FD0)
#define NMEOBOGLNNE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16B893C0)

inline static constexpr unsigned int NMEOBOGLNNE_TypeDefinitionIndex = 41744;

class NMEOBOGLNNE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSwitchTeamActivity** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigSwitchTeamActivity**)Il2CppClass::FromTypeDefinitionIndex(NMEOBOGLNNE_TypeDefinitionIndex)->GetStaticField(0x3C990);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigSwitchTeamActivity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigSwitchTeamActivity*(*)())((::PBYTE)hIl2Cpp + NMEOBOGLNNE_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
