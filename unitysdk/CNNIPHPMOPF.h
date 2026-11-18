#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNNIPHPMOPF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1A1C1DA0)
#define CNNIPHPMOPF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1A1C1880)
#define CNNIPHPMOPF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1A1C1790)
#define CNNIPHPMOPF_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1A1C1780)
#define CNNIPHPMOPF_PCBGNBELMAI_OFFSET UNITYSDK_OFFSET(0x1A1C1A40)

inline static constexpr unsigned int CNNIPHPMOPF_TypeDefinitionIndex = 60860;

class CNNIPHPMOPF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEntityAttackEffectNames** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigEntityAttackEffectNames**)Il2CppClass::FromTypeDefinitionIndex(CNNIPHPMOPF_TypeDefinitionIndex)->GetStaticField(0x3D6E0);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigEntityAttackEffectNames* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::String* PCBGNBELMAI(::System::String* JMDHBJMNBCP, ::MoleMole::Config::DamageElementType EIILOAOBACD)
	{
		return ((::System::String*(*)(::System::String*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_PCBGNBELMAI_OFFSET))(JMDHBJMNBCP, EIILOAOBACD);
	}

	static ::MoleMole::Config::ConfigEntityAttackEffectNames* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigEntityAttackEffectNames*(*)())((::PBYTE)hIl2Cpp + CNNIPHPMOPF_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNNIPHPMOPF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
