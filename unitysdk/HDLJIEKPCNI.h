#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ABIMAOCNBGI;
class DMBDHIIAIIJ;
class FFINMAFFKPL;
class GOHLMAECEKP;
class KBFLEHPKFIN;
class LAHPMAAOACA;
class LINHOKHHALD;
class NDMPPPPIHFI;
namespace MoleMole { class ConfigAudioTrack; }
namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigLightbarPreset; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVideoAudioMapping; }
namespace MoleMole { class ConfigVoiceToEvent; }

#define HDLJIEKPCNI_BBCMHHAMGII_OFFSET UNITYSDK_OFFSET(0x16F26200)
#define HDLJIEKPCNI_BDBCKGFNMMA_OFFSET UNITYSDK_OFFSET(0x16F25740)
#define HDLJIEKPCNI_BDFAPBDFODI_OFFSET UNITYSDK_OFFSET(0x16F254D0)
#define HDLJIEKPCNI_CBDMEFOFONJ_OFFSET UNITYSDK_OFFSET(0x16F253F0)
#define HDLJIEKPCNI_CJHCFIEKLHJ_OFFSET UNITYSDK_OFFSET(0x16F262E0)
#define HDLJIEKPCNI_CNLJINAMEPF_OFFSET UNITYSDK_OFFSET(0x16F26300)
#define HDLJIEKPCNI_DALPHLFGBCI_OFFSET UNITYSDK_OFFSET(0x16F262F0)
#define HDLJIEKPCNI_DHIBPPIHADD_OFFSET UNITYSDK_OFFSET(0x16F25670)
#define HDLJIEKPCNI_GHCBCPPADHB_OFFSET UNITYSDK_OFFSET(0x16F25750)
#define HDLJIEKPCNI_HDEOECMLMHI_OFFSET UNITYSDK_OFFSET(0x16F26320)
#define HDLJIEKPCNI_HECOMIJKAFJ_OFFSET UNITYSDK_OFFSET(0x16F254C0)
#define HDLJIEKPCNI_HMJNJHLJEKL_OFFSET UNITYSDK_OFFSET(0x16F253E0)
#define HDLJIEKPCNI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16F258F0)
#define HDLJIEKPCNI_MDAFHCKNGDJ_OFFSET UNITYSDK_OFFSET(0x16F262D0)
#define HDLJIEKPCNI_MPJBJKLFLDN_OFFSET UNITYSDK_OFFSET(0x16F255A0)
#define HDLJIEKPCNI_NJIDNOOKOAP_OFFSET UNITYSDK_OFFSET(0x16F259C0)
#define HDLJIEKPCNI_OICMPHOOOPM_OFFSET UNITYSDK_OFFSET(0x16F26310)
#define HDLJIEKPCNI_OIMNFLHKEFD_OFFSET UNITYSDK_OFFSET(0x16F25820)
#define HDLJIEKPCNI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16F24FF0)
#define HDLJIEKPCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24E90)

inline static constexpr unsigned int HDLJIEKPCNI_TypeDefinitionIndex = 62652;

class HDLJIEKPCNI
{
public:
	::GOHLMAECEKP* _KEPCBCNNENI_k__BackingField; // 0x28
	::FFINMAFFKPL* _PNNCKJKBJPA_k__BackingField; // 0x30
	::LINHOKHHALD* _MDBFDOFPLMK_k__BackingField; // 0x38
	::NDMPPPPIHFI* _BFNGKJMLKFC_k__BackingField; // 0x40
	::KBFLEHPKFIN* _BEPKMAIBDBD_k__BackingField; // 0x48
	::ABIMAOCNBGI* _OPCOMPNAOMJ_k__BackingField; // 0x50
	::DMBDHIIAIIJ* _NLEOCCPLEHK_k__BackingField; // 0x58
	::LAHPMAAOACA* _PHLLBOJCNMG_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::FFINMAFFKPL* HMJNJHLJEKL()
	{
		return ((::FFINMAFFKPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_HMJNJHLJEKL_OFFSET))(this);
	}

	::MoleMole::ConfigVoiceToEvent* CBDMEFOFONJ()
	{
		return ((::MoleMole::ConfigVoiceToEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_CBDMEFOFONJ_OFFSET))(this);
	}

	::LAHPMAAOACA* HECOMIJKAFJ()
	{
		return ((::LAHPMAAOACA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_HECOMIJKAFJ_OFFSET))(this);
	}

	::MoleMole::ConfigAudioTrack* BDFAPBDFODI()
	{
		return ((::MoleMole::ConfigAudioTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_BDFAPBDFODI_OFFSET))(this);
	}

	::MoleMole::ConfigRichtapSound* MPJBJKLFLDN()
	{
		return ((::MoleMole::ConfigRichtapSound*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_MPJBJKLFLDN_OFFSET))(this);
	}

	::MoleMole::ConfigLightbarPreset* DHIBPPIHADD()
	{
		return ((::MoleMole::ConfigLightbarPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_DHIBPPIHADD_OFFSET))(this);
	}

	::KBFLEHPKFIN* BDBCKGFNMMA()
	{
		return ((::KBFLEHPKFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_BDBCKGFNMMA_OFFSET))(this);
	}

	::MoleMole::ConfigVideoAudioMapping* GHCBCPPADHB()
	{
		return ((::MoleMole::ConfigVideoAudioMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_GHCBCPPADHB_OFFSET))(this);
	}

	::MoleMole::ConfigEffectSound* OIMNFLHKEFD()
	{
		return ((::MoleMole::ConfigEffectSound*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_OIMNFLHKEFD_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean NJIDNOOKOAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_NJIDNOOKOAP_OFFSET))(this);
	}

	::NDMPPPPIHFI* MDAFHCKNGDJ()
	{
		return ((::NDMPPPPIHFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_MDAFHCKNGDJ_OFFSET))(this);
	}

	::ABIMAOCNBGI* CJHCFIEKLHJ()
	{
		return ((::ABIMAOCNBGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_CJHCFIEKLHJ_OFFSET))(this);
	}

	::GOHLMAECEKP* DALPHLFGBCI()
	{
		return ((::GOHLMAECEKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_DALPHLFGBCI_OFFSET))(this);
	}

	::MoleMole::ConfigLevelSound* BBCMHHAMGII()
	{
		return ((::MoleMole::ConfigLevelSound*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_BBCMHHAMGII_OFFSET))(this);
	}

	::DMBDHIIAIIJ* CNLJINAMEPF()
	{
		return ((::DMBDHIIAIIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_CNLJINAMEPF_OFFSET))(this);
	}

	::LINHOKHHALD* OICMPHOOOPM()
	{
		return ((::LINHOKHHALD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_OICMPHOOOPM_OFFSET))(this);
	}

	::MoleMole::ConfigEnvironmentSound* HDEOECMLMHI()
	{
		return ((::MoleMole::ConfigEnvironmentSound*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLJIEKPCNI_HDEOECMLMHI_OFFSET))(this);
	}
};
