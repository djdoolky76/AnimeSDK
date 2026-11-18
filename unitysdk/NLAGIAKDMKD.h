#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAudioTrack; }
namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigLightbarPreset; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVideoAudioMapping; }
namespace MoleMole { class ConfigVoiceToEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NLAGIAKDMKD_BBCMHHAMGII_OFFSET UNITYSDK_OFFSET(0xE763BA0)
#define NLAGIAKDMKD_BDFAPBDFODI_OFFSET UNITYSDK_OFFSET(0xE763420)
#define NLAGIAKDMKD_CBDMEFOFONJ_OFFSET UNITYSDK_OFFSET(0xE7637E0)
#define NLAGIAKDMKD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE762660)
#define NLAGIAKDMKD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE762570)
#define NLAGIAKDMKD_DHIBPPIHADD_OFFSET UNITYSDK_OFFSET(0xE7639C0)
#define NLAGIAKDMKD_GHCBCPPADHB_OFFSET UNITYSDK_OFFSET(0xE764720)
#define NLAGIAKDMKD_HDEOECMLMHI_OFFSET UNITYSDK_OFFSET(0xE764540)
#define NLAGIAKDMKD_MPJBJKLFLDN_OFFSET UNITYSDK_OFFSET(0xE763D80)
#define NLAGIAKDMKD_NJIDNOOKOAP_OFFSET UNITYSDK_OFFSET(0xE763F60)
#define NLAGIAKDMKD_OIMNFLHKEFD_OFFSET UNITYSDK_OFFSET(0xE763600)

inline static constexpr unsigned int NLAGIAKDMKD_TypeDefinitionIndex = 78358;

class NLAGIAKDMKD : public ::System::Object
{
public:
	static ::MoleMole::ConfigEnvironmentSound** StaticGet_BAKPGECAGHJ()
	{
		return (::MoleMole::ConfigEnvironmentSound**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F610);
	}
	static ::MoleMole::ConfigRichtapSound** StaticGet_PEDDPJLCEKP()
	{
		return (::MoleMole::ConfigRichtapSound**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F618);
	}
	static ::MoleMole::ConfigAudioTrack** StaticGet_KFOCBHCPPHL()
	{
		return (::MoleMole::ConfigAudioTrack**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F620);
	}
	static ::MoleMole::ConfigVoiceToEvent** StaticGet_EKEOOAAEAHN()
	{
		return (::MoleMole::ConfigVoiceToEvent**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F628);
	}
	static ::MoleMole::ConfigEffectSound** StaticGet_PBPNOPMHKAI()
	{
		return (::MoleMole::ConfigEffectSound**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F630);
	}
	static ::MoleMole::ConfigLevelSound** StaticGet_NJBDMLNIPNP()
	{
		return (::MoleMole::ConfigLevelSound**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F638);
	}
	static ::MoleMole::ConfigVideoAudioMapping** StaticGet_NIIKOOKMHJF()
	{
		return (::MoleMole::ConfigVideoAudioMapping**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F640);
	}
	static ::MoleMole::ConfigLightbarPreset** StaticGet_JCBEMGFGOJM()
	{
		return (::MoleMole::ConfigLightbarPreset**)Il2CppClass::FromTypeDefinitionIndex(NLAGIAKDMKD_TypeDefinitionIndex)->GetStaticField(0x3F648);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigAudioTrack* BDFAPBDFODI()
	{
		return ((::MoleMole::ConfigAudioTrack*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_BDFAPBDFODI_OFFSET))();
	}

	static ::MoleMole::ConfigEffectSound* OIMNFLHKEFD()
	{
		return ((::MoleMole::ConfigEffectSound*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_OIMNFLHKEFD_OFFSET))();
	}

	static ::MoleMole::ConfigVoiceToEvent* CBDMEFOFONJ()
	{
		return ((::MoleMole::ConfigVoiceToEvent*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_CBDMEFOFONJ_OFFSET))();
	}

	static ::MoleMole::ConfigLightbarPreset* DHIBPPIHADD()
	{
		return ((::MoleMole::ConfigLightbarPreset*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_DHIBPPIHADD_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigLevelSound* BBCMHHAMGII()
	{
		return ((::MoleMole::ConfigLevelSound*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_BBCMHHAMGII_OFFSET))();
	}

	static ::MoleMole::ConfigRichtapSound* MPJBJKLFLDN()
	{
		return ((::MoleMole::ConfigRichtapSound*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_MPJBJKLFLDN_OFFSET))();
	}

	static ::System::Boolean NJIDNOOKOAP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_NJIDNOOKOAP_OFFSET))();
	}

	static ::MoleMole::ConfigEnvironmentSound* HDEOECMLMHI()
	{
		return ((::MoleMole::ConfigEnvironmentSound*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_HDEOECMLMHI_OFFSET))();
	}

	static ::MoleMole::ConfigVideoAudioMapping* GHCBCPPADHB()
	{
		return ((::MoleMole::ConfigVideoAudioMapping*(*)())((::PBYTE)hIl2Cpp + NLAGIAKDMKD_GHCBCPPADHB_OFFSET))();
	}
};
