#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_TimeOfDay.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"
#include "unitysdk/KPOGELOMGNB_GDPFGEPHBLE.h"

class AGHDCHDNLFG;
class FCBNEBOPNIF;
namespace System { class String; }

#define KPOGELOMGNB_CIOPFJNFMBB_OFFSET UNITYSDK_OFFSET(0x19976DC0)
#define KPOGELOMGNB_CKDEOMDBKBC_OFFSET UNITYSDK_OFFSET(0x19975F20)
#define KPOGELOMGNB_FNKGHIDECGE_OFFSET UNITYSDK_OFFSET(0x19976310)
#define KPOGELOMGNB_HKAGNGFCGCK_OFFSET UNITYSDK_OFFSET(0x19976770)
#define KPOGELOMGNB_JBJAEICCBJD_OFFSET UNITYSDK_OFFSET(0x199763D0)
#define KPOGELOMGNB_JMHPNEIAKMI_OFFSET UNITYSDK_OFFSET(0x19976820)
#define KPOGELOMGNB_KBGLBCLHNCP_OFFSET UNITYSDK_OFFSET(0x19975ED0)
#define KPOGELOMGNB_LGEEOOFEHPE_OFFSET UNITYSDK_OFFSET(0x19976100)
#define KPOGELOMGNB_LIABCONLOLN_OFFSET UNITYSDK_OFFSET(0x19975C60)
#define KPOGELOMGNB_MKGJLNKEFAN_OFFSET UNITYSDK_OFFSET(0x19976D40)
#define KPOGELOMGNB_MNLPBNENAPG_OFFSET UNITYSDK_OFFSET(0x19975FA0)
#define KPOGELOMGNB_PKMNMFMKGOO_OFFSET UNITYSDK_OFFSET(0x19975D80)

inline static constexpr unsigned int KPOGELOMGNB_TypeDefinitionIndex = 49580;

class KPOGELOMGNB : public ::System::Object
{
public:
	static ::System::Single LIABCONLOLN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KPOGELOMGNB_LIABCONLOLN_OFFSET))();
	}

	static ::System::Single PKMNMFMKGOO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KPOGELOMGNB_PKMNMFMKGOO_OFFSET))();
	}

	static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay KBGLBCLHNCP(::MoleMole::Config::TimePeriodType EMFIDMPAGIG)
	{
		return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay(*)(::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + KPOGELOMGNB_KBGLBCLHNCP_OFFSET))(EMFIDMPAGIG);
	}

	static ::System::Void CKDEOMDBKBC(::AGHDCHDNLFG* GJJBDNEKLNE, ::MoleMole::Config::TimePeriodType& MDKMECPGPCN, ::MoleMole::Config::WeatherType& POOEILFGMAO)
	{
		return ((::System::Void(*)(::AGHDCHDNLFG*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + KPOGELOMGNB_CKDEOMDBKBC_OFFSET))(GJJBDNEKLNE, MDKMECPGPCN, POOEILFGMAO);
	}

	static ::System::Void FNKGHIDECGE(::FCBNEBOPNIF* CENFDFIKBDC, ::MoleMole::Config::TimePeriodType& MDKMECPGPCN, ::MoleMole::Config::WeatherType& POOEILFGMAO)
	{
		return ((::System::Void(*)(::FCBNEBOPNIF*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + KPOGELOMGNB_FNKGHIDECGE_OFFSET))(CENFDFIKBDC, MDKMECPGPCN, POOEILFGMAO);
	}

	static ::MoleMole::Config::WeatherType LGEEOOFEHPE(::KPOGELOMGNB_GDPFGEPHBLE& param_0)
	{
		return ((::MoleMole::Config::WeatherType(*)(::KPOGELOMGNB_GDPFGEPHBLE&))((::PBYTE)hIl2Cpp + KPOGELOMGNB_LGEEOOFEHPE_OFFSET))(param_0);
	}

	static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType HKAGNGFCGCK(::MoleMole::Config::WeatherType POOEILFGMAO, ::MoleMole::Config::TimePeriodType FNIOPKPHDEH)
	{
		return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType(*)(::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + KPOGELOMGNB_HKAGNGFCGCK_OFFSET))(POOEILFGMAO, FNIOPKPHDEH);
	}

	static ::System::Void JMHPNEIAKMI(::System::Single JCIDAAGOJBH, ::AGHDCHDNLFG* NFPHOMFJGEO, ::FCBNEBOPNIF* CENFDFIKBDC, ::MoleMole::Config::TimePeriodType& MDKMECPGPCN, ::MoleMole::Config::WeatherType& POOEILFGMAO, ::System::Boolean AIAGKBAAHMN)
	{
		return ((::System::Void(*)(::System::Single, ::AGHDCHDNLFG*, ::FCBNEBOPNIF*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&, ::System::Boolean))((::PBYTE)hIl2Cpp + KPOGELOMGNB_JMHPNEIAKMI_OFFSET))(JCIDAAGOJBH, NFPHOMFJGEO, CENFDFIKBDC, MDKMECPGPCN, POOEILFGMAO, AIAGKBAAHMN);
	}

	static ::MoleMole::Config::TimePeriodType CIOPFJNFMBB(::System::Single LNIEAOBBCPL)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::System::Single))((::PBYTE)hIl2Cpp + KPOGELOMGNB_CIOPFJNFMBB_OFFSET))(LNIEAOBBCPL);
	}

	static ::System::Void JBJAEICCBJD(::Il2CppArray<::System::String*>* PJIBFAIFIEF, ::Il2CppArray<::System::String*>* BMDCBPIOFNP, ::MoleMole::Config::TimePeriodType& FNIOPKPHDEH, ::MoleMole::Config::WeatherType& ADDJGIFFNKP, ::System::Boolean MNBINIFAKGA, ::System::Boolean NDDLHFDGKKN, ::System::Boolean AIAGKBAAHMN)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KPOGELOMGNB_JBJAEICCBJD_OFFSET))(PJIBFAIFIEF, BMDCBPIOFNP, FNIOPKPHDEH, ADDJGIFFNKP, MNBINIFAKGA, NDDLHFDGKKN, AIAGKBAAHMN);
	}

	static ::MoleMole::Config::TimePeriodType MKGJLNKEFAN(::System::Single FNIOPKPHDEH)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::System::Single))((::PBYTE)hIl2Cpp + KPOGELOMGNB_MKGJLNKEFAN_OFFSET))(FNIOPKPHDEH);
	}

	static ::MoleMole::Config::TimePeriodType MNLPBNENAPG(::KPOGELOMGNB_GDPFGEPHBLE& param_0)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::KPOGELOMGNB_GDPFGEPHBLE&))((::PBYTE)hIl2Cpp + KPOGELOMGNB_MNLPBNENAPG_OFFSET))(param_0);
	}
};
