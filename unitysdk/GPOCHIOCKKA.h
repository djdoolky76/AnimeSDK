#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFNAMIJCHM.h"
#include "unitysdk/PCODMIJEJEP.h"

class CIJKMEDBHMM;
class MainCityObjectState_ScriptConfig;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }

#define GPOCHIOCKKA_DPCEGJPEEHA_OFFSET UNITYSDK_OFFSET(0x18169040)
#define GPOCHIOCKKA_FJLKEACBKKF_OFFSET UNITYSDK_OFFSET(0x18168F20)
#define GPOCHIOCKKA_HEDJIGHGGAH_OFFSET UNITYSDK_OFFSET(0x18169050)
#define GPOCHIOCKKA_HLPAMIGBBCL_OFFSET UNITYSDK_OFFSET(0x181690F0)
#define GPOCHIOCKKA_NAIFLDEIPIN_OFFSET UNITYSDK_OFFSET(0x18168FB0)
#define GPOCHIOCKKA_OABMBBANMCM_OFFSET UNITYSDK_OFFSET(0x18168C30)
#define GPOCHIOCKKA_OIBFEKPCDAL_OFFSET UNITYSDK_OFFSET(0x18168D40)
#define GPOCHIOCKKA_PCHHCBFOKFN_OFFSET UNITYSDK_OFFSET(0x18168DA0)
#define GPOCHIOCKKA__CTOR_OFFSET UNITYSDK_OFFSET(0x18168BF0)

inline static constexpr unsigned int GPOCHIOCKKA_TypeDefinitionIndex = 93181;

class GPOCHIOCKKA : public ::DIFNAMIJCHM
{
public:
	::MainCityObjectState_ScriptConfig* _NDMLBELHDPH_k__BackingField; // 0x38
	::System::Boolean OAAONEAAOKE; // 0x40

	::System::Void _ctor(::CIJKMEDBHMM* LJBPECKCCEA, ::MoleMole::SceneObjectStateWidget* GADOMGLJNNJ, ::System::Action_1<::PCODMIJEJEP>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CIJKMEDBHMM*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::PCODMIJEJEP>*))((::PBYTE)hIl2Cpp + GPOCHIOCKKA__CTOR_OFFSET))(this, LJBPECKCCEA, GADOMGLJNNJ, IGAAKDOIPNN);
	}

	::System::Void OABMBBANMCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_OABMBBANMCM_OFFSET))(this);
	}

	::System::Void OIBFEKPCDAL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_OIBFEKPCDAL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PCHHCBFOKFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_PCHHCBFOKFN_OFFSET))(this);
	}

	::System::Void FJLKEACBKKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_FJLKEACBKKF_OFFSET))(this);
	}

	::System::Void NAIFLDEIPIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_NAIFLDEIPIN_OFFSET))(this);
	}

	::System::Void DPCEGJPEEHA(::MainCityObjectState_ScriptConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MainCityObjectState_ScriptConfig*))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_DPCEGJPEEHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HEDJIGHGGAH(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_HEDJIGHGGAH_OFFSET))(this, MIALFKCCCPI);
	}

	::MainCityObjectState_ScriptConfig* HLPAMIGBBCL()
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCHIOCKKA_HLPAMIGBBCL_OFFSET))(this);
	}
};
