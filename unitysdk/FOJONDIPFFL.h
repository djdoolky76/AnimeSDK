#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/LevelPerform/LevelPerformConfig_InLevelCameraSequenceConfig.h"
#include "unitysdk/MoleMole/InLevelCustomCameraSequenceType.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class FOJONDIPFFL_PIFKHDBEMGK;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOJONDIPFFL_JIMINOCDIID_OFFSET UNITYSDK_OFFSET(0x10ED5CE0)
#define FOJONDIPFFL_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x10ED5140)
#define FOJONDIPFFL_KBMFBFKMMNI_OFFSET UNITYSDK_OFFSET(0x10ED5420)
#define FOJONDIPFFL_KMGEDEGAJNB_OFFSET UNITYSDK_OFFSET(0x10ED5490)
#define FOJONDIPFFL_NAAABNMPBIJ_OFFSET UNITYSDK_OFFSET(0x10ED5930)
#define FOJONDIPFFL_PCHEFAJFGGN_OFFSET UNITYSDK_OFFSET(0x10ED58A0)
#define FOJONDIPFFL_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x10ED5D70)
#define FOJONDIPFFL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x10ED54E0)
#define FOJONDIPFFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x10ED5690)
#define FOJONDIPFFL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10ED4F90)
#define FOJONDIPFFL__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED4F20)

inline static constexpr unsigned int FOJONDIPFFL_TypeDefinitionIndex = 55434;

class FOJONDIPFFL : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelCustomCameraSequenceType, ::System::Func_2<::FOJONDIPFFL*, ::System::Object*>*>** StaticGet_KJGCJKPBFDI()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelCustomCameraSequenceType, ::System::Func_2<::FOJONDIPFFL*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(FOJONDIPFFL_TypeDefinitionIndex)->GetStaticField(0x4B950);
	}
	::MoleMole::LevelPerform::LevelPerformConfig_InLevelCameraSequenceConfig IKNFGMIKOHG; // 0x10
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* NDDNONCGABO; // 0x28
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x30
	::MoleMole::InLevelCustomPerformerRunnerEnvironment IMALBLEDPGP; // 0x38
	::FOJONDIPFFL_PIFKHDBEMGK* DJAKCOJOCLK; // 0x40
	::System::Collections::Generic::List_1<::System::Object*>* FBHPAHEKHEC; // 0x48
	::System::Boolean JHCOOMJIEON; // 0x50
	::System::Byte _padding0[0x3];
	::Foundation::Unreal::FName BKGFGJLEMDP; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* NNEGLBMECKE, ::System::String* INHDAAAMAAL, ::MoleMole::InLevelCustomPerformerRunnerEnvironment IFHGMCMPEEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::InLevelCustomPerformerRunnerEnvironment))((::PBYTE)hIl2Cpp + FOJONDIPFFL__CTOR_1_OFFSET))(this, NNEGLBMECKE, INHDAAAMAAL, IFHGMCMPEEA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJONDIPFFL__CCTOR_OFFSET))();
	}

	::System::Void JMDEKPONKMF(::System::String* KINBDJNLLLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_JMDEKPONKMF_OFFSET))(this, KINBDJNLLLK);
	}

	::System::Void KMGEDEGAJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_KMGEDEGAJNB_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PLPONJAKNEB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid KBMFBFKMMNI()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_KBMFBFKMMNI_OFFSET))(this);
	}

	::System::Void PCHEFAJFGGN(::System::String* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PCHEFAJFGGN_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Boolean NAAABNMPBIJ(::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& EHDFDPBFINE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::NapVirtualPipelineCamera*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + FOJONDIPFFL_NAAABNMPBIJ_OFFSET))(this, NNBIPFKGNMG, INBNCFGMKCL, EHDFDPBFINE);
	}

	::System::Void JIMINOCDIID(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* KJNOAHJNMFD)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_JIMINOCDIID_OFFSET))(this, KJNOAHJNMFD);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PGHAJOMNDDJ_OFFSET))(this);
	}
};
