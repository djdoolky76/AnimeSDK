#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ENLPLJLDIHN;
class LLLCODIPGNG;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace System { class String; }

#define NELPKNLFIEA_DHPKCBHADHB_OFFSET UNITYSDK_OFFSET(0x16B69B20)
#define NELPKNLFIEA_EBMIJGIEDGA_OFFSET UNITYSDK_OFFSET(0x16B695F0)
#define NELPKNLFIEA_EMCBKBADMEJ_OFFSET UNITYSDK_OFFSET(0x16B69D30)
#define NELPKNLFIEA_HFENAHPFNKL_OFFSET UNITYSDK_OFFSET(0x16B69A10)
#define NELPKNLFIEA_HONDBBEMEGL_OFFSET UNITYSDK_OFFSET(0x16B695E0)
#define NELPKNLFIEA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16B69930)
#define NELPKNLFIEA_KKPNIMIPHEJ_OFFSET UNITYSDK_OFFSET(0x16B69A00)
#define NELPKNLFIEA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16B69420)
#define NELPKNLFIEA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B69330)

inline static constexpr unsigned int NELPKNLFIEA_TypeDefinitionIndex = 44149;

class NELPKNLFIEA
{
public:
	::ENLPLJLDIHN* _DNHGHBAGIIK_k__BackingField; // 0x28
	::LLLCODIPGNG* _BPEFFMOJNBH_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELPKNLFIEA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NELPKNLFIEA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ENLPLJLDIHN* HONDBBEMEGL()
	{
		return ((::ENLPLJLDIHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELPKNLFIEA_HONDBBEMEGL_OFFSET))(this);
	}

	::MoleMole::GalGameFacialSetting* EBMIJGIEDGA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::GalGameFacialSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NELPKNLFIEA_EBMIJGIEDGA_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NELPKNLFIEA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::LLLCODIPGNG* KKPNIMIPHEJ()
	{
		return ((::LLLCODIPGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELPKNLFIEA_KKPNIMIPHEJ_OFFSET))(this);
	}

	::MoleMole::ConfigGalGameAvatarShow* HFENAHPFNKL()
	{
		return ((::MoleMole::ConfigGalGameAvatarShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELPKNLFIEA_HFENAHPFNKL_OFFSET))(this);
	}

	::MoleMole::UIAvatarCommonLightSetting* DHPKCBHADHB()
	{
		return ((::MoleMole::UIAvatarCommonLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELPKNLFIEA_DHPKCBHADHB_OFFSET))(this);
	}

	::MoleMole::AvatarShowSetting* EMCBKBADMEJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::AvatarShowSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NELPKNLFIEA_EMCBKBADMEJ_OFFSET))(this, MCOHLHMKLIP);
	}
};
