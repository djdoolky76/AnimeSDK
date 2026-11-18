#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverlookCameraMode_JKJBPHJLCGN.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverlookCameraMode_GPLCDLEGLPG.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKCCJKFGKJG;
namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_AENJJMLMPGM_OFFSET UNITYSDK_OFFSET(0xFA93350)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_AHCDDGDCBEA_OFFSET UNITYSDK_OFFSET(0xFA96E30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ANBMOLJGOCN_OFFSET UNITYSDK_OFFSET(0xFA93760)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFA93B70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_BFNKCLFNHLE_OFFSET UNITYSDK_OFFSET(0xFA96530)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFA92050)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DFFBGMLDFOJ_OFFSET UNITYSDK_OFFSET(0xFA95B10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DIDBPABJPMF_OFFSET UNITYSDK_OFFSET(0xFA97330)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA920D0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFA92690)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ECIMKJEAPNI_OFFSET UNITYSDK_OFFSET(0xFA942C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_EGKKAEKNPCJ_OFFSET UNITYSDK_OFFSET(0xFA97CF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FFDBJPEBMDF_OFFSET UNITYSDK_OFFSET(0xFA92AF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xFA91BE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0xFA95210)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JBCKOINENMJ_OFFSET UNITYSDK_OFFSET(0xFA94650)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JEHEPCKOJFO_OFFSET UNITYSDK_OFFSET(0xFA92EB0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFA93FB0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JLPHCPJBDGG_OFFSET UNITYSDK_OFFSET(0xFA94AF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JPCFMNEJBDG_OFFSET UNITYSDK_OFFSET(0xFA93310)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_LFLPKHCNNCB_OFFSET UNITYSDK_OFFSET(0xFA97B10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_MGKJNNGDCOO_OFFSET UNITYSDK_OFFSET(0xFA96A50)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_MPPEKPDIDFO_OFFSET UNITYSDK_OFFSET(0xFA97BE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OCANJFPDHAA_OFFSET UNITYSDK_OFFSET(0xFA96D80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OKFFKNLOOIL_OFFSET UNITYSDK_OFFSET(0xFA94FD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xFA95ED0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OLOAJBDNMHF_OFFSET UNITYSDK_OFFSET(0xFA96970)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OMHOEKPJDLG_OFFSET UNITYSDK_OFFSET(0xFA966E0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA91EB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_TypeDefinitionIndex = 65480;

	class ScopedOverlookCameraMode : public ::System::Object
	{
	public:
		::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* _events; // 0x10
		::System::Boolean _isCameraSetup; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _frameCount; // 0x1C
		::MoleMole::Cameras::OverlookCameraConfig* _config; // 0x20
		::System::Single _enterYaw; // 0x28
		::System::Byte _padding1[0x4];
		::PipelineCamera::ICameraDataBlenderBuilder* _blenderBuilder; // 0x30
		::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* _subModule; // 0x38
		::DKCCJKFGKJG* _mainTarget; // 0x40
		::System::Collections::Generic::List_1<::DKCCJKFGKJG*>* _additionalTarget; // 0x48
		::System::Predicate_1<::DKCCJKFGKJG*>* _invalidTarget; // 0x50
		::Nap::NapECS::EcsWorld* _entityWorld; // 0x58
		::PipelineCamera::WorldBasicCameraData _result; // 0x60

		::System::Void _ctor(::MoleMole::Cameras::OverlookCameraConfig*& DFMKILICPFB, ::DKCCJKFGKJG* NHBEBFLAMBK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&, ::DKCCJKFGKJG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE__CTOR_OFFSET))(this, DFMKILICPFB, NHBEBFLAMBK);
		}

		::MoleMole::Cameras::ScopedOverlookCameraMode_JKJBPHJLCGN get_Target()
		{
			return ((::MoleMole::Cameras::ScopedOverlookCameraMode_JKJBPHJLCGN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GET_TARGET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DISPOSE_OFFSET))(this);
		}

		::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::MoleMole::Cameras::OverlookCameraConfig*& DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, DFMKILICPFB);
		}

		::PipelineCamera::WorldBasicCameraData FFDBJPEBMDF()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FFDBJPEBMDF_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData JEHEPCKOJFO(::PipelineCamera::WorldBasicCameraData PJBDLMBIIBH, ::UnityEngine::BoundingSphere HODAIDNDKHD)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JEHEPCKOJFO_OFFSET))(this, PJBDLMBIIBH, HODAIDNDKHD);
		}

		::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::OverlookCameraConfig*& DFMKILICPFB)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::OverlookCameraConfig* DFMKILICPFB)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
		}

		::PipelineCamera::WorldBasicCameraData ECIMKJEAPNI(::PipelineCamera::WorldBasicCameraData PJBDLMBIIBH, ::UnityEngine::BoundingSphere HODAIDNDKHD)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ECIMKJEAPNI_OFFSET))(this, PJBDLMBIIBH, HODAIDNDKHD);
		}

		::PipelineCamera::WorldBasicCameraData JBCKOINENMJ()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JBCKOINENMJ_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
		}

		::System::Void BFNKCLFNHLE(::DKCCJKFGKJG* DENJNGAAIME)
		{
			return ((::System::Void(*)(::PVOID, ::DKCCJKFGKJG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_BFNKCLFNHLE_OFFSET))(this, DENJNGAAIME);
		}

		::PipelineCamera::WorldBasicCameraData OKFFKNLOOIL(::PipelineCamera::WorldBasicCameraData PJBDLMBIIBH, ::UnityEngine::BoundingSphere HODAIDNDKHD)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OKFFKNLOOIL_OFFSET))(this, PJBDLMBIIBH, HODAIDNDKHD);
		}

		::System::Boolean OLOAJBDNMHF(::DKCCJKFGKJG* IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKCCJKFGKJG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OLOAJBDNMHF_OFFSET))(this, IPMMCGDMODG);
		}

		::PipelineCamera::WorldBasicCameraData OKJCHFGIKBH(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OKJCHFGIKBH_OFFSET))(this, GPBKDGGEBCF);
		}

		::System::Void JLFNAHONPGB(::MoleMole::Cameras::OverlookCameraConfig* EJJNGFCGNAK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverlookCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, INBNCFGMKCL, MJJIOHKLAKK);
		}

		::UnityEngine::BoundingSphere JLPHCPJBDGG()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JLPHCPJBDGG_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData OCANJFPDHAA()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OCANJFPDHAA_OFFSET))(this);
		}

		::UnityEngine::Vector3 MGKJNNGDCOO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_MGKJNNGDCOO_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData AHCDDGDCBEA()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_AHCDDGDCBEA_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData DFFBGMLDFOJ(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DFFBGMLDFOJ_OFFSET))(this, GPBKDGGEBCF);
		}

		::System::Void DIDBPABJPMF(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_DIDBPABJPMF_OFFSET))(this, IIHGNBNLLNG);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> AENJJMLMPGM(::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG& param_0)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_AENJJMLMPGM_OFFSET))(this, param_0);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> ANBMOLJGOCN(::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG& param_0)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_ANBMOLJGOCN_OFFSET))(this, param_0);
		}

		::System::Void MPPEKPDIDFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_MPPEKPDIDFO_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData OMHOEKPJDLG(::PipelineCamera::WorldBasicCameraData PJBDLMBIIBH, ::UnityEngine::BoundingSphere HODAIDNDKHD)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_OMHOEKPJDLG_OFFSET))(this, PJBDLMBIIBH, HODAIDNDKHD);
		}

		::System::Single LFLPKHCNNCB(::System::Single MHHHEIHIICP, ::System::Single KFCLKOAHMKC, ::System::Single EJAOAGGJHHA, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG& param_3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_LFLPKHCNNCB_OFFSET))(this, MHHHEIHIICP, KFCLKOAHMKC, EJAOAGGJHHA, param_3);
		}

		::System::Void EGKKAEKNPCJ(::DKCCJKFGKJG* DENJNGAAIME)
		{
			return ((::System::Void(*)(::PVOID, ::DKCCJKFGKJG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_EGKKAEKNPCJ_OFFSET))(this, DENJNGAAIME);
		}

		::System::Single JPCFMNEJBDG(::System::Single NELAJOPANDI, ::System::Single ICJCLINBNID, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG& param_2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Cameras::ScopedOverlookCameraMode_GPLCDLEGLPG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_JPCFMNEJBDG_OFFSET))(this, NELAJOPANDI, ICJCLINBNID, param_2);
		}
	};
}
