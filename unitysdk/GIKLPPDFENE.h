#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCameraMode.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class BLNEGBNJACL;
class FGMHNMKDFMA;
class GCJAGJBBHOL;
class JPEAMNOBMFL;
class KFELGAIGHAP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIKLPPDFENE_ADOAAIFKKGN_OFFSET UNITYSDK_OFFSET(0x15A44ED0)
#define GIKLPPDFENE_AJJBAFEBCMK_OFFSET UNITYSDK_OFFSET(0x15A448A0)
#define GIKLPPDFENE_AJKKIKLBALD_OFFSET UNITYSDK_OFFSET(0x15A454C0)
#define GIKLPPDFENE_AKLEABLDAOC_OFFSET UNITYSDK_OFFSET(0x15A42440)
#define GIKLPPDFENE_BINNMGDGGJN_OFFSET UNITYSDK_OFFSET(0x15A454D0)
#define GIKLPPDFENE_BJBGCIBHLBH_OFFSET UNITYSDK_OFFSET(0x15A42D60)
#define GIKLPPDFENE_CTOR_OFFSET UNITYSDK_OFFSET(0x15A454E0)
#define GIKLPPDFENE_EBJBCPBFJEB_OFFSET UNITYSDK_OFFSET(0x15A42A40)
#define GIKLPPDFENE_ENBLLBFJPGL_OFFSET UNITYSDK_OFFSET(0x15A432A0)
#define GIKLPPDFENE_ENMODHEJEOF_OFFSET UNITYSDK_OFFSET(0x15A44690)
#define GIKLPPDFENE_FCCPBFPFAAP_OFFSET UNITYSDK_OFFSET(0x15A42280)
#define GIKLPPDFENE_GKKPDCJMHFH_OFFSET UNITYSDK_OFFSET(0x15A42510)
#define GIKLPPDFENE_GNDBMBGPMKK_OFFSET UNITYSDK_OFFSET(0x15A44760)
#define GIKLPPDFENE_HHKIPOGHOIE_OFFSET UNITYSDK_OFFSET(0x15A44700)
#define GIKLPPDFENE_HHLMIJAGGJL_OFFSET UNITYSDK_OFFSET(0x15A42B30)
#define GIKLPPDFENE_HJGAMGJIKCH_OFFSET UNITYSDK_OFFSET(0x15A44400)
#define GIKLPPDFENE_IAFMLAEDCJH_OFFSET UNITYSDK_OFFSET(0x15A44540)
#define GIKLPPDFENE_IAGAMDAHNHF_OFFSET UNITYSDK_OFFSET(0x15A45450)
#define GIKLPPDFENE_IDPCOOFOIJJ_OFFSET UNITYSDK_OFFSET(0x15A44DE0)
#define GIKLPPDFENE_JKHCAMALHEF_OFFSET UNITYSDK_OFFSET(0x15A41B40)
#define GIKLPPDFENE_KLINADBKHLK_OFFSET UNITYSDK_OFFSET(0x15A42C10)
#define GIKLPPDFENE_KMAOJPAONAC_OFFSET UNITYSDK_OFFSET(0x15A41EF0)
#define GIKLPPDFENE_KOIPIBBKJII_OFFSET UNITYSDK_OFFSET(0x15A428E0)
#define GIKLPPDFENE_MGIMIGLBCBN_OFFSET UNITYSDK_OFFSET(0x15A418B0)
#define GIKLPPDFENE_MJLHNJBHBHA_OFFSET UNITYSDK_OFFSET(0x15A454B0)
#define GIKLPPDFENE_NCGEFNNIPBO_OFFSET UNITYSDK_OFFSET(0x15A451F0)
#define GIKLPPDFENE_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15A41C70)
#define GIKLPPDFENE_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15A41DA0)
#define GIKLPPDFENE_PCJLODLOIEJ_OFFSET UNITYSDK_OFFSET(0x15A42330)
#define GIKLPPDFENE_PILGDDEMHPO_OFFSET UNITYSDK_OFFSET(0x15A450F0)
#define GIKLPPDFENE_PNPFJLBDCGO_OFFSET UNITYSDK_OFFSET(0x15A440C0)
#define GIKLPPDFENE_TICK_OFFSET UNITYSDK_OFFSET(0x15A429C0)

	class GIKLPPDFENE : public ::System::Object
	{
	public:
		::System::Action* HJHGFOMDEKE; // 0x10
		::KFELGAIGHAP* GOMBEAEIBPB; // 0x18
		::RPG::GameCore::GameEntity* HCMDJCNAKCJ; // 0x20
		::FGMHNMKDFMA* HDAKGJMIJID; // 0x28
		::System::Action* NEGPAMDGAFO; // 0x30
		::RPG::GameCore::GameEntity* OPCJKDEAIFK; // 0x38
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x40
		::BLNEGBNJACL* KCNEJGDHIMM; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::JPEAMNOBMFL*>* APNDMMOEILK; // 0x50
		::RPG::GameCore::GameEntity* FKKGPLKGMNL; // 0x58
		::RPG::GameCore::TaskContext* OFMKAKCKJAD; // 0x60
		::RPG::GameCore::RtBattleCharacterCameraConfig* LPJFCFGKHGC; // 0x68
		::GCJAGJBBHOL* INHCPEAOKJO; // 0x70
		::System::Single OPALDBBJGIB; // 0x78
		::System::Boolean PMMICKKFJLK; // 0x7C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::RtBattleCameraMode NPABFHKMDDL; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleCharacterCameraConfig* MGIMIGLBCBN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBattleCharacterCameraTag a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBattleCharacterCameraTag, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_MGIMIGLBCBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKHCAMALHEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_JKHCAMALHEF_OFFSET))(this, a1);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void KMAOJPAONAC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_KMAOJPAONAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOIPIBBKJII(::RPG::GameCore::RtBattleCameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleCameraMode))((::PBYTE)hIl2Cpp + GIKLPPDFENE_KOIPIBBKJII_OFFSET))(this, a1);
		}

		::System::Void EBJBCPBFJEB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_EBJBCPBFJEB_OFFSET))(this, a1);
		}

		::System::Void HHLMIJAGGJL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBattleCharacterCameraTag a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + GIKLPPDFENE_HHLMIJAGGJL_OFFSET))(this, a1, a2);
		}

		::System::Void BJBGCIBHLBH(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::PipelineCameraEngine* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraModuleConfigCollection* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_BJBGCIBHLBH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIKLPPDFENE_TICK_OFFSET))(this, a1);
		}

		::System::Void PNPFJLBDCGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIKLPPDFENE_PNPFJLBDCGO_OFFSET))(this, a1);
		}

		::System::Void IAFMLAEDCJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIKLPPDFENE_IAFMLAEDCJH_OFFSET))(this, a1);
		}

		::System::Void AKLEABLDAOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIKLPPDFENE_AKLEABLDAOC_OFFSET))(this, a1);
		}

		::System::Void PCJLODLOIEJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_PCJLODLOIEJ_OFFSET))(this, a1);
		}

		::System::Boolean GNDBMBGPMKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_GNDBMBGPMKK_OFFSET))(this, a1);
		}

		::System::Void AJJBAFEBCMK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_AJJBAFEBCMK_OFFSET))(this, a1, a2);
		}

		::System::Void FCCPBFPFAAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_FCCPBFPFAAP_OFFSET))(this);
		}

		::System::Void GKKPDCJMHFH(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIKLPPDFENE_GKKPDCJMHFH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ADOAAIFKKGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_ADOAAIFKKGN_OFFSET))(this);
		}

		::System::Boolean HHKIPOGHOIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_HHKIPOGHOIE_OFFSET))(this);
		}

		::System::Void HJGAMGJIKCH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIKLPPDFENE_HJGAMGJIKCH_OFFSET))(this, a1);
		}

		::System::Void KLINADBKHLK(::RPG::GameCore::RtBattleCharacterCameraTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + GIKLPPDFENE_KLINADBKHLK_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtBattleCharacterCameraConfig* ENMODHEJEOF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_ENMODHEJEOF_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtBattleCharacterCameraTag PILGDDEMHPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::RtBattleCharacterCameraTag(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_PILGDDEMHPO_OFFSET))(this, a1);
		}

		::System::Void ENBLLBFJPGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_ENBLLBFJPGL_OFFSET))(this);
		}

		::System::Boolean NCGEFNNIPBO(::RPG::GameCore::TeamType a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GIKLPPDFENE_NCGEFNNIPBO_OFFSET))(this, a1, a2);
		}

		::System::Void IDPCOOFOIJJ(::FGMHNMKDFMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_IDPCOOFOIJJ_OFFSET))(this, a1);
		}

		::System::Void IAGAMDAHNHF(::FGMHNMKDFMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + GIKLPPDFENE_IAGAMDAHNHF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* MJLHNJBHBHA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_MJLHNJBHBHA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AJKKIKLBALD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_AJKKIKLBALD_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleCameraMode BINNMGDGGJN()
		{
			return ((::RPG::GameCore::RtBattleCameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKLPPDFENE_BINNMGDGGJN_OFFSET))(this);
		}

	};
