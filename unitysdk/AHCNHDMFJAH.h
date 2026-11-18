#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/NKPLAFMCLNA.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }

#define AHCNHDMFJAH_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x181F36F0)
#define AHCNHDMFJAH_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x181F2FE0)
#define AHCNHDMFJAH_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x181F2E70)
#define AHCNHDMFJAH_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x181F39B0)
#define AHCNHDMFJAH_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x181F32D0)
#define AHCNHDMFJAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F2F20)
#define AHCNHDMFJAH__CTOR_OFFSET UNITYSDK_OFFSET(0x181F2CE0)

inline static constexpr unsigned int AHCNHDMFJAH_TypeDefinitionIndex = 78387;

class AHCNHDMFJAH : public ::System::Object
{
public:
	static ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting** StaticGet_KGNPDONJNLA()
	{
		return (::PipelineCamera::CameraSequence::CameraSequenceBlendSetting**)Il2CppClass::FromTypeDefinitionIndex(AHCNHDMFJAH_TypeDefinitionIndex)->GetStaticField(0x511B0);
	}
	static ::Foundation::Unreal::FName* StaticGet_CEPPNNBCFEO()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AHCNHDMFJAH_TypeDefinitionIndex)->GetStaticField(0x132C0);
	}
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* FHEKJCDOKBG; // 0x18

	::System::Void _ctor(::NKPLAFMCLNA& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::NKPLAFMCLNA&))((::PBYTE)hIl2Cpp + AHCNHDMFJAH__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHCNHDMFJAH__CCTOR_OFFSET))();
	}

	::System::Void BJANDJKKNCD(::System::Boolean GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_BJANDJKKNCD_OFFSET))(this, GDNECMBHKND);
	}

	::System::Void JLFNAHONPGB(::NKPLAFMCLNA& DFMKILICPFB, ::PipelineCamera::CameraCommandSpawnSubModules*& ABCLGPHOMMP, ::PipelineCamera::CameraCommandUnSpawnSubModules*& HMIFGOCFOFM)
	{
		return ((::System::Void(*)(::PVOID, ::NKPLAFMCLNA&, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_JLFNAHONPGB_OFFSET))(this, DFMKILICPFB, ABCLGPHOMMP, HMIFGOCFOFM);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::NKPLAFMCLNA& DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::NKPLAFMCLNA&))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::NKPLAFMCLNA DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NKPLAFMCLNA))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Boolean EBJMJDJFGFN(::NKPLAFMCLNA DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::NKPLAFMCLNA))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_EBJMJDJFGFN_OFFSET))(DFMKILICPFB);
	}
};
