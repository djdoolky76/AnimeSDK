#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOOFMMJFIDC.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCoopVFXQualitySetting; }
namespace MoleMole::Config { class CoopVFXConfig; }

#define JDEFEEIIBLC_ELGGCCNNKEA_OFFSET UNITYSDK_OFFSET(0x1872FF60)
#define JDEFEEIIBLC_EMEKDCILEJK_OFFSET UNITYSDK_OFFSET(0x1872FDC0)
#define JDEFEEIIBLC_GBIIJIHAIJN_OFFSET UNITYSDK_OFFSET(0x18730640)
#define JDEFEEIIBLC_HANCBLOBDOK_OFFSET UNITYSDK_OFFSET(0x18730460)
#define JDEFEEIIBLC_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x187303E0)
#define JDEFEEIIBLC_LLDCAHOGFLI_OFFSET UNITYSDK_OFFSET(0x18730060)
#define JDEFEEIIBLC_PBEMEINCHPE_OFFSET UNITYSDK_OFFSET(0x187306A0)
#define JDEFEEIIBLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1872FDA0)

inline static constexpr unsigned int JDEFEEIIBLC_TypeDefinitionIndex = 39872;

class JDEFEEIIBLC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCoopVFXQualitySetting** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigCoopVFXQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(JDEFEEIIBLC_TypeDefinitionIndex)->GetStaticField(0x40F40);
	}
	static ::MoleMole::Config::CoopVFXConfig** StaticGet_IMCMJJOAEBP()
	{
		return (::MoleMole::Config::CoopVFXConfig**)Il2CppClass::FromTypeDefinitionIndex(JDEFEEIIBLC_TypeDefinitionIndex)->GetStaticField(0x40F48);
	}
	static ::KOOFMMJFIDC* StaticGet_NDHHHCNOACE()
	{
		return (::KOOFMMJFIDC*)Il2CppClass::FromTypeDefinitionIndex(JDEFEEIIBLC_TypeDefinitionIndex)->GetStaticField(0xEED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEFEEIIBLC__CCTOR_OFFSET))();
	}

	static ::System::Boolean EMEKDCILEJK(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::KOOFMMJFIDC BEIDOEEINMP, ::MoleMole::Config::CoopVFXConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::KOOFMMJFIDC, ::MoleMole::Config::CoopVFXConfig*&))((::PBYTE)hIl2Cpp + JDEFEEIIBLC_EMEKDCILEJK_OFFSET))(BFGGEDPHPKE, BEIDOEEINMP, DFMKILICPFB);
	}

	static ::MoleMole::Config::CoopVFXConfig* ELGGCCNNKEA()
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)())((::PBYTE)hIl2Cpp + JDEFEEIIBLC_ELGGCCNNKEA_OFFSET))();
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEFEEIIBLC_HDLGEDBNEIP_OFFSET))();
	}

	static ::MoleMole::Config::CoopVFXConfig* LLDCAHOGFLI(::KOOFMMJFIDC BEIDOEEINMP)
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)(::KOOFMMJFIDC))((::PBYTE)hIl2Cpp + JDEFEEIIBLC_LLDCAHOGFLI_OFFSET))(BEIDOEEINMP);
	}

	static ::System::Void GBIIJIHAIJN(::MoleMole::Config::CoopVFXConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::CoopVFXConfig*))((::PBYTE)hIl2Cpp + JDEFEEIIBLC_GBIIJIHAIJN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HANCBLOBDOK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEFEEIIBLC_HANCBLOBDOK_OFFSET))();
	}

	static ::System::Void PBEMEINCHPE(::KOOFMMJFIDC BEIDOEEINMP)
	{
		return ((::System::Void(*)(::KOOFMMJFIDC))((::PBYTE)hIl2Cpp + JDEFEEIIBLC_PBEMEINCHPE_OFFSET))(BEIDOEEINMP);
	}
};
