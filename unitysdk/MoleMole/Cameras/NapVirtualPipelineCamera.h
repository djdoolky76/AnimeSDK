#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/HLGHOFNBMLE.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CFBKLGMJPIO;
class PCNODGDKBAK;
namespace Cinemachine { class ICinemachineCamera; }
namespace MoleMole::Cameras { template <typename T> class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1079B010)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET UNITYSDK_OFFSET(0x1079AE90)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CHNFJHAEKEA_OFFSET UNITYSDK_OFFSET(0x10799E20)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET UNITYSDK_OFFSET(0x1079AC30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_EKLFNCOMBDH_OFFSET UNITYSDK_OFFSET(0x1079BC60)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_FORCEINITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1079B2A0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1079A5A0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1079A700)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET UNITYSDK_OFFSET(0x10799C20)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET UNITYSDK_OFFSET(0x1079B210)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x107979D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x107979F0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x10797A10)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GPCNFMNDBDP_OFFSET UNITYSDK_OFFSET(0x1079B780)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET UNITYSDK_OFFSET(0x1079A490)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1079B710)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x10799CA0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x10798330)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET UNITYSDK_OFFSET(0x1079B1D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1079B190)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1079B810)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1079BC50)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NKABILKIMHI_OFFSET UNITYSDK_OFFSET(0x1079BCC0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NKHOMGNMPDL_OFFSET UNITYSDK_OFFSET(0x10798F30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NOGFLNOEKAJ_OFFSET UNITYSDK_OFFSET(0x1079BAA0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10798090)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10797A40)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x10799B20)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET UNITYSDK_OFFSET(0x10799BB0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x107994A0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_PJGHAKEMHGM_OFFSET UNITYSDK_OFFSET(0x1079B390)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_PMGCCNCEAKI_OFFSET UNITYSDK_OFFSET(0x1079B6C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x107979E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x10797A00)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1079A880)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1079B2F0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_TypeDefinitionIndex = 47282;

	class NapVirtualPipelineCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::PipelineCamera::ICameraController_1<::CFBKLGMJPIO*>* ECPDIIFENOM; // 0x68
		::System::Boolean LBFNLMLKAHC; // 0x70
		::System::Byte _padding0[0x7];
		::CFBKLGMJPIO* NJOJPJFBLKL; // 0x78
		::Il2CppArray<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* GFMJMBCJPEO; // 0x80
		::System::Collections::Generic::List_1<::PipelineCamera::Module::InPlaceBlender*>* PIHGJGACICO; // 0x88
		::MoleMole::Cameras::NapVirtual3DActionCamera_1* EEAPFOALHLD; // 0x90
		::System::Boolean ENLALACKEPK; // 0x98
		::System::Byte _padding1[0x3];
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> NMCNMIANNNC; // 0x9C
		::System::Byte _padding2[0x28];
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> FJDENGILIHH; // 0xCC
		::System::Byte _padding3[0x2C];
		::UnityEngine::Transform* lookAt; // 0x100
		::UnityEngine::Transform* follow; // 0x108
		::Cinemachine::CameraState BOHBDHAPLDN; // 0x110

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET))(this, EGEGIMGMJHN);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 NFLNBCPPJGL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, NFLNBCPPJGL, PMNLNNGEIFM);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* DPGDCLOLJMH, ::UnityEngine::Vector3 NFLNBCPPJGL, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, DPGDCLOLJMH, NFLNBCPPJGL, PMNLNNGEIFM);
		}

		::System::Void OnStartNewGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET))(this);
		}

		::System::Void OnSwitchToNewStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET))(this);
		}

		::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* GetSequencePlayer(::HLGHOFNBMLE HPEMFJDOAKL)
		{
			return ((::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::HLGHOFNBMLE))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET))(this, HPEMFJDOAKL);
		}

		::System::Void InitCameraData(::CFBKLGMJPIO* LFMICOCAFFI, ::MoleMole::Cameras::NapVirtual3DActionCamera_1* JBEMNGAPKDA)
		{
			return ((::System::Void(*)(::PVOID, ::CFBKLGMJPIO*, ::MoleMole::Cameras::NapVirtual3DActionCamera_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET))(this, LFMICOCAFFI, JBEMNGAPKDA);
		}

		::System::Void HandleCameraCommand(::PipelineCamera::ICameraCommand* PKJBJOGEGLC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommand*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET))(this, PKJBJOGEGLC);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLastCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET))(this);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLatestCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET))(this);
		}

		static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* CreateDefaultCollisionFilter()
		{
			return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET))();
		}

		::System::Void CancelBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET))(this);
		}

		::System::Void CancelBlendingRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET))(this);
		}

		::System::Boolean IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET))(this);
		}

		::System::Boolean IsBlendingRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET))(this);
		}

		::PCNODGDKBAK* GetSuccessor()
		{
			return ((::PCNODGDKBAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET))(this);
		}

		::System::Void ForceInitCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_FORCEINITCAMERADATA_OFFSET))(this);
		}

		::System::Void PJGHAKEMHGM(::Cinemachine::CameraState& JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_PJGHAKEMHGM_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void PMGCCNCEAKI(::Cinemachine::ICinemachineCamera* MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_PMGCCNCEAKI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void GPCNFMNDBDP(::HLGHOFNBMLE HPEMFJDOAKL, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* ECKMPOAABAL)
		{
			return ((::System::Void(*)(::PVOID, ::HLGHOFNBMLE, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GPCNFMNDBDP_OFFSET))(this, HPEMFJDOAKL, ECKMPOAABAL);
		}

		static ::System::Void JLIMOLHLFAK(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::PipelineCamera::WorldBasicCameraData& JBFGJJMEDGO, ::Cinemachine::CameraState& IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_JLIMOLHLFAK_OFFSET))(GPBKDGGEBCF, JBFGJJMEDGO, IGAAKDOIPNN);
		}

		::System::Void NOGFLNOEKAJ(::Cinemachine::CameraState& JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NOGFLNOEKAJ_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void CHNFJHAEKEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CHNFJHAEKEA_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void EKLFNCOMBDH(::PipelineCamera::Module::InPlaceBlender* ODLOFJPFLJE)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_EKLFNCOMBDH_OFFSET))(this, ODLOFJPFLJE);
		}

		static ::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> NKABILKIMHI(::Cinemachine::CameraState& JKBLDFBGBPK)
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NKABILKIMHI_OFFSET))(JKBLDFBGBPK);
		}

		::System::Void NKHOMGNMPDL(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF, ::PipelineCamera::WorldBasicCameraData JBFGJJMEDGO)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_NKHOMGNMPDL_OFFSET))(this, GPBKDGGEBCF, JBFGJJMEDGO);
		}
	};
}
