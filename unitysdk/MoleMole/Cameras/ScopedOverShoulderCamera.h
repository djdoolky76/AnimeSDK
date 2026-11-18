#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDFOIIBBPN.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_AGMANPGHJMI_OFFSET UNITYSDK_OFFSET(0xFA8E6B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFA8D040)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BHPACPHOIEI_OFFSET UNITYSDK_OFFSET(0xFA8F4C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIHAHOPMLOK_OFFSET UNITYSDK_OFFSET(0xFA90A40)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIIPHEJKMGF_1_OFFSET UNITYSDK_OFFSET(0xFA8CDE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIIPHEJKMGF_OFFSET UNITYSDK_OFFSET(0xFA8CD20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CDGLGBHGDKJ_OFFSET UNITYSDK_OFFSET(0xFA8DAA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0xFA8F020)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFA8CA90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFMOAEGAFOI_1_OFFSET UNITYSDK_OFFSET(0xFA8DE00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFMOAEGAFOI_OFFSET UNITYSDK_OFFSET(0xFA8DD40)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CMJEFJBCGEM_OFFSET UNITYSDK_OFFSET(0xFA8CFD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xFA8E470)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DCGHCHJDGHL_1_OFFSET UNITYSDK_OFFSET(0xFA8DB90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DCGHCHJDGHL_OFFSET UNITYSDK_OFFSET(0xFA8CF10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DGFKLHFDDPA_OFFSET UNITYSDK_OFFSET(0xFA8D7D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA8CB80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DKCDMPBOLMJ_OFFSET UNITYSDK_OFFSET(0xFA8E030)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DMLDAMPEEOK_OFFSET UNITYSDK_OFFSET(0xFA8C8C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNJONIOAPEB_OFFSET UNITYSDK_OFFSET(0xFA8E560)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFA90280)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_ECPJGHMMCHM_OFFSET UNITYSDK_OFFSET(0xFA8D740)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GBGJGANGMKP_OFFSET UNITYSDK_OFFSET(0xFA8DE80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0xFA8E840)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GJBHJGINONO_OFFSET UNITYSDK_OFFSET(0xFA8E650)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GPOJJKMMALM_OFFSET UNITYSDK_OFFSET(0xFA90D50)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IANFKEENEMM_OFFSET UNITYSDK_OFFSET(0xFA90210)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IDMCPALFOBI_OFFSET UNITYSDK_OFFSET(0xFA8F400)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IPLPGKJGPJC_OFFSET UNITYSDK_OFFSET(0xFA8CE70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_JENPOKBKPPM_OFFSET UNITYSDK_OFFSET(0xFA8E700)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFA8D330)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KABCOEEHDED_OFFSET UNITYSDK_OFFSET(0xFA8E510)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KGMELLKGHED_OFFSET UNITYSDK_OFFSET(0xFA8E7C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KOOLECKPLID_1_OFFSET UNITYSDK_OFFSET(0xFA90C50)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KOOLECKPLID_OFFSET UNITYSDK_OFFSET(0xFA90BD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_LBIBFIIECKJ_OFFSET UNITYSDK_OFFSET(0xFA90EB0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_LOPAIJCMDFL_OFFSET UNITYSDK_OFFSET(0xFA8DC20)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MCAPOBKKBLG_OFFSET UNITYSDK_OFFSET(0xFA8DFE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NANIGDCDLCI_OFFSET UNITYSDK_OFFSET(0xFA8F450)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NBFODDEFGJA_OFFSET UNITYSDK_OFFSET(0xFA8E210)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NJENCPFFOLN_OFFSET UNITYSDK_OFFSET(0xFA90920)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_OMHJFMDGNEO_OFFSET UNITYSDK_OFFSET(0xFA8E760)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PDLKOHHOKEH_OFFSET UNITYSDK_OFFSET(0xFA90B30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PEOKGFJCHLP_OFFSET UNITYSDK_OFFSET(0xFA90D10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0xFA8EDC0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA8CD10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8C6B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_TypeDefinitionIndex = 51947;

	class ScopedOverShoulderCamera : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_CreateCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera_TypeDefinitionIndex)->GetStaticField(0x134F0);
		}
		// static const ::NBGELMBGLKD PIPELINE_CAMERA_PRIORITY = 0x1; // 0x0
		::System::UInt32 _createCountIndex; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* _events; // 0x18
		::System::Boolean _isCameraSetup; // 0x20
		::System::Boolean _blendInAimingEnabled; // 0x21
		::System::Byte _padding1[0x2];
		::System::Single _blendInTime; // 0x24
		::MoleMole::Cameras::OverShoulderCameraData _cameraData; // 0x28
		::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* _subModule; // 0x270
		::UnityEngine::Vector3 _lastVisualFocusPosition; // 0x278
		::System::Boolean _isInFocusTargetMode; // 0x284
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 _curFocusTargetPos; // 0x288
		::System::Single _focusTargetRotateDampSpeed; // 0x294
		::MoleMole::Cameras::OverShoulderCameraConfig* _config; // 0x298
		::GJDFOIIBBPN _context; // 0x2A0
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* _overrideConfig; // 0x3C8
		::System::Boolean _isMuteManualRotate; // 0x3D0

		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET))(this);
		}

		::System::Single BIIPHEJKMGF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIIPHEJKMGF_OFFSET))(this);
		}

		::System::Boolean IPLPGKJGPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IPLPGKJGPJC_OFFSET))(this);
		}

		::System::String* CMJEFJBCGEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CMJEFJBCGEM_OFFSET))(this);
		}

		::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::System::Single ECPJGHMMCHM(::System::Single ELHMOANKHFM)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_ECPJGHMMCHM_OFFSET))(this, ELHMOANKHFM);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> DGFKLHFDDPA(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DGFKLHFDDPA_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::System::Void CDGLGBHGDKJ(::System::Boolean GCDKMFLGLIJ, ::System::Single IBCAFNKFIDH, ::System::Boolean IIFLMEBNLDG, ::System::Single FLKMOKLIPKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CDGLGBHGDKJ_OFFSET))(this, GCDKMFLGLIJ, IBCAFNKFIDH, IIFLMEBNLDG, FLKMOKLIPKN);
		}

		::System::Single DCGHCHJDGHL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DCGHCHJDGHL_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* LOPAIJCMDFL(::MoleMole::Cameras::OverShoulderCameraConfig* EJJNGFCGNAK, ::GJDFOIIBBPN& PLDOCICBAHO)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_LOPAIJCMDFL_OFFSET))(this, EJJNGFCGNAK, PLDOCICBAHO);
		}

		::System::String* CFMOAEGAFOI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFMOAEGAFOI_OFFSET))(this);
		}

		::UnityEngine::Vector2 GBGJGANGMKP(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GBGJGANGMKP_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::System::Void DMLDAMPEEOK(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DMLDAMPEEOK_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::MoleMole::Cameras::OverShoulderCameraConfig* MCAPOBKKBLG()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MCAPOBKKBLG_OFFSET))(this);
		}

		::System::Single DKCDMPBOLMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DKCDMPBOLMJ_OFFSET))(this);
		}

		static ::MoleMole::Cameras::ScopedOverShoulderCamera* COKNIICCODC(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO)
		{
			return ((::MoleMole::Cameras::ScopedOverShoulderCamera*(*)(::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_COKNIICCODC_OFFSET))(DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::System::Void KABCOEEHDED(::System::Boolean NGJMKJNOGJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KABCOEEHDED_OFFSET))(this, NGJMKJNOGJN);
		}

		::UnityEngine::Vector3 DNJONIOAPEB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNJONIOAPEB_OFFSET))(this);
		}

		::System::Boolean GJBHJGINONO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GJBHJGINONO_OFFSET))(this);
		}

		::System::Single AGMANPGHJMI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_AGMANPGHJMI_OFFSET))(this);
		}

		::System::Boolean JENPOKBKPPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_JENPOKBKPPM_OFFSET))(this);
		}

		::System::Void OMHJFMDGNEO(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_OMHJFMDGNEO_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> KGMELLKGHED(::UnityEngine::Vector3 HODAIDNDKHD)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KGMELLKGHED_OFFSET))(this, HODAIDNDKHD);
		}

		::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
		}

		::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void JLFNAHONPGB(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_JLFNAHONPGB_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO, INBNCFGMKCL, MJJIOHKLAKK);
		}

		::System::Boolean IDMCPALFOBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IDMCPALFOBI_OFFSET))(this);
		}

		::System::Void NANIGDCDLCI(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NANIGDCDLCI_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void BHPACPHOIEI(::System::Boolean DCDDHCKNDNF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BHPACPHOIEI_OFFSET))(this, DCDDHCKNDNF);
		}

		::System::Void IANFKEENEMM(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_IANFKEENEMM_OFFSET))(this, BFBELMDIAHI);
		}

		::System::Single DCGHCHJDGHL_1(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO, ::MoleMole::Cameras::CameraTrackBlending* LCGIBGFDOFO)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DCGHCHJDGHL_1_OFFSET))(this, DFMKILICPFB, EKPAIOGJEPO, LCGIBGFDOFO);
		}

		::System::Void EBJMJDJFGFN(::MoleMole::Cameras::OverShoulderCameraConfig*& DFMKILICPFB, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& EKPAIOGJEPO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*&, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_EBJMJDJFGFN_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::System::Void NJENCPFFOLN(::System::Boolean LNGOJNPBNJL, ::UnityEngine::Vector3 MGLDGBPKBDK, ::System::Single CPMEKIKJEFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NJENCPFFOLN_OFFSET))(this, LNGOJNPBNJL, MGLDGBPKBDK, CPMEKIKJEFD);
		}

		::UnityEngine::Vector3 BIHAHOPMLOK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIHAHOPMLOK_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF(::MoleMole::Cameras::OverShoulderCameraConfig* EJJNGFCGNAK, ::GJDFOIIBBPN& PLDOCICBAHO)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::GJDFOIIBBPN&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CDIFHCKCOAF_OFFSET))(this, EJJNGFCGNAK, PLDOCICBAHO);
		}

		::System::Void PDLKOHHOKEH(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PDLKOHHOKEH_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::String* CFMOAEGAFOI_1(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO, ::MoleMole::Cameras::CameraTrackBlending* LCGIBGFDOFO)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CFMOAEGAFOI_1_OFFSET))(this, DFMKILICPFB, EKPAIOGJEPO, LCGIBGFDOFO);
		}

		::System::Single BIIPHEJKMGF_1(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO, ::MoleMole::Cameras::CameraTrackBlending* LCGIBGFDOFO)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_BIIPHEJKMGF_1_OFFSET))(this, DFMKILICPFB, EKPAIOGJEPO, LCGIBGFDOFO);
		}

		::System::String* KOOLECKPLID(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO, ::MoleMole::Cameras::CameraTrackBlending* LCGIBGFDOFO)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KOOLECKPLID_OFFSET))(this, DFMKILICPFB, EKPAIOGJEPO, LCGIBGFDOFO);
		}

		::System::String* KOOLECKPLID_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_KOOLECKPLID_1_OFFSET))(this);
		}

		::System::Single NBFODDEFGJA(::System::Single ELHMOANKHFM, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_NBFODDEFGJA_OFFSET))(this, ELHMOANKHFM, GDBANLBHNJK, DNFNKBNBJHM);
		}

		::System::Boolean PEOKGFJCHLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_PEOKGFJCHLP_OFFSET))(this);
		}

		::System::Boolean GPOJJKMMALM(::UnityEngine::Quaternion& GJNLCLDFFIN)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_GPOJJKMMALM_OFFSET))(this, GJNLCLDFFIN);
		}

		::System::Boolean LBIBFIIECKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_LBIBFIIECKJ_OFFSET))(this);
		}
	};
}
