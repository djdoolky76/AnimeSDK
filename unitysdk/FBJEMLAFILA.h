#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBJEMLAFILA_BGLAABAJANE.h"
#include "unitysdk/JOFANLNIMPC.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define FBJEMLAFILA_AHGIPGACPNE_OFFSET UNITYSDK_OFFSET(0x11CEE130)
#define FBJEMLAFILA_AIMGPFAOOCG_OFFSET UNITYSDK_OFFSET(0x11CEDD60)
#define FBJEMLAFILA_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x11CEEFE0)
#define FBJEMLAFILA_BAHCBJPHDJE_OFFSET UNITYSDK_OFFSET(0x11CEEF30)
#define FBJEMLAFILA_BDNCOGBCPEF_OFFSET UNITYSDK_OFFSET(0x11CEEED0)
#define FBJEMLAFILA_BHOKCMFEHNO_OFFSET UNITYSDK_OFFSET(0x11CEEB90)
#define FBJEMLAFILA_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0x11CED340)
#define FBJEMLAFILA_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x11CED190)
#define FBJEMLAFILA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x11CEE750)
#define FBJEMLAFILA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CED290)
#define FBJEMLAFILA_EAJENPJHJNN_OFFSET UNITYSDK_OFFSET(0x11CEDC60)
#define FBJEMLAFILA_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x11CEEC80)
#define FBJEMLAFILA_EPDDPFGCCIE_OFFSET UNITYSDK_OFFSET(0x11CEF690)
#define FBJEMLAFILA_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x11CEE6F0)
#define FBJEMLAFILA_FPCKCMMFGDO_OFFSET UNITYSDK_OFFSET(0x11CEDE80)
#define FBJEMLAFILA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x11CEDEE0)
#define FBJEMLAFILA_GLGFEJADFEJ_OFFSET UNITYSDK_OFFSET(0x11CED850)
#define FBJEMLAFILA_HHIDJDAACGB_OFFSET UNITYSDK_OFFSET(0x11CEE490)
#define FBJEMLAFILA_IJFPLJPJCAL_OFFSET UNITYSDK_OFFSET(0x11CEDB60)
#define FBJEMLAFILA_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x11CED790)
#define FBJEMLAFILA_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x11CEF290)
#define FBJEMLAFILA_KAGPBNPHNOB_OFFSET UNITYSDK_OFFSET(0x11CEDDF0)
#define FBJEMLAFILA_KGPGCNGEOAH_OFFSET UNITYSDK_OFFSET(0x11CEEBD0)
#define FBJEMLAFILA_LNMINKKDCDK_OFFSET UNITYSDK_OFFSET(0x11CEE390)
#define FBJEMLAFILA_LOPAIJCMDFL_OFFSET UNITYSDK_OFFSET(0x11CEE230)
#define FBJEMLAFILA_MIHGPEJAANO_OFFSET UNITYSDK_OFFSET(0x11CEF750)
#define FBJEMLAFILA_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x11CEFD30)
#define FBJEMLAFILA_NEGLDGOIPJH_OFFSET UNITYSDK_OFFSET(0x11CEE580)
#define FBJEMLAFILA_NLHLELABAFE_OFFSET UNITYSDK_OFFSET(0x11CEE4F0)
#define FBJEMLAFILA_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0x11CED6B0)
#define FBJEMLAFILA_POMONPHIEEP_OFFSET UNITYSDK_OFFSET(0x11CEFE60)
#define FBJEMLAFILA_PPBKLLEGHBH_OFFSET UNITYSDK_OFFSET(0x11CEF810)
#define FBJEMLAFILA__CTOR_OFFSET UNITYSDK_OFFSET(0x11CECF00)

inline static constexpr unsigned int FBJEMLAFILA_TypeDefinitionIndex = 65179;

class FBJEMLAFILA : public ::System::Object
{
public:
	::JOFANLNIMPC JDEIDICJNOK; // 0x10
	::System::Func_3<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Boolean>* AHIIBBHKHJE; // 0x148
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x150
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x158
	::MoleMole::Cameras::CameraTrackBlending* DDDNAEGLKEL; // 0x160
	::MoleMole::Cameras::CameraTrackBlending* EFMBPCODIGD; // 0x168
	::System::Collections::Generic::List_1<::System::Object*>* KENMOHMPCKL; // 0x170
	::System::Boolean FGIEGEAHHFL; // 0x178
	::System::Boolean LPAHKDLPPPI; // 0x179

	::System::Void _ctor(::MoleMole::Cameras::PhotoCameraConfig*& DFMKILICPFB, ::System::UInt32 BKLGNCBNEGM, ::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*&, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FBJEMLAFILA__CTOR_OFFSET))(this, DFMKILICPFB, BKLGNCBNEGM, GPBKDGGEBCF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_CDIFHCKCOAF_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Boolean JCJDLICAODK, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FBJEMLAFILA_PIIMLEFFPOC_OFFSET))(JCJDLICAODK, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::System::Boolean JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GLGFEJADFEJ()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_GLGFEJADFEJ_OFFSET))(this);
	}

	::System::Boolean IJFPLJPJCAL(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_IJFPLJPJCAL_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Boolean EAJENPJHJNN(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_EAJENPJHJNN_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Boolean AIMGPFAOOCG(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_AIMGPFAOOCG_OFFSET))(this, HBEKKMCBGBK);
	}

	::PipelineCamera::ICameraDataBlender* KAGPBNPHNOB(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + FBJEMLAFILA_KAGPBNPHNOB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Single FPCKCMMFGDO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_FPCKCMMFGDO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::PhotoCameraConfig* DFMKILICPFB, ::System::UInt32 BKLGNCBNEGM, ::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FBJEMLAFILA_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, BKLGNCBNEGM, GPBKDGGEBCF);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::WorldBasicCameraData JAEOFPHONBM, ::PipelineCamera::WorldBasicCameraData MHOGDJBBNAD)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FBJEMLAFILA_GIAOBHOJCDP_OFFSET))(this, JAEOFPHONBM, MHOGDJBBNAD);
	}

	::System::Boolean AHGIPGACPNE(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_AHGIPGACPNE_OFFSET))(this, HBEKKMCBGBK);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* LOPAIJCMDFL()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_LOPAIJCMDFL_OFFSET))(this);
	}

	::System::Boolean LNMINKKDCDK(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_LNMINKKDCDK_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Single HHIDJDAACGB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_HHIDJDAACGB_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* NLHLELABAFE(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + FBJEMLAFILA_NLHLELABAFE_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* NEGLDGOIPJH()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_NEGLDGOIPJH_OFFSET))(this);
	}

	::System::Boolean FFCIOICFNFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_FFCIOICFNFN_OFFSET))(this);
	}

	static ::FBJEMLAFILA* COKNIICCODC(::MoleMole::Cameras::PhotoCameraConfig*& DFMKILICPFB, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> AKFNDHIFJOI, ::System::Nullable_1<::System::UInt32> BKLGNCBNEGM)
	{
		return ((::FBJEMLAFILA*(*)(::MoleMole::Cameras::PhotoCameraConfig*&, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FBJEMLAFILA_COKNIICCODC_OFFSET))(DFMKILICPFB, AKFNDHIFJOI, BKLGNCBNEGM);
	}

	::PipelineCamera::WorldBasicCameraData BHOKCMFEHNO()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_BHOKCMFEHNO_OFFSET))(this);
	}

	::System::Void KGPGCNGEOAH(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FBJEMLAFILA_KGPGCNGEOAH_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void EBJMJDJFGFN(::MoleMole::Cameras::PhotoCameraConfig*& DFMKILICPFB, ::System::UInt32 BKLGNCBNEGM, ::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*&, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FBJEMLAFILA_EBJMJDJFGFN_OFFSET))(this, DFMKILICPFB, BKLGNCBNEGM, GPBKDGGEBCF);
	}

	::UnityEngine::Vector2 BDNCOGBCPEF()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_BDNCOGBCPEF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BAHCBJPHDJE(::FBJEMLAFILA_BGLAABAJANE KAMJLKGLFDB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::FBJEMLAFILA_BGLAABAJANE))((::PBYTE)hIl2Cpp + FBJEMLAFILA_BAHCBJPHDJE_OFFSET))(this, KAMJLKGLFDB);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_ANJAOOMDFLA_OFFSET))(this);
	}

	::System::Boolean EPDDPFGCCIE(::System::Single DKJACOOKAFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_EPDDPFGCCIE_OFFSET))(this, DKJACOOKAFE);
	}

	::System::Boolean MIHGPEJAANO(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_MIHGPEJAANO_OFFSET))(this, HBEKKMCBGBK);
	}

	static ::System::Boolean PPBKLLEGHBH(::System::Single& MFHFDMCMMON, ::System::Int32& GJLLGMKGIEL, ::System::String*& KHGFAKJKDGG)
	{
		return ((::System::Boolean(*)(::System::Single&, ::System::Int32&, ::System::String*&))((::PBYTE)hIl2Cpp + FBJEMLAFILA_PPBKLLEGHBH_OFFSET))(MFHFDMCMMON, GJLLGMKGIEL, KHGFAKJKDGG);
	}

	::System::Boolean MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBJEMLAFILA_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	::System::Single POMONPHIEEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_POMONPHIEEP_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + FBJEMLAFILA_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}
};
