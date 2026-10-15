#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnchorVirtualCameraMode.h"
#include "unitysdk/RPG/Client/LookAtExtraConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class VirtualCameraAutoFitScreen; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ACOOCANFNOG_OFFSET UNITYSDK_OFFSET(0xC67C920)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC67AB10)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_BIDAGFBEPEG_OFFSET UNITYSDK_OFFSET(0xC67AA90)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_BKGFKCNLOFO_OFFSET UNITYSDK_OFFSET(0xC67C780)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_CNGLAJALPJH_OFFSET UNITYSDK_OFFSET(0xC67AAE0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xC67ED20)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DFALAPMOJHN_OFFSET UNITYSDK_OFFSET(0xC67B5B0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DNCPBLLLHFF_OFFSET UNITYSDK_OFFSET(0xC67B140)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DNHCDEFEAOD_OFFSET UNITYSDK_OFFSET(0xC67B400)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_EEGEMMDGLCE_OFFSET UNITYSDK_OFFSET(0xC67AAF0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_FBKMCAICGAB_OFFSET UNITYSDK_OFFSET(0xC67AB00)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_FHGLFABOCOJ_OFFSET UNITYSDK_OFFSET(0xC67CC70)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_IMKFKHKDNDH_OFFSET UNITYSDK_OFFSET(0xC67B1F0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NABPNKOJMLL_OFFSET UNITYSDK_OFFSET(0xC67B3B0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NFHPPNNOJPP_OFFSET UNITYSDK_OFFSET(0xC67C3B0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NJFMNGHPFGI_OFFSET UNITYSDK_OFFSET(0xC67E240)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0xC67D650)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_OHGNDHGILJB_OFFSET UNITYSDK_OFFSET(0xC67E460)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC67B010)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_SETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xC67C6E0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xC67CD30)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xC67D6D0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPHONECAMERAPOSITIONANDDIRECTION_OFFSET UNITYSDK_OFFSET(0xC67D8E0)
#define RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPROPCAMERAPOSITIONANDDIRECTION_OFFSET UNITYSDK_OFFSET(0xC67E650)

namespace RPG::Client
{
	class AnchorVirtualCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnchorVirtualCameraMode ControllerMode; // 0x18
		::UnityEngine::Vector3 PositionOffsetRatio; // 0x1C
		::System::String* AnchorName; // 0x28
		::UnityEngine::Vector3 RotationMaxLimit; // 0x30
		::UnityEngine::Vector3 RotationMinLimit; // 0x3C
		::System::Single MaxOffsetDistance; // 0x48
		::System::Single RotationLerpDuration; // 0x4C
		::System::Single PositionLerpDuration; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* MovingLerpCurve; // 0x58
		::UnityEngine::Transform* FollowTarget; // 0x60
		::System::Single CameraActiveLerpDuration; // 0x68
		::System::Single CameraDeactiveLerpDuration; // 0x6C
		::UnityEngine::Vector3 CameraRootOffset; // 0x70
		::UnityEngine::Vector3 CameraRotateRatio; // 0x7C
		::UnityEngine::Vector3 OCMNNBJFNKB; // 0x88
		::UnityEngine::Quaternion MICKHKGHGOB; // 0x94
		::UnityEngine::Vector3 JLJELBEGEPG; // 0xA4
		::Cinemachine::CinemachineVirtualCamera* EDHDOCKJIDG; // 0xB0
		::UnityEngine::Vector3 ECCBHFLMJFF; // 0xB8
		::UnityEngine::Vector3 PCGHJDPPAKC; // 0xC4
		::System::Boolean KEEKAIOBPBH; // 0xD0
		::System::Boolean BHKBPEAONKB; // 0xD1
		::System::Byte _padding1[0x6];
		::UnityEngine::Transform* GMIHCNJFHKC; // 0xD8
		::UnityEngine::Vector3 ELLGDCJCAJN; // 0xE0
		::System::Byte _padding2[0x4];
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0xF0
		::UnityEngine::Vector3 PHECJLCEMOP; // 0xF8
		::System::Single PPPDLCDJDKD; // 0x104
		::System::Single BDADOICANDC; // 0x108
		::UnityEngine::Vector3 EKGIEIPJIJN; // 0x10C
		::UnityEngine::Quaternion BMFHKALOLIG; // 0x118
		::UnityEngine::Vector3 BBMPPHGMLCH; // 0x128
		::System::Boolean PMIFDALDCIB; // 0x134
		::System::Byte _padding3[0x3];
		::UnityEngine::AnimationCurve* HDIDHIALGPE; // 0x138
		::UnityEngine::Vector3 MCDEIAHMDOP; // 0x140
		::UnityEngine::Quaternion FGOEAPAPHOB; // 0x14C
		::System::Boolean GOOCAGLNDJJ; // 0x15C
		::System::Byte _padding4[0x3];
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x160
		::System::Boolean BKDBJLOOFCL; // 0x168
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector3 FollowOffsetDetect; // 0x16C
		::Il2CppArray<::RPG::Client::LookAtExtraConfig>* LookAtPhoneExtraConfigs; // 0x178
		::UnityEngine::Vector3 BCGFEHLPENP; // 0x180
		::System::Byte _padding6[0x4];
		::RPG::Client::CharacterMonoAvatar* OIMEEEMBDIH; // 0x190
		::Cinemachine::CinemachineComposer* NOJIKPIMAHH; // 0x198
		::RPG::Client::VirtualCameraAutoFitScreen* HDJDFFLGDNF; // 0x1A0
		::UnityEngine::Vector3 LJCKLBFDIJE; // 0x1A8
		::System::Byte _padding7[0x4];
		::Il2CppArray<::RPG::Client::LookAtExtraConfig>* LookAtPropExtraConfigs; // 0x1B8
		::System::Single DetectPlayerRaycastLength; // 0x1C0
		::System::Int32 FPFKGOIODHC; // 0x1C4
		::RPG::Client::PipelineCameraEngine* OECOIEPPJGA; // 0x1C8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Boolean BIDAGFBEPEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_BIDAGFBEPEG_OFFSET))(this);
		}

		::System::Boolean CNGLAJALPJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_CNGLAJALPJH_OFFSET))(this);
		}

		::System::Boolean EEGEMMDGLCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_EEGEMMDGLCE_OFFSET))(this);
		}

		::System::Boolean FBKMCAICGAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_FBKMCAICGAB_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void IMKFKHKDNDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_IMKFKHKDNDH_OFFSET))(this);
		}

		::System::Void DNCPBLLLHFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DNCPBLLLHFF_OFFSET))(this);
		}

		::System::Boolean NABPNKOJMLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NABPNKOJMLL_OFFSET))(this);
		}

		::System::Void DNHCDEFEAOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DNHCDEFEAOD_OFFSET))(this);
		}

		::System::Void SetCenterPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_SETCENTERPOS_OFFSET))(this, a1);
		}

		static ::UnityEngine::AnimationCurve* BKGFKCNLOFO()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_BKGFKCNLOFO_OFFSET))();
		}

		::System::Void DFALAPMOJHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_DFALAPMOJHN_OFFSET))(this);
		}

		::System::Single ACOOCANFNOG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_ACOOCANFNOG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FHGLFABOCOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_FHGLFABOCOJ_OFFSET))(this);
		}

		::System::Void StartUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STARTUPDATE_OFFSET))(this, a1);
		}

		::System::Void NPJCJHBJLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NPJCJHBJLHA_OFFSET))(this, a1);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_STOPUPDATE_OFFSET))(this);
		}

		::System::Void UpdateLookAtPhoneCameraPositionAndDirection(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPHONECAMERAPOSITIONANDDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void NFHPPNNOJPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NFHPPNNOJPP_OFFSET))(this);
		}

		::System::Boolean OHGNDHGILJB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_OHGNDHGILJB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NJFMNGHPFGI(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_NJFMNGHPFGI_OFFSET))(this, a1);
		}

		::System::Void UpdateLookAtPropCameraPositionAndDirection(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANCHORVIRTUALCAMERACONTROLLER_UPDATELOOKATPROPCAMERAPOSITIONANDDIRECTION_OFFSET))(this, a1);
		}

	};
}
