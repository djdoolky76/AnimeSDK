#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNADOIFAIKM;
class LHBGGEHHLJC;
class TrackCameraController;
namespace Cinemachine { class CinemachineDialogueShot; }
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineMixingCamera; }
namespace Cinemachine { class CinemachineSingleShot; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define GNBFLJHKKLB_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x16CA8D90)
#define GNBFLJHKKLB_AMNDJLNAGKB_OFFSET UNITYSDK_OFFSET(0x16CA7820)
#define GNBFLJHKKLB_BPDJKAIOJPL_OFFSET UNITYSDK_OFFSET(0x16CA86B0)
#define GNBFLJHKKLB_COGBIPAFJAI_OFFSET UNITYSDK_OFFSET(0x16CA8960)
#define GNBFLJHKKLB_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA3420)
#define GNBFLJHKKLB_DCHKLMKGLIE_OFFSET UNITYSDK_OFFSET(0x16CA8430)
#define GNBFLJHKKLB_DOJIEHJCICJ_OFFSET UNITYSDK_OFFSET(0x16CA58C0)
#define GNBFLJHKKLB_EEILNEJGDBI_OFFSET UNITYSDK_OFFSET(0x16CA5540)
#define GNBFLJHKKLB_EIMELMCIGGE_OFFSET UNITYSDK_OFFSET(0x16CA4700)
#define GNBFLJHKKLB_EPLAFIEOKKM_OFFSET UNITYSDK_OFFSET(0x16CA8030)
#define GNBFLJHKKLB_EPOAPKGGEIG_OFFSET UNITYSDK_OFFSET(0x16CA5950)
#define GNBFLJHKKLB_FACJNDOFECD_OFFSET UNITYSDK_OFFSET(0x16CA7C40)
#define GNBFLJHKKLB_FEEDCBHDEOH_OFFSET UNITYSDK_OFFSET(0x16CA7D80)
#define GNBFLJHKKLB_FICDMHINOFA_OFFSET UNITYSDK_OFFSET(0x16CA7450)
#define GNBFLJHKKLB_GPPJDJLHLDA_OFFSET UNITYSDK_OFFSET(0x16CA4430)
#define GNBFLJHKKLB_HGODAJACOHG_OFFSET UNITYSDK_OFFSET(0x16CA8830)
#define GNBFLJHKKLB_JDFDAGHPFKO_OFFSET UNITYSDK_OFFSET(0x16CA6890)
#define GNBFLJHKKLB_JFAFBDAKFCN_OFFSET UNITYSDK_OFFSET(0x16CA54B0)
#define GNBFLJHKKLB_JHOLNAMAHLD_OFFSET UNITYSDK_OFFSET(0x16CA6B60)
#define GNBFLJHKKLB_JKNHAEKOAOK_OFFSET UNITYSDK_OFFSET(0x16CA7A50)
#define GNBFLJHKKLB_JMBALBFLGFP_OFFSET UNITYSDK_OFFSET(0x16CA56B0)
#define GNBFLJHKKLB_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x16CA3750)
#define GNBFLJHKKLB_KKPACLDKMCM_OFFSET UNITYSDK_OFFSET(0x16CA9050)
#define GNBFLJHKKLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16CA3590)
#define GNBFLJHKKLB_LIGGLFKMKGG_OFFSET UNITYSDK_OFFSET(0x16CA37A0)
#define GNBFLJHKKLB_MAIMOFDCBGG_OFFSET UNITYSDK_OFFSET(0x16CA6950)
#define GNBFLJHKKLB_MCKMMCAMBOJ_OFFSET UNITYSDK_OFFSET(0x16CA6900)
#define GNBFLJHKKLB_MMDICFCCAGK_OFFSET UNITYSDK_OFFSET(0x16CA5710)
#define GNBFLJHKKLB_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x16CA3640)
#define GNBFLJHKKLB_NIPJFJJIPPK_OFFSET UNITYSDK_OFFSET(0x16CA7650)
#define GNBFLJHKKLB_OMFBAFFHCBI_OFFSET UNITYSDK_OFFSET(0x16CA4FC0)
#define GNBFLJHKKLB_OOOMFIJDAII_OFFSET UNITYSDK_OFFSET(0x16CA45B0)
#define GNBFLJHKKLB_PADJHMMDMKO_OFFSET UNITYSDK_OFFSET(0x16CA76D0)
#define GNBFLJHKKLB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16CA4530)

inline static constexpr unsigned int GNBFLJHKKLB_TypeDefinitionIndex = 71608;

	class GNBFLJHKKLB : public ::MDILEMALGNC
	{
	public:
		::Cinemachine::CinemachineDollyCart* DIDAGAELOMK; // 0x38
		::Cinemachine::CinemachineMixingCamera* LNGIIANMHFC; // 0x40
		::UnityEngine::Transform* FPOLAOGJJAK; // 0x48
		::UnityEngine::Transform* EJBKHMENLKA; // 0x50
		::TrackCameraController* FCPGGDJNPEK; // 0x58
		::Cinemachine::CinemachineDialogueShot* JKDNKGBJMPA; // 0x60
		::RPG::GameCore::GameEntity* KNMIMHIBENA; // 0x68
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelCurveInstance*>* PPDLPPDDKAF; // 0x70
		::Cinemachine::CinemachineVirtualCamera* MHMABPNBJOC; // 0x78
		::LHBGGEHHLJC* ALOIMHMJBII; // 0x80
		::UnityEngine::Transform* LPEKOPMFGDM; // 0x88
		::RPG::Client::ShotTemplateRuntime* EFKLANNMHAD; // 0x90
		::Cinemachine::CinemachineSingleShot* ODMMANPJLNI; // 0x98
		::UnityEngine::Transform* GCJHLJAMBOE; // 0xA0
		::Cinemachine::CinemachineVirtualCameraBase* AEOGFGBJPJI; // 0xA8
		::BNADOIFAIKM* MOHOOECKGKB; // 0xB0
		::System::Single GLGKPEHDNBP; // 0xB8
		::System::Boolean ABJCNFPKKNP; // 0xBC
		::System::Boolean JMEMBFHFIDP; // 0xBD
		::System::Boolean KKOEPCHFPGF; // 0xBE
		::System::Boolean NIEMAINODBN; // 0xBF
		::System::Single ABNMJLAMCGE; // 0xC0
		::System::Boolean FOMNAIDPPOI; // 0xC4
		::System::Boolean EADCOMGFGAE; // 0xC5
		::System::Byte _padding0[0x2];
		::System::Int32 DCJIBFIJFJA; // 0xC8
		::System::Boolean PLGJFGIOBML; // 0xCC
		::System::Boolean FIKNIBEENLH; // 0xCD
		::System::Boolean ANGIPPAGOAE; // 0xCE
		::System::Byte _padding1[0x1];
		::System::Single NDIHOCKJACJ; // 0xD0
		// static const ::System::String* ENIMFHHHJOO; // 0x0
		// static const ::System::Object BDKGJFDJMJF; // 0x0
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void LIGGLFKMKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_LIGGLFKMKGG_OFFSET))(this);
		}

		::System::Void OOOMFIJDAII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_OOOMFIJDAII_OFFSET))(this);
		}

		::System::Void JFAFBDAKFCN(::RPG::Client::ShotTemplateRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_JFAFBDAKFCN_OFFSET))(this, a1);
		}

		::System::Void EEILNEJGDBI(::LHBGGEHHLJC* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHBGGEHHLJC*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_EEILNEJGDBI_OFFSET))(this, a1, a2);
		}

		::System::Void JMBALBFLGFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_JMBALBFLGFP_OFFSET))(this);
		}

		::System::Single MMDICFCCAGK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_MMDICFCCAGK_OFFSET))(this, a1, a2);
		}

		::System::Void DOJIEHJCICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_DOJIEHJCICJ_OFFSET))(this);
		}

		::System::Void MCKMMCAMBOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_MCKMMCAMBOJ_OFFSET))(this);
		}

		::System::Void GPPJDJLHLDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_GPPJDJLHLDA_OFFSET))(this);
		}

		::System::Void JDFDAGHPFKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_JDFDAGHPFKO_OFFSET))(this);
		}

		::System::Void JHOLNAMAHLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_JHOLNAMAHLD_OFFSET))(this);
		}

		::System::Void PADJHMMDMKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_PADJHMMDMKO_OFFSET))(this);
		}

		::System::Void EIMELMCIGGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_EIMELMCIGGE_OFFSET))(this);
		}

		::System::Void FICDMHINOFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_FICDMHINOFA_OFFSET))(this);
		}

		::System::Boolean FEEDCBHDEOH(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_FEEDCBHDEOH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OMFBAFFHCBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_OMFBAFFHCBI_OFFSET))(this);
		}

		::System::Void EPLAFIEOKKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_EPLAFIEOKKM_OFFSET))(this);
		}

		::System::Void MAIMOFDCBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_MAIMOFDCBGG_OFFSET))(this);
		}

		::System::Void AMNDJLNAGKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_AMNDJLNAGKB_OFFSET))(this);
		}

		::System::Void EPOAPKGGEIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_EPOAPKGGEIG_OFFSET))(this);
		}

		::UnityEngine::Vector3 DCHKLMKGLIE(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_DCHKLMKGLIE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPDJKAIOJPL(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_BPDJKAIOJPL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 HGODAJACOHG(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_HGODAJACOHG_OFFSET))(this, a1, a2);
		}

		::System::Void COGBIPAFJAI(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_COGBIPAFJAI_OFFSET))(this, a1, a2);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void KKPACLDKMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_KKPACLDKMCM_OFFSET))(this);
		}

		::System::Void FACJNDOFECD(::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_FACJNDOFECD_OFFSET))(this, a1);
		}

		::System::Void JKNHAEKOAOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_JKNHAEKOAOK_OFFSET))(this);
		}

		::System::Void NIPJFJJIPPK(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GNBFLJHKKLB_NIPJFJJIPPK_OFFSET))(this, a1, a2);
		}

	};
