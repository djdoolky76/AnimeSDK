#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JBEOFGBBCBK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x160D1A90)
#define JBEOFGBBCBK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x160D18D0)
#define JBEOFGBBCBK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x160D17E0)
#define JBEOFGBBCBK_JAJCMNJJFGI_OFFSET UNITYSDK_OFFSET(0x160D1C80)
#define JBEOFGBBCBK_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x160D1C70)

inline static constexpr unsigned int JBEOFGBBCBK_TypeDefinitionIndex = 65164;

class JBEOFGBBCBK : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBuddyMisc** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigBuddyMisc**)Il2CppClass::FromTypeDefinitionIndex(JBEOFGBBCBK_TypeDefinitionIndex)->GetStaticField(0x49500);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigBuddyMisc* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigBuddyMisc*(*)())((::PBYTE)hIl2Cpp + JBEOFGBBCBK_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigBuddyMisc* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean JAJCMNJJFGI(::MoleMole::Config::BuddyBehaviourType BOIAOAHNFMG, ::MoleMole::Config::ConfigBuddyBehaviour& OBJAIEELNHD)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour&))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_JAJCMNJJFGI_OFFSET))(BOIAOAHNFMG, OBJAIEELNHD);
	}
};
