#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLNCDCHKEEP.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class KeyBasedBehaviorManager_1; }
namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define FNLJOAIDEPE_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x116C3200)
#define FNLJOAIDEPE_CEDLIDFAMPC_OFFSET UNITYSDK_OFFSET(0x116C2C10)
#define FNLJOAIDEPE_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x116C13A0)
#define FNLJOAIDEPE_CPBJGPDOJHK_OFFSET UNITYSDK_OFFSET(0x116C35E0)
#define FNLJOAIDEPE_DCAKNGIDIFL_OFFSET UNITYSDK_OFFSET(0x116C3450)
#define FNLJOAIDEPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116C1440)
#define FNLJOAIDEPE_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x116C1C10)
#define FNLJOAIDEPE_FPDLDFJIGPC_OFFSET UNITYSDK_OFFSET(0x116C24A0)
#define FNLJOAIDEPE_HCDNAKFALGN_OFFSET UNITYSDK_OFFSET(0x116C14F0)
#define FNLJOAIDEPE_HFMLPIBKLIN_OFFSET UNITYSDK_OFFSET(0x116C2B90)
#define FNLJOAIDEPE_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x116C2C70)
#define FNLJOAIDEPE_KDEHIHNAPAD_OFFSET UNITYSDK_OFFSET(0x116C28A0)
#define FNLJOAIDEPE_MJCBCLJHGCI_OFFSET UNITYSDK_OFFSET(0x116C2750)
#define FNLJOAIDEPE_MMHAOFJLBKG_OFFSET UNITYSDK_OFFSET(0x116C2EC0)
#define FNLJOAIDEPE_NAAABNMPBIJ_OFFSET UNITYSDK_OFFSET(0x116C1B80)
#define FNLJOAIDEPE_OBCFKJLDBAP_OFFSET UNITYSDK_OFFSET(0x116C30A0)
#define FNLJOAIDEPE_PMNJOEFKEHK_OFFSET UNITYSDK_OFFSET(0x116C1860)
#define FNLJOAIDEPE__CTOR_OFFSET UNITYSDK_OFFSET(0x116C10F0)

inline static constexpr unsigned int FNLJOAIDEPE_TypeDefinitionIndex = 69957;

class FNLJOAIDEPE : public ::System::Object
{
public:
	::FLNCDCHKEEP CEGKFLHNIMN; // 0x10
	::Foundation::KeyBasedBehaviorManager_1<::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig>* POHFFHELAAH; // 0x190
	::Foundation::ITimestamp* BJMBOABGKOK; // 0x198
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x1A0
	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig CEJENBBHBBG; // 0x1A8

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE__CTOR_OFFSET))(this, BKLGNCBNEGM, GEEHGDABNJF, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_DISPOSE_OFFSET))(this);
	}

	::System::Void HCDNAKFALGN(::System::String* AELLPLBJELA, ::System::Boolean GFHKIGIKKGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_HCDNAKFALGN_OFFSET))(this, AELLPLBJELA, GFHKIGIKKGL);
	}

	::PipelineCamera::WorldBasicCameraData PMNJOEFKEHK(::PipelineCamera::WorldBasicCameraData HLFFCMIFFIB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_PMNJOEFKEHK_OFFSET))(this, HLFFCMIFFIB);
	}

	::PipelineCamera::ScopedDelegateHandle NAAABNMPBIJ(::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_NAAABNMPBIJ_OFFSET))(this, BKLGNCBNEGM, GEEHGDABNJF, DFMKILICPFB);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* MJCBCLJHGCI()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_MJCBCLJHGCI_OFFSET))(this);
	}

	::System::Void KDEHIHNAPAD(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_KDEHIHNAPAD_OFFSET))(this, DFMKILICPFB);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_CFHBPGGKCFN_OFFSET))(this, BKLGNCBNEGM, GEEHGDABNJF, DFMKILICPFB);
	}

	::System::Boolean EBJMJDJFGFN(::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_EBJMJDJFGFN_OFFSET))(this, BKLGNCBNEGM, GEEHGDABNJF, DFMKILICPFB);
	}

	::System::Void HFMLPIBKLIN(::Foundation::FBehaviorHandle PHHDHIBOCKA, ::System::Boolean GFHKIGIKKGL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::FBehaviorHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_HFMLPIBKLIN_OFFSET))(this, PHHDHIBOCKA, GFHKIGIKKGL);
	}

	::PipelineCamera::WorldBasicCameraData CEDLIDFAMPC(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_CEDLIDFAMPC_OFFSET))(this, AAOCANGHBDG);
	}

	::PipelineCamera::ScopedDelegateHandle FPDLDFJIGPC()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_FPDLDFJIGPC_OFFSET))(this);
	}

	::System::Void MMHAOFJLBKG(::System::Boolean LLBFJBNKODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_MMHAOFJLBKG_OFFSET))(this, LLBFJBNKODH);
	}

	::System::Void OBCFKJLDBAP(::System::String* MCOHLHMKLIP, ::System::Boolean GFHKIGIKKGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_OBCFKJLDBAP_OFFSET))(this, MCOHLHMKLIP, GFHKIGIKKGL);
	}

	::Foundation::FBehaviorHandle ANPBCLAFCJB(::System::String* MCOHLHMKLIP, ::System::String* AELLPLBJELA, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig DFMKILICPFB, ::Foundation::FAddBehaviorParam ABEALKBGPJL, ::System::String*& DAJPJKMHMFN)
	{
		return ((::Foundation::FBehaviorHandle(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::Foundation::FAddBehaviorParam, ::System::String*&))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_ANPBCLAFCJB_OFFSET))(this, MCOHLHMKLIP, AELLPLBJELA, DFMKILICPFB, ABEALKBGPJL, DAJPJKMHMFN);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& EHDFDPBFINE)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, EHDFDPBFINE);
	}

	::System::Boolean DCAKNGIDIFL(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_DCAKNGIDIFL_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void CPBJGPDOJHK(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_CPBJGPDOJHK_OFFSET))(this, FKMJKPGNCJI);
	}
};
