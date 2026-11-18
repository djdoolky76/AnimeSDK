#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ADPDAPOEBJH;
class AKPIKMIGJEI;
class DFFEOGKCCKM;
class DJAKPFJJBPN;
class FJIIOGMLHIO;
class JJJHIBECFIP;
class KCAHHNLCIHA;
class LJEOIAJKOCP;
class LPPLKOIBNGP;
class NCKIOAOLDCL;
class NHLFKFJPKPP;
namespace MoleMole { class CameraShotData; }
namespace MoleMole::Cameras { class BangbooCameraEntry; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEBGBDGIAJM_AABJMEFPMAB_OFFSET UNITYSDK_OFFSET(0x18A0AA50)
#define JEBGBDGIAJM_ALDNJIHMMHK_OFFSET UNITYSDK_OFFSET(0x18A0A350)
#define JEBGBDGIAJM_BAHLFOCAPBJ_OFFSET UNITYSDK_OFFSET(0x18A09C80)
#define JEBGBDGIAJM_BBFMIHKFKMM_OFFSET UNITYSDK_OFFSET(0x18A09EB0)
#define JEBGBDGIAJM_CHNHDNDFOME_OFFSET UNITYSDK_OFFSET(0x18A0A730)
#define JEBGBDGIAJM_CIFMPIAOGLO_OFFSET UNITYSDK_OFFSET(0x18A0A360)
#define JEBGBDGIAJM_DHBDEGCFOJL_OFFSET UNITYSDK_OFFSET(0x18A0A220)
#define JEBGBDGIAJM_EFCBGFOMMGK_OFFSET UNITYSDK_OFFSET(0x18A09BD0)
#define JEBGBDGIAJM_FBJPOMGPGBL_OFFSET UNITYSDK_OFFSET(0x18A09F60)
#define JEBGBDGIAJM_FEJNGEOHDOE_OFFSET UNITYSDK_OFFSET(0x18A0A2D0)
#define JEBGBDGIAJM_GCLPIIBLHCP_OFFSET UNITYSDK_OFFSET(0x18A09C90)
#define JEBGBDGIAJM_GFBDCPOBJBJ_OFFSET UNITYSDK_OFFSET(0x18A0AEF0)
#define JEBGBDGIAJM_GGFCAIDIFHM_1_OFFSET UNITYSDK_OFFSET(0x18A0AB10)
#define JEBGBDGIAJM_GGFCAIDIFHM_OFFSET UNITYSDK_OFFSET(0x18A0A2E0)
#define JEBGBDGIAJM_GPBNHINCEMI_OFFSET UNITYSDK_OFFSET(0x18A0A340)
#define JEBGBDGIAJM_IFEDIHFINAC_OFFSET UNITYSDK_OFFSET(0x18A0A450)
#define JEBGBDGIAJM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18A0A7E0)
#define JEBGBDGIAJM_KOAFHBBHIFB_OFFSET UNITYSDK_OFFSET(0x18A0A500)
#define JEBGBDGIAJM_MHMGEEJFHNN_OFFSET UNITYSDK_OFFSET(0x18A0A510)
#define JEBGBDGIAJM_MJHAMMOGMPI_OFFSET UNITYSDK_OFFSET(0x18A0A8B0)
#define JEBGBDGIAJM_NIHOADAGAIF_OFFSET UNITYSDK_OFFSET(0x18A0AB00)
#define JEBGBDGIAJM_NMDPMMAHLOG_OFFSET UNITYSDK_OFFSET(0x18A0A9A0)
#define JEBGBDGIAJM_OCAPBPGCFHK_OFFSET UNITYSDK_OFFSET(0x18A0A370)
#define JEBGBDGIAJM_ONHHHGNKBHB_OFFSET UNITYSDK_OFFSET(0x18A0A8C0)
#define JEBGBDGIAJM_PECMKNCFEJK_OFFSET UNITYSDK_OFFSET(0x18A09CA0)
#define JEBGBDGIAJM_PKMGGGCKGOJ_OFFSET UNITYSDK_OFFSET(0x18A0A520)
#define JEBGBDGIAJM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18A096D0)
#define JEBGBDGIAJM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A09530)

inline static constexpr unsigned int JEBGBDGIAJM_TypeDefinitionIndex = 69931;

class JEBGBDGIAJM
{
public:
	::NHLFKFJPKPP* _EHLKJFHHFLO_k__BackingField; // 0x28
	::AKPIKMIGJEI* _DIPJIGNIEOH_k__BackingField; // 0x30
	::NCKIOAOLDCL* _CALLPBKLHCP_k__BackingField; // 0x38
	::ADPDAPOEBJH* _HEHBJDHALNL_k__BackingField; // 0x40
	::DFFEOGKCCKM* _HEKJNHKFEPJ_k__BackingField; // 0x48
	::KCAHHNLCIHA* _GJEKGGNNAMA_k__BackingField; // 0x50
	::DJAKPFJJBPN* _JMOKJLGLNMF_k__BackingField; // 0x58
	::FJIIOGMLHIO* _KKFHAFKMJMG_k__BackingField; // 0x60
	::LJEOIAJKOCP* _ININBAOOIEB_k__BackingField; // 0x68
	::LPPLKOIBNGP* _HPPFGLGGGFA_k__BackingField; // 0x70
	::JJJHIBECFIP* _EGOBFLGDJOJ_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MoleMole::CameraShotData* EFCBGFOMMGK(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::CameraShotData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_EFCBGFOMMGK_OFFSET))(this, ANGLHCBLFNK);
	}

	::DFFEOGKCCKM* BAHLFOCAPBJ()
	{
		return ((::DFFEOGKCCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_BAHLFOCAPBJ_OFFSET))(this);
	}

	::LPPLKOIBNGP* GCLPIIBLHCP()
	{
		return ((::LPPLKOIBNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_GCLPIIBLHCP_OFFSET))(this);
	}

	::MoleMole::Cameras::DefaultFrameTwoShapeConfig* PECMKNCFEJK(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_PECMKNCFEJK_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::ConfigCameraZoom* BBFMIHKFKMM(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraZoom*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_BBFMIHKFKMM_OFFSET))(this, ANGLHCBLFNK);
	}

	::MoleMole::Config::ConfigCameraPitchPolar* FBJPOMGPGBL(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraPitchPolar*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_FBJPOMGPGBL_OFFSET))(this, ANGLHCBLFNK);
	}

	::MoleMole::Config::ConfigCameraLockTargetBase* DHBDEGCFOJL(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraLockTargetBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_DHBDEGCFOJL_OFFSET))(this, ANGLHCBLFNK);
	}

	::NHLFKFJPKPP* FEJNGEOHDOE()
	{
		return ((::NHLFKFJPKPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_FEJNGEOHDOE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigCameraStory* GGFCAIDIFHM(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_GGFCAIDIFHM_OFFSET))(this, ANGLHCBLFNK);
	}

	::AKPIKMIGJEI* GPBNHINCEMI()
	{
		return ((::AKPIKMIGJEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_GPBNHINCEMI_OFFSET))(this);
	}

	::ADPDAPOEBJH* ALDNJIHMMHK()
	{
		return ((::ADPDAPOEBJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_ALDNJIHMMHK_OFFSET))(this);
	}

	::FJIIOGMLHIO* CIFMPIAOGLO()
	{
		return ((::FJIIOGMLHIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_CIFMPIAOGLO_OFFSET))(this);
	}

	::MoleMole::Cameras::BangbooCameraEntry* OCAPBPGCFHK(::System::String* MCOHLHMKLIP, ::System::String*& DAJPJKMHMFN)
	{
		return ((::MoleMole::Cameras::BangbooCameraEntry*(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_OCAPBPGCFHK_OFFSET))(this, MCOHLHMKLIP, DAJPJKMHMFN);
	}

	::MoleMole::Config::ConfigCameraStretch* IFEDIHFINAC(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraStretch*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_IFEDIHFINAC_OFFSET))(this, ANGLHCBLFNK);
	}

	::JJJHIBECFIP* KOAFHBBHIFB()
	{
		return ((::JJJHIBECFIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_KOAFHBBHIFB_OFFSET))(this);
	}

	::KCAHHNLCIHA* MHMGEEJFHNN()
	{
		return ((::KCAHHNLCIHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_MHMGEEJFHNN_OFFSET))(this);
	}

	::MoleMole::Cameras::FixedCameraConfig* PKMGGGCKGOJ(::System::Int32 OPCELBOCIDJ)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_PKMGGGCKGOJ_OFFSET))(this, OPCELBOCIDJ);
	}

	::System::Collections::Generic::List_1<::System::String*>* CHNHDNDFOME(::System::String* ANGLHCBLFNK)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_CHNHDNDFOME_OFFSET))(this, ANGLHCBLFNK);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::NCKIOAOLDCL* MJHAMMOGMPI()
	{
		return ((::NCKIOAOLDCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_MJHAMMOGMPI_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraOverrideTrackEntry* ONHHHGNKBHB(::System::String* MCOHLHMKLIP, ::System::String*& DAJPJKMHMFN)
	{
		return ((::MoleMole::Cameras::CameraOverrideTrackEntry*(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_ONHHHGNKBHB_OFFSET))(this, MCOHLHMKLIP, DAJPJKMHMFN);
	}

	::MoleMole::Config::ConfigCameraScreenOffset* NMDPMMAHLOG(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraScreenOffset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_NMDPMMAHLOG_OFFSET))(this, ANGLHCBLFNK);
	}

	::MoleMole::Config::ConfigCameraShake* AABJMEFPMAB(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraShake*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_AABJMEFPMAB_OFFSET))(this, ANGLHCBLFNK);
	}

	::LJEOIAJKOCP* NIHOADAGAIF()
	{
		return ((::LJEOIAJKOCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_NIHOADAGAIF_OFFSET))(this);
	}

	::MoleMole::Config::ConfigCameraStory* GGFCAIDIFHM_1(::System::String* MCOHLHMKLIP, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 OGCCFFDGKII, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::PVOID, ::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_GGFCAIDIFHM_1_OFFSET))(this, MCOHLHMKLIP, GEEHGDABNJF, OGCCFFDGKII, BKLGNCBNEGM);
	}

	::DJAKPFJJBPN* GFBDCPOBJBJ()
	{
		return ((::DJAKPFJJBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBGBDGIAJM_GFBDCPOBJBJ_OFFSET))(this);
	}
};
