#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/MoleMole/Cameras/NapActionVirtualStateDrivenCamera_Instruction.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JBIPOEBOMFH;
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_AOGFBIJGNJI_OFFSET UNITYSDK_OFFSET(0x174E1D00)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_DMHHHGFEPPM_OFFSET UNITYSDK_OFFSET(0x174E2F70)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_DPLPKHICLBC_OFFSET UNITYSDK_OFFSET(0x174E2A60)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_EIBAGADIGOL_OFFSET UNITYSDK_OFFSET(0x174E31C0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x174E0040)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x174DFAF0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x174E1200)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x174E1F30)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x174DF920)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x174DFBA0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x174DF8B0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x174DFA80)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x174DFB80)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_NAPCAMERAMOVESTATE_OFFSET UNITYSDK_OFFSET(0x174DF8C0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x174DFB50)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GIEOKILNPNP_OFFSET UNITYSDK_OFFSET(0x174E2C80)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x174E2EA0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x174E0330)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x174DFA90)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_JGFPDNBHOID_OFFSET UNITYSDK_OFFSET(0x174E2B60)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_JMPDBIEMLDB_OFFSET UNITYSDK_OFFSET(0x174E18E0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x174E2B50)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_LABMKDPHHLB_OFFSET UNITYSDK_OFFSET(0x174E2E90)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_LPHKIMPMDFD_OFFSET UNITYSDK_OFFSET(0x174E2F10)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_MFPKJFPLMIB_OFFSET UNITYSDK_OFFSET(0x174E1270)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_MJJAPCDHABD_OFFSET UNITYSDK_OFFSET(0x174E2B70)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_OMJJAOGMNKI_OFFSET UNITYSDK_OFFSET(0x174E2C40)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x174E1D60)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x174E1A70)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x174DFBC0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x174E1EC0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x174E0240)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PIBDPEDJFNO_OFFSET UNITYSDK_OFFSET(0x174DFD80)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PMGCCNCEAKI_OFFSET UNITYSDK_OFFSET(0x174E2F20)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x174DFBB0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x174DFA70)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x174DFB90)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_UPDATEPARENTCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x174E2460)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x174E1F50)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x174E28C0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x174E25A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapActionVirtualStateDrivenCamera_TypeDefinitionIndex = 64473;

	class NapActionVirtualStateDrivenCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_BBAGEFFLLEB()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x4A9C0);
		}
		static ::OCLPKBONCJJ* StaticGet_PPPJBBFPAMI()
		{
			return (::OCLPKBONCJJ*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x4A9C8);
		}
		static ::UnityEngine::Quaternion* StaticGet_DebugOverrideRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x114C0);
		}
		static ::System::Single* StaticGet_DebugOverrideAlpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x114D0);
		}
		static ::System::Boolean* StaticGet_DebugOverride()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x114D4);
		}
		static ::UnityEngine::Vector3* StaticGet_DebugOverridePosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x114D8);
		}
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::System::Byte _padding0[0x7];
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::System::Int32 _LODHAJKCCCK_k__BackingField; // 0x88
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* m_Instructions; // 0x90
		::Il2CppArray<::System::Object*>* m_ParentCameraMove; // 0x98
		::JBIPOEBOMFH* MJPMJMCFPIC; // 0xA0
		::Cinemachine::ICinemachineCamera* _ANFNHILOCFD_k__BackingField; // 0xA8
		::Cinemachine::ICinemachineCamera* _FHOILEDHLKJ_k__BackingField; // 0xB0
		::Cinemachine::CameraState JBDIJLLGBKA; // 0xB8
		::System::Single DFKHPKAHGAN; // 0x1A0
		::System::Byte _padding2[0x4];
		::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_Instruction JMJIKMOILLI; // 0x1A8
		::System::Single CCDIGMOEJIB; // 0x1C0
		::System::Byte _padding3[0x4];
		::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_Instruction MBFEJKGFGNL; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FJNINPKPIJM; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JMGHEDJKKFJ; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CCTOR_OFFSET))();
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FRAMECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_NapCameraMoveState()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_NAPCAMERAMOVESTATE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(this, EGEGIMGMJHN);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* ADCMOECNMLG, ::System::Boolean KPLAKKKMKJC)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(this, ADCMOECNMLG, KPLAKKKMKJC);
		}

		::System::Void ForceCameraState(::Cinemachine::CameraState& JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERASTATE_OFFSET))(this, JKBLDFBGBPK);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* HODAIDNDKHD, ::UnityEngine::Vector3 JPKIKNCMAID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, HODAIDNDKHD, JPKIKNCMAID);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* DPGDCLOLJMH, ::UnityEngine::Vector3 NFLNBCPPJGL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, DPGDCLOLJMH, NFLNBCPPJGL, PMNLNNGEIFM);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 NFLNBCPPJGL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, NFLNBCPPJGL, PMNLNNGEIFM);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::System::Void UpdateParentCameraMove(::System::Collections::Generic::List_1<::System::String*>* BIAFNFLCCCN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_UPDATEPARENTCAMERAMOVE_OFFSET))(this, BIAFNFLCCCN);
		}

		::Cinemachine::CinemachineVirtualCameraBase* MFPKJFPLMIB()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_MFPKJFPLMIB_OFFSET))(this);
		}

		::System::Void DPLPKHICLBC(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Quaternion KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_DPLPKHICLBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_KDOIBCBFBAG_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* JGFPDNBHOID()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_JGFPDNBHOID_OFFSET))(this);
		}

		::System::Void MJJAPCDHABD(::UnityEngine::Transform* MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_MJJAPCDHABD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::String* OMJJAOGMNKI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_OMJJAOGMNKI_OFFSET))(this);
		}

		::System::Void JMPDBIEMLDB(::Cinemachine::CinemachineVirtualCameraBase* JINECNNDGOG)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_JMPDBIEMLDB_OFFSET))(this, JINECNNDGOG);
		}

		static ::OCLPKBONCJJ GIEOKILNPNP()
		{
			return ((::OCLPKBONCJJ(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GIEOKILNPNP_OFFSET))();
		}

		::System::Boolean LABMKDPHHLB(::Cinemachine::ICinemachineCamera* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_LABMKDPHHLB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PIBDPEDJFNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PIBDPEDJFNO_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void LPHKIMPMDFD(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_LPHKIMPMDFD_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AOGFBIJGNJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_AOGFBIJGNJI_OFFSET))(this);
		}

		::System::Void PMGCCNCEAKI(::Cinemachine::ICinemachineCamera* MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PMGCCNCEAKI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void DMHHHGFEPPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_DMHHHGFEPPM_OFFSET))(this);
		}

		::System::Void EIBAGADIGOL(::Cinemachine::ICinemachineCamera* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_EIBAGADIGOL_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
