#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/RPGTools/RoadGenerator/FollowRoadMovement_EndBehavior.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineTransposer; }
namespace RPG::Client { class TrackExtensionMonoPlugin; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpeedLineEffect; }
namespace RPGTools::RoadGenerator { class FollowRoadMovement_ExtraCameraConfig; }
namespace RPGTools::RoadGenerator { class FollowRoadMovement_SpeedLineEffectParams; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_CameraPointSample; }
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_EventPoint; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ACJJHFFIMOF_OFFSET UNITYSDK_OFFSET(0x1BD54D80)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1BD52D20)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADD_EVENTPOINTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1BD50390)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADD_STOPENDREACHED_OFFSET UNITYSDK_OFFSET(0x1BD502B0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADJGCCLBFLH_OFFSET UNITYSDK_OFFSET(0x1BD545F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_AFABPOFAECP_OFFSET UNITYSDK_OFFSET(0x1BD538F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_AFGOKALHLAA_OFFSET UNITYSDK_OFFSET(0x1BD54D00)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_APAHEGJAEPH_OFFSET UNITYSDK_OFFSET(0x1BD544A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BCMHOAGKBIA_OFFSET UNITYSDK_OFFSET(0x1BD527D0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BENKDDCHCNP_OFFSET UNITYSDK_OFFSET(0x1BD56610)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BJJHOFCDKFI_OFFSET UNITYSDK_OFFSET(0x1BD55EC0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BOBNJFKAJDC_OFFSET UNITYSDK_OFFSET(0x1BD537E0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CFLOBLJHJHN_OFFSET UNITYSDK_OFFSET(0x1BD57CD0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CLAHMIJGMCO_OFFSET UNITYSDK_OFFSET(0x1BD52490)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD58700)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DDEKLDPPJFL_OFFSET UNITYSDK_OFFSET(0x1BD57FA0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DILHAFPKGEK_OFFSET UNITYSDK_OFFSET(0x1BD54210)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DLBOPJBAEGE_OFFSET UNITYSDK_OFFSET(0x1BD54AF0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EHKJJOJDLEK_OFFSET UNITYSDK_OFFSET(0x1BD56BD0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ELPOMBFHJIC_OFFSET UNITYSDK_OFFSET(0x1BD557C0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ENDEGDCMACK_OFFSET UNITYSDK_OFFSET(0x1BD50E90)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ENLJKGKNNIK_OFFSET UNITYSDK_OFFSET(0x1BD53030)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EOKKJABIGGC_OFFSET UNITYSDK_OFFSET(0x1BD54360)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_FKPJBIBNFAL_OFFSET UNITYSDK_OFFSET(0x1BD55A70)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ACTIVECAMERAALIAS_OFFSET UNITYSDK_OFFSET(0x1BD53A10)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ACTUALSPEED_OFFSET UNITYSDK_OFFSET(0x1BD50710)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CAMERAINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD53A00)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD50540)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CURRENTRATIO_OFFSET UNITYSDK_OFFSET(0x1BD50550)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ENABLEPITCHTILT_OFFSET UNITYSDK_OFFSET(0x1BD507F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ENABLETURNTILT_OFFSET UNITYSDK_OFFSET(0x1BD507B0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISROADVALID_OFFSET UNITYSDK_OFFSET(0x1BD505D0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1BD50790)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISUSINGTRACKEXTENSION_OFFSET UNITYSDK_OFFSET(0x1BD50630)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ORIENTTOCURVE_OFFSET UNITYSDK_OFFSET(0x1BD50520)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0x1BD507E0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1BD50490)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TANGENTIALACCELERATION_OFFSET UNITYSDK_OFFSET(0x1BD507D0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TILTANGLE_OFFSET UNITYSDK_OFFSET(0x1BD507A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TOTALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD505C0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1BD506F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VERTICALACCELERATION_OFFSET UNITYSDK_OFFSET(0x1BD50690)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VERTICALVELOCITY_OFFSET UNITYSDK_OFFSET(0x1BD506A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HDCCIPCDPOG_OFFSET UNITYSDK_OFFSET(0x1BD55530)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HDPEBDGODGA_OFFSET UNITYSDK_OFFSET(0x1BD50BB0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HNBAGANJGFM_OFFSET UNITYSDK_OFFSET(0x1BD54670)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IGPCPNHMCHN_OFFSET UNITYSDK_OFFSET(0x1BD51250)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IJAMPIHGOLC_OFFSET UNITYSDK_OFFSET(0x1BD526A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IJPJKGDFLMO_OFFSET UNITYSDK_OFFSET(0x1BD51E00)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IMMPDALFDKJ_OFFSET UNITYSDK_OFFSET(0x1BD57A00)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IOFFHIAOLDH_OFFSET UNITYSDK_OFFSET(0x1BD530B0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JADDDINDBJN_OFFSET UNITYSDK_OFFSET(0x1BD52E60)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JBMFPECBMIG_OFFSET UNITYSDK_OFFSET(0x1BD577E0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JCMKMFICHEC_OFFSET UNITYSDK_OFFSET(0x1BD53750)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JHGCHAILNKJ_OFFSET UNITYSDK_OFFSET(0x1BD568F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_KBAJCCOGKCH_OFFSET UNITYSDK_OFFSET(0x1BD58370)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_KCGJLAGKBOG_OFFSET UNITYSDK_OFFSET(0x1BD58670)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_LLCODMBIAMM_OFFSET UNITYSDK_OFFSET(0x1BD56340)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_LNANHBKCNDH_OFFSET UNITYSDK_OFFSET(0x1BD520A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MHPJGDFJDDK_OFFSET UNITYSDK_OFFSET(0x1BD53480)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MKDNLILCJOJ_OFFSET UNITYSDK_OFFSET(0x1BD523C0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MKHKLKGPMGI_OFFSET UNITYSDK_OFFSET(0x1BD53FF0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MOMJMHMGFKI_OFFSET UNITYSDK_OFFSET(0x1BD548A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NDJBEHEJDIP_OFFSET UNITYSDK_OFFSET(0x1BD55920)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NDNDAFFBJMC_OFFSET UNITYSDK_OFFSET(0x1BD56F70)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NGEAAJPJHJM_OFFSET UNITYSDK_OFFSET(0x1BD57690)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ODKAIENEJEM_OFFSET UNITYSDK_OFFSET(0x1BD533A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BD52E10)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_PLOEBDELPDN_OFFSET UNITYSDK_OFFSET(0x1BD526F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_REMOVE_EVENTPOINTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1BD50410)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_REMOVE_STOPENDREACHED_OFFSET UNITYSDK_OFFSET(0x1BD50320)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETENDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1BD50810)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD56220)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETPOSITIONBYRATIO_OFFSET UNITYSDK_OFFSET(0x1BD56140)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETREVERSE_OFFSET UNITYSDK_OFFSET(0x1BD562F0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETROAD_1_OFFSET UNITYSDK_OFFSET(0x1BD56030)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETROAD_OFFSET UNITYSDK_OFFSET(0x1BD55FE0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ENABLEPITCHTILT_OFFSET UNITYSDK_OFFSET(0x1BD50800)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ENABLETURNTILT_OFFSET UNITYSDK_OFFSET(0x1BD507C0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ORIENTTOCURVE_OFFSET UNITYSDK_OFFSET(0x1BD50530)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1BD504A0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_STARTMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BD50860)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_STOPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BD525D0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0x1BD53160)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD53A20)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement_TypeDefinitionIndex = 49916;

	class FollowRoadMovement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _displayCurveSpeed; // 0x18
		::System::Single _displayDistance; // 0x1C
		::System::Single _displayTiltAngle; // 0x20
		::System::Single _displayTangentialAcceleration; // 0x24
		::System::Single _displayPitchAngle; // 0x28
		::System::Byte _padding0[0x4];
		::BansheeGz::BGSpline::Curve::BGCurve* _roadCurve; // 0x30
		::System::Boolean _orientToCurve; // 0x38
		::System::Byte _padding1[0x3];
		::RPGTools::RoadGenerator::FollowRoadMovement_EndBehavior _endBehavior; // 0x3C
		::System::Single _minSpeed; // 0x40
		::System::Single _maxSpeed; // 0x44
		::System::Single _initialSpeed; // 0x48
		::System::Single _uphillAcceleration; // 0x4C
		::System::Single _downhillAcceleration; // 0x50
		::System::Single _maxAccelerationAngle; // 0x54
		::System::Single _sideOffset; // 0x58
		::System::Single _normOffset; // 0x5C
		::System::Single _startRatio; // 0x60
		::System::Boolean _reverseDirection; // 0x64
		::System::Boolean _enableTurnTilt; // 0x65
		::System::Byte _padding2[0x2];
		::UnityEngine::Transform* _tiltTarget; // 0x68
		::System::Single _tiltAngleRatio; // 0x70
		::System::Single _maxTiltAngle; // 0x74
		::System::Single _tiltLerpHalfTime; // 0x78
		::System::Single _tiltPredictTime; // 0x7C
		::System::Single _tiltPredictMaxDistance; // 0x80
		::System::Boolean _invertTilt; // 0x84
		::System::Boolean _enablePitchTilt; // 0x85
		::System::Byte _padding3[0x2];
		::System::Single _pitchFullAcceleration; // 0x88
		::System::Single _maxPitchAngle; // 0x8C
		::System::Single _pitchLerpHalfTime; // 0x90
		::System::Boolean _invertPitch; // 0x94
		::System::Byte _padding4[0x3];
		::System::Single _verticalAccelerationSmoothTime; // 0x98
		::System::Byte _padding5[0x4];
		::UnityEngine::GameObject* _cameraPrefab; // 0xA0
		::UnityEngine::Transform* _aimTarget; // 0xA8
		::System::Int32 _activeCameraPriority; // 0xB0
		::System::Int32 _inactiveCameraPriority; // 0xB4
		::Cinemachine::CinemachineBlendDefinition_Style _mainCameraBlendType; // 0xB8
		::System::Single _mainCameraBlendTime; // 0xBC
		::System::Collections::Generic::List_1<::System::Object*>* _extraCameras; // 0xC0
		::System::Boolean _enableCameraSwitchPoints; // 0xC8
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector3 _openFollowOffset; // 0xCC
		::UnityEngine::Vector3 _closedFollowOffset; // 0xD8
		::System::Single _switchBlendDuration; // 0xE4
		::System::Single _openToCloseEarlyPercentage; // 0xE8
		::System::Single _closeToOpenDelayTime; // 0xEC
		::System::Boolean _enableSpeedPoints; // 0xF0
		::System::Byte _padding7[0x3];
		::System::Single _speedPointArriveEpsilon; // 0xF4
		::System::Boolean _enableEventPoints; // 0xF8
		::System::Boolean _logEventPointTrigger; // 0xF9
		::System::Byte _padding8[0x2];
		::UnityEngine::Vector3 _displayVelocity; // 0xFC
		::System::Single _displayActualSpeed; // 0x108
		::System::Boolean _debugDrawRotation; // 0x10C
		::System::Boolean _debugDrawActualSpeed; // 0x10D
		::System::Byte _padding9[0x2];
		::System::Single _debugDrawLength; // 0x110
		::System::Boolean _enableSpeedLineEffect; // 0x114
		::System::Byte _padding10[0x3];
		::System::Single _speedLineThreshold; // 0x118
		::System::Byte _padding11[0x4];
		::RPGTools::RoadGenerator::FollowRoadMovement_SpeedLineEffectParams* _speedLineParams; // 0x120
		::BansheeGz::BGSpline::Components::BGCcMath* DJFOGJILCGK; // 0x128
		::RPG::Client::TrackExtensionMonoPlugin* MDGKPPMEFGB; // 0x130
		::System::Single KGBADDFPBHM; // 0x138
		::System::Single DEOHDBMNOLE; // 0x13C
		::System::Boolean GPCAJJHABFL; // 0x140
		::System::Byte _padding12[0x3];
		::System::Single CECBHBJJDHD; // 0x144
		::System::Boolean PDLBMPEAPBP; // 0x148
		::System::Boolean AEKJJEIFDJM; // 0x149
		::System::Byte _padding13[0x2];
		::UnityEngine::Vector3 IJCADHBKKIA; // 0x14C
		::UnityEngine::Vector3 NLKKHKIIIDO; // 0x158
		::System::Single NABOFBICBON; // 0x164
		::System::Boolean DOHMBNMJKPE; // 0x168
		::System::Byte _padding14[0x3];
		::System::Single LABGEJAMOJJ; // 0x16C
		::System::Single CJGBAEIMBJC; // 0x170
		::System::Single KBNDPPOOPJB; // 0x174
		::System::Single AKBDNKGLCPB; // 0x178
		::System::Byte _padding15[0x4];
		::UnityEngine::GameObject* DODKANMNAKD; // 0x180
		::System::String* FPHBMFGHHNB; // 0x188
		::RPGTools::RoadGenerator::TrackSamplePointDetector* LKFKJBLKEEM; // 0x190
		::System::Single BECILLMCCFA; // 0x198
		::System::Byte _padding16[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* IFDCFDKCPDL; // 0x1A0
		::System::Collections::Generic::List_1<::System::Object*>* JNONIGFMABE; // 0x1A8
		::System::Int32 FFCJAOGLAFL; // 0x1B0
		::UnityEngine::Vector3 IIKGHEDPCCJ; // 0x1B4
		::UnityEngine::Vector3 FALPOEFLMKG; // 0x1C0
		::UnityEngine::Vector3 HCMJEKFMICG; // 0x1CC
		::System::Boolean NLJNBGBHJOJ; // 0x1D8
		::System::Boolean ABKJPOCCDOD; // 0x1D9
		::System::Byte _padding17[0x6];
		::RPG::GameCore::SpeedLineEffect* DAANMPPKKGN; // 0x1E0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OHKDAJGOACL; // 0x1E8
		::System::Boolean DBMHKAPGDHL; // 0x1F0
		::System::Byte _padding18[0x7];
		::System::Action* StopEndReached; // 0x1F8
		::System::Action_1<::System::Object*>* EventPointTriggered; // 0x200
		// static const ::System::String* MAIN_CAMERA_ALIAS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CTOR_OFFSET))(this);
		}

		::System::Void add_StopEndReached(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADD_STOPENDREACHED_OFFSET))(this, a1);
		}

		::System::Void remove_StopEndReached(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_REMOVE_STOPENDREACHED_OFFSET))(this, a1);
		}

		::System::Void add_EventPointTriggered(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADD_EVENTPOINTTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void remove_EventPointTriggered(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_REMOVE_EVENTPOINTTRIGGERED_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_OrientToCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ORIENTTOCURVE_OFFSET))(this);
		}

		::System::Void set_OrientToCurve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ORIENTTOCURVE_OFFSET))(this, a1);
		}

		::System::Single get_CurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CURRENTDISTANCE_OFFSET))(this);
		}

		::System::Single get_CurrentRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CURRENTRATIO_OFFSET))(this);
		}

		::System::Single get_TotalDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TOTALDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsRoadValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISROADVALID_OFFSET))(this);
		}

		::System::Boolean get_IsUsingTrackExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISUSINGTRACKEXTENSION_OFFSET))(this);
		}

		::System::Single get_VerticalAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VERTICALACCELERATION_OFFSET))(this);
		}

		::System::Single get_VerticalVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VERTICALVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Single get_ActualSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ACTUALSPEED_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Single get_TiltAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TILTANGLE_OFFSET))(this);
		}

		::System::Boolean get_EnableTurnTilt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ENABLETURNTILT_OFFSET))(this);
		}

		::System::Void set_EnableTurnTilt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ENABLETURNTILT_OFFSET))(this, a1);
		}

		::System::Single get_TangentialAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_TANGENTIALACCELERATION_OFFSET))(this);
		}

		::System::Single get_PitchAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_PITCHANGLE_OFFSET))(this);
		}

		::System::Boolean get_EnablePitchTilt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ENABLEPITCHTILT_OFFSET))(this);
		}

		::System::Void set_EnablePitchTilt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SET_ENABLEPITCHTILT_OFFSET))(this, a1);
		}

		::System::Void SetEndBehavior(::RPGTools::RoadGenerator::FollowRoadMovement_EndBehavior a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::RoadGenerator::FollowRoadMovement_EndBehavior))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETENDBEHAVIOR_OFFSET))(this, a1);
		}

		::System::Void StartMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_STARTMOVEMENT_OFFSET))(this);
		}

		::System::Void StopMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_STOPMOVEMENT_OFFSET))(this);
		}

		::System::Void ActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void JADDDINDBJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JADDDINDBJN_OFFSET))(this);
		}

		::System::Void ENLJKGKNNIK(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ENLJKGKNNIK_OFFSET))(this, a1);
		}

		::System::Void IJPJKGDFLMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IJPJKGDFLMO_OFFSET))(this);
		}

		::System::Void LNANHBKCNDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_LNANHBKCNDH_OFFSET))(this);
		}

		::System::Void IOFFHIAOLDH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IOFFHIAOLDH_OFFSET))(this, a1);
		}

		::System::Boolean SwitchCamera(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SWITCHCAMERA_OFFSET))(this, a1);
		}

		::RPGTools::RoadGenerator::FollowRoadMovement_ExtraCameraConfig* ODKAIENEJEM(::System::String* a1)
		{
			return ((::RPGTools::RoadGenerator::FollowRoadMovement_ExtraCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ODKAIENEJEM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* JCMKMFICHEC(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JCMKMFICHEC_OFFSET))(this, a1);
		}

		::System::Void MKDNLILCJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MKDNLILCJOJ_OFFSET))(this);
		}

		::System::Void IJAMPIHGOLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IJAMPIHGOLC_OFFSET))(this);
		}

		::System::Void MHPJGDFJDDK(::UnityEngine::GameObject* a1, ::System::Nullable_1<::System::Object*> a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Nullable_1<::System::Object*>, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MHPJGDFJDDK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AFABPOFAECP(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_AFABPOFAECP_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineBrain* BOBNJFKAJDC()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BOBNJFKAJDC_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_CameraInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_CAMERAINSTANCE_OFFSET))(this);
		}

		::System::String* get_ActiveCameraAlias()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_GET_ACTIVECAMERAALIAS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_UPDATE_OFFSET))(this);
		}

		::System::Void ADJGCCLBFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ADJGCCLBFLH_OFFSET))(this);
		}

		::System::Void MOMJMHMGFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MOMJMHMGFKI_OFFSET))(this);
		}

		::System::Void ACJJHFFIMOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ACJJHFFIMOF_OFFSET))(this);
		}

		::System::Void IGPCPNHMCHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IGPCPNHMCHN_OFFSET))(this, a1);
		}

		::System::Void ELPOMBFHJIC(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ELPOMBFHJIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDJBEHEJDIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NDJBEHEJDIP_OFFSET))(this, a1);
		}

		::System::Single FKPJBIBNFAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_FKPJBIBNFAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BJJHOFCDKFI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BJJHOFCDKFI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DILHAFPKGEK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DILHAFPKGEK_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 HDCCIPCDPOG(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HDCCIPCDPOG_OFFSET))(a1);
		}

		::System::Void HDPEBDGODGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HDPEBDGODGA_OFFSET))(this);
		}

		::System::Void SetRoad(::BansheeGz::BGSpline::Curve::BGCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETROAD_OFFSET))(this, a1);
		}

		::System::Void SetRoad_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETROAD_1_OFFSET))(this, a1);
		}

		::System::Void SetPositionByRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETPOSITIONBYRATIO_OFFSET))(this, a1);
		}

		::System::Void SetPositionByDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETPOSITIONBYDISTANCE_OFFSET))(this, a1);
		}

		::System::Void SetReverse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_SETREVERSE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Cinemachine::CinemachineTransposer*>* LLCODMBIAMM()
		{
			return ((::System::Collections::Generic::List_1<::Cinemachine::CinemachineTransposer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_LLCODMBIAMM_OFFSET))(this);
		}

		::System::Void CLAHMIJGMCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CLAHMIJGMCO_OFFSET))(this);
		}

		::System::Void HNBAGANJGFM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_HNBAGANJGFM_OFFSET))(this, a1, a2);
		}

		::System::Single EHKJJOJDLEK(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EHKJJOJDLEK_OFFSET))(this, a1, a2);
		}

		static ::System::Single NDNDAFFBJMC(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NDNDAFFBJMC_OFFSET))(a1, a2, a3);
		}

		::System::Void BENKDDCHCNP(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BENKDDCHCNP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JHGCHAILNKJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JHGCHAILNKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGEAAJPJHJM(::System::Int32 a1, ::RPGTools::RoadGenerator::TrackSamplePointDetector_CameraPointSample* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::RoadGenerator::TrackSamplePointDetector_CameraPointSample*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_NGEAAJPJHJM_OFFSET))(this, a1, a2);
		}

		::System::Void APAHEGJAEPH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_APAHEGJAEPH_OFFSET))(this, a1, a2);
		}

		::System::Void IMMPDALFDKJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_IMMPDALFDKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFLOBLJHJHN(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CFLOBLJHJHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDEKLDPPJFL(::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DDEKLDPPJFL_OFFSET))(this, a1);
		}

		::System::Void KBAJCCOGKCH(::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_EventPoint*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_KBAJCCOGKCH_OFFSET))(this, a1);
		}

		::System::Void JBMFPECBMIG(::Cinemachine::CinemachineTransposer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTransposer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_JBMFPECBMIG_OFFSET))(this, a1, a2);
		}

		::System::Void DLBOPJBAEGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_DLBOPJBAEGE_OFFSET))(this);
		}

		::System::Void PLOEBDELPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_PLOEBDELPDN_OFFSET))(this);
		}

		::System::Void AFGOKALHLAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_AFGOKALHLAA_OFFSET))(this);
		}

		::System::Void BCMHOAGKBIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_BCMHOAGKBIA_OFFSET))(this, a1);
		}

		::System::Void ENDEGDCMACK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_ENDEGDCMACK_OFFSET))(this);
		}

		::System::Void EOKKJABIGGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EOKKJABIGGC_OFFSET))(this);
		}

		::System::Boolean MKHKLKGPMGI(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_MKHKLKGPMGI_OFFSET))(this, a1);
		}

		::System::Void KCGJLAGKBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_KCGJLAGKBOG_OFFSET))(this);
		}

	};
}
