#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole::Cameras { class BangbooCameraEntry; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }
namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace MoleMole::Config { class ConfigCameraCutscenes; }
namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraShakes; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigCameraZooms; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_AABJMEFPMAB_OFFSET UNITYSDK_OFFSET(0x12A5CDB0)
#define LIKCIDFFNMM_BBFMIHKFKMM_OFFSET UNITYSDK_OFFSET(0x12A5AFB0)
#define LIKCIDFFNMM_BBIBGBMKGKI_OFFSET UNITYSDK_OFFSET(0x12A57050)
#define LIKCIDFFNMM_BJAFOOIMCNP_OFFSET UNITYSDK_OFFSET(0x12A55F80)
#define LIKCIDFFNMM_BJJDCJPNFAI_OFFSET UNITYSDK_OFFSET(0x12A577D0)
#define LIKCIDFFNMM_BPMCBFDBFDH_OFFSET UNITYSDK_OFFSET(0x12A580A0)
#define LIKCIDFFNMM_CHHNKDMHILN_OFFSET UNITYSDK_OFFSET(0x12A5DFC0)
#define LIKCIDFFNMM_CHNHDNDFOME_OFFSET UNITYSDK_OFFSET(0x12A5D7B0)
#define LIKCIDFFNMM_CMDHINJPGNI_OFFSET UNITYSDK_OFFSET(0x12A593E0)
#define LIKCIDFFNMM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x12A55E80)
#define LIKCIDFFNMM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x12A58F40)
#define LIKCIDFFNMM_DHBDEGCFOJL_OFFSET UNITYSDK_OFFSET(0x12A5AD00)
#define LIKCIDFFNMM_EFCBGFOMMGK_OFFSET UNITYSDK_OFFSET(0x12A5B9B0)
#define LIKCIDFFNMM_EIJBKGIOHKL_OFFSET UNITYSDK_OFFSET(0x12A568C0)
#define LIKCIDFFNMM_FBJPOMGPGBL_OFFSET UNITYSDK_OFFSET(0x12A5DD10)
#define LIKCIDFFNMM_FDMPOIAHGLN_OFFSET UNITYSDK_OFFSET(0x12A56700)
#define LIKCIDFFNMM_FHFLKCELEMB_OFFSET UNITYSDK_OFFSET(0x12A574A0)
#define LIKCIDFFNMM_GGFCAIDIFHM_1_OFFSET UNITYSDK_OFFSET(0x12A588F0)
#define LIKCIDFFNMM_GGFCAIDIFHM_OFFSET UNITYSDK_OFFSET(0x12A583F0)
#define LIKCIDFFNMM_GHGOHFELDKP_OFFSET UNITYSDK_OFFSET(0x12A58BF0)
#define LIKCIDFFNMM_GPEPBNBGIGO_OFFSET UNITYSDK_OFFSET(0x12A56200)
#define LIKCIDFFNMM_HGHHMPMENMD_OFFSET UNITYSDK_OFFSET(0x12A572E0)
#define LIKCIDFFNMM_IFEDIHFINAC_OFFSET UNITYSDK_OFFSET(0x12A5C3B0)
#define LIKCIDFFNMM_INADMDLHBPC_OFFSET UNITYSDK_OFFSET(0x12A5B260)
#define LIKCIDFFNMM_JCBOCGPKDJA_OFFSET UNITYSDK_OFFSET(0x12A56B40)
#define LIKCIDFFNMM_JHMBEJPIMFP_OFFSET UNITYSDK_OFFSET(0x12A5D060)
#define LIKCIDFFNMM_KCLLOIPPDKG_OFFSET UNITYSDK_OFFSET(0x12A56480)
#define LIKCIDFFNMM_LPCDKDOMJGP_OFFSET UNITYSDK_OFFSET(0x12A59E60)
#define LIKCIDFFNMM_MMDGJLCBMDF_OFFSET UNITYSDK_OFFSET(0x12A5C660)
#define LIKCIDFFNMM_NLBKABOOBOB_OFFSET UNITYSDK_OFFSET(0x12A56DC0)
#define LIKCIDFFNMM_NMDPMMAHLOG_OFFSET UNITYSDK_OFFSET(0x12A5DA60)
#define LIKCIDFFNMM_OCAPBPGCFHK_OFFSET UNITYSDK_OFFSET(0x12A5A2E0)
#define LIKCIDFFNMM_OGJNJPKFLCN_OFFSET UNITYSDK_OFFSET(0x12A55B50)
#define LIKCIDFFNMM_OIJIEOINLPL_OFFSET UNITYSDK_OFFSET(0x12A5BC60)
#define LIKCIDFFNMM_ONHHHGNKBHB_OFFSET UNITYSDK_OFFSET(0x12A57DD0)
#define LIKCIDFFNMM_PECMKNCFEJK_OFFSET UNITYSDK_OFFSET(0x12A59820)
#define LIKCIDFFNMM_PGELKCEMGKO_OFFSET UNITYSDK_OFFSET(0x12A5A5B0)
#define LIKCIDFFNMM_PKMGGGCKGOJ_OFFSET UNITYSDK_OFFSET(0x12A59B50)
#define LIKCIDFFNMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A55A00)

inline static constexpr unsigned int LIKCIDFFNMM_TypeDefinitionIndex = 43001;

class LIKCIDFFNMM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>** StaticGet_KAGKHDGGHLB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39F90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_DCJDJGLKKOO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39F98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>** StaticGet_PGCODKECBJH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::BangbooCameraEntry*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>** StaticGet_OJHCHFBOMEB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>** StaticGet_GMOJKOHKLJA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>** StaticGet_IGKGFONHBPM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>** StaticGet_EKIODFMAOCJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>** StaticGet_FAABIALBODM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>** StaticGet_HKLGIEDLAOG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>** StaticGet_MHKFIJCBEMH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FD8);
	}
	static ::MoleMole::Config::ConfigCameraStoryDatas** StaticGet_FMPFFKJNNBB()
	{
		return (::MoleMole::Config::ConfigCameraStoryDatas**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>** StaticGet_HEHIJNHBMKC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>**)Il2CppClass::FromTypeDefinitionIndex(LIKCIDFFNMM_TypeDefinitionIndex)->GetStaticField(0x39FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKCIDFFNMM__CCTOR_OFFSET))();
	}

	static ::System::Void OGJNJPKFLCN(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_OGJNJPKFLCN_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void BJJDCJPNFAI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>* NNGIMBAIFCF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BJJDCJPNFAI_OFFSET))(NNGIMBAIFCF);
	}

	static ::MoleMole::Cameras::CameraOverrideTrackEntry* ONHHHGNKBHB(::System::String* MCOHLHMKLIP, ::System::String*& DAJPJKMHMFN)
	{
		return ((::MoleMole::Cameras::CameraOverrideTrackEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_ONHHHGNKBHB_OFFSET))(MCOHLHMKLIP, DAJPJKMHMFN);
	}

	static ::System::Void BPMCBFDBFDH(::MoleMole::Cameras::ConfigCameraOverrideTrack* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BPMCBFDBFDH_OFFSET))(IPMMCGDMODG);
	}

	static ::System::Void KCLLOIPPDKG(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_KCLLOIPPDKG_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void FDMPOIAHGLN(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_FDMPOIAHGLN_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void BBIBGBMKGKI(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BBIBGBMKGKI_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void JCBOCGPKDJA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_JCBOCGPKDJA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void GPEPBNBGIGO(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GPEPBNBGIGO_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigCameraStory* GGFCAIDIFHM(::System::String* MCOHLHMKLIP, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 OGCCFFDGKII, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GGFCAIDIFHM_OFFSET))(MCOHLHMKLIP, GEEHGDABNJF, OGCCFFDGKII, BKLGNCBNEGM);
	}

	static ::System::Void GHGOHFELDKP(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GHGOHFELDKP_OFFSET))(IPMMCGDMODG);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CMDHINJPGNI(::MoleMole::Config::ConfigCameraPitchPolars* FHLIPOOCFHI)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CMDHINJPGNI_OFFSET))(FHLIPOOCFHI);
	}

	static ::MoleMole::Cameras::DefaultFrameTwoShapeConfig* PECMKNCFEJK(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::DefaultFrameTwoShapeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_PECMKNCFEJK_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void FHFLKCELEMB(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_FHFLKCELEMB_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Cameras::FixedCameraConfig* PKMGGGCKGOJ(::System::Int32 OPCELBOCIDJ)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_PKMGGGCKGOJ_OFFSET))(OPCELBOCIDJ);
	}

	static ::System::Void LPCDKDOMJGP(::MoleMole::Config::ConfigCameraStoryDatas* CGCOBBHLCJA)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_LPCDKDOMJGP_OFFSET))(CGCOBBHLCJA);
	}

	static ::MoleMole::Cameras::BangbooCameraEntry* OCAPBPGCFHK(::System::String* MCOHLHMKLIP, ::System::String*& DAJPJKMHMFN)
	{
		return ((::MoleMole::Cameras::BangbooCameraEntry*(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_OCAPBPGCFHK_OFFSET))(MCOHLHMKLIP, DAJPJKMHMFN);
	}

	static ::System::Void PGELKCEMGKO(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>* KKFOOPEMDFM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_PGELKCEMGKO_OFFSET))(KKFOOPEMDFM);
	}

	static ::MoleMole::Config::ConfigCameraLockTargetBase* DHBDEGCFOJL(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraLockTargetBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_DHBDEGCFOJL_OFFSET))(ANGLHCBLFNK);
	}

	static ::MoleMole::Config::ConfigCameraZoom* BBFMIHKFKMM(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraZoom*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BBFMIHKFKMM_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void INADMDLHBPC(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>* FNEFBGBLDBG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_INADMDLHBPC_OFFSET))(FNEFBGBLDBG);
	}

	static ::MoleMole::CameraShotData* EFCBGFOMMGK(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::CameraShotData*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_EFCBGFOMMGK_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void OIJIEOINLPL(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* NOJEAEPNNFD)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_OIJIEOINLPL_OFFSET))(NOJEAEPNNFD);
	}

	static ::System::Void HGHHMPMENMD(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_HGHHMPMENMD_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigCameraStretch* IFEDIHFINAC(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraStretch*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_IFEDIHFINAC_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void EIJBKGIOHKL(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_EIJBKGIOHKL_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void MMDGJLCBMDF(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>* JCPCGNHBOCF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_MMDGJLCBMDF_OFFSET))(JCPCGNHBOCF);
	}

	static ::MoleMole::Config::ConfigCameraShake* AABJMEFPMAB(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraShake*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_AABJMEFPMAB_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void JHMBEJPIMFP(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* KFHOECNDKLG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_JHMBEJPIMFP_OFFSET))(KFHOECNDKLG);
	}

	static ::MoleMole::Config::ConfigCameraStory* GGFCAIDIFHM_1(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraStory*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GGFCAIDIFHM_1_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void NLBKABOOBOB(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_NLBKABOOBOB_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* CHNHDNDFOME(::System::String* ANGLHCBLFNK)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CHNHDNDFOME_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void BJAFOOIMCNP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BJAFOOIMCNP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigCameraScreenOffset* NMDPMMAHLOG(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraScreenOffset*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_NMDPMMAHLOG_OFFSET))(ANGLHCBLFNK);
	}

	static ::MoleMole::Config::ConfigCameraPitchPolar* FBJPOMGPGBL(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigCameraPitchPolar*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_FBJPOMGPGBL_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void CHHNKDMHILN(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>* ADAPGLDLADB)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CHHNKDMHILN_OFFSET))(ADAPGLDLADB);
	}
};
