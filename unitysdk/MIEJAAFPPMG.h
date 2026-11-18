#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/HLGHOFNBMLE.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/CameraPipeline_3.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace PipelineCamera::Module { class WorldBasicCameraDataModifier; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIEJAAFPPMG_DACDEJFKOGJ_OFFSET UNITYSDK_OFFSET(0x11A04140)
#define MIEJAAFPPMG_INITMODULE1_OFFSET UNITYSDK_OFFSET(0x11A02E70)
#define MIEJAAFPPMG_INITMODULE2_OFFSET UNITYSDK_OFFSET(0x11A03000)
#define MIEJAAFPPMG_INITMODULE3_OFFSET UNITYSDK_OFFSET(0x11A03D90)
#define MIEJAAFPPMG_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0x11A03F20)
#define MIEJAAFPPMG_NAKHOLDFGFF_OFFSET UNITYSDK_OFFSET(0x11A040B0)
#define MIEJAAFPPMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A04000)
#define MIEJAAFPPMG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A03FF0)

inline static constexpr unsigned int MIEJAAFPPMG_TypeDefinitionIndex = 67322;

class MIEJAAFPPMG : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_KANNJPJIPDM()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MIEJAAFPPMG_TypeDefinitionIndex)->GetStaticField(0xC0B0);
	}
	static ::Foundation::Unreal::FName* StaticGet_GCHOPAPJDDC()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MIEJAAFPPMG_TypeDefinitionIndex)->GetStaticField(0xC0B8);
	}
	static ::Foundation::Unreal::FName* StaticGet_ECAEOHADHPF()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MIEJAAFPPMG_TypeDefinitionIndex)->GetStaticField(0xC0C0);
	}
	::System::Action_2<::HLGHOFNBMLE, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* CFGOGIDGJDN; // 0x10
	::System::Action_1<::PipelineCamera::Module::InPlaceBlender*>* FIPFCPJEOIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJAAFPPMG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEJAAFPPMG__CCTOR_OFFSET))();
	}

	::System::Void InitModule1(::PipelineCamera::Module::InPlaceBlender*& LOFAJNPDGAD, ::System::Int32 ALCGLAKECIG, ::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_INITMODULE1_OFFSET))(this, LOFAJNPDGAD, ALCGLAKECIG, AAOCANGHBDG);
	}

	::System::Void InitModule2(::PipelineCamera::Module::WorldBasicCameraDataModifier*& LOFAJNPDGAD, ::System::Int32 ALCGLAKECIG, ::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::WorldBasicCameraDataModifier*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_INITMODULE2_OFFSET))(this, LOFAJNPDGAD, ALCGLAKECIG, AAOCANGHBDG);
	}

	::System::Void InitModule3(::PipelineCamera::Module::InPlaceBlender*& LOFAJNPDGAD, ::System::Int32 ALCGLAKECIG, ::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_INITMODULE3_OFFSET))(this, LOFAJNPDGAD, ALCGLAKECIG, AAOCANGHBDG);
	}

	::System::Void InitPipeline(::PipelineCamera::CameraPipeline_3<::PipelineCamera::Module::InPlaceBlender*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::InPlaceBlender*>& BGAELNNEPIJ, ::System::Int32 ALCGLAKECIG, ::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraPipeline_3<::PipelineCamera::Module::InPlaceBlender*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::InPlaceBlender*>&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_INITPIPELINE_OFFSET))(this, BGAELNNEPIJ, ALCGLAKECIG, AAOCANGHBDG);
	}

	static ::NBGELMBGLKD NAKHOLDFGFF(::HLGHOFNBMLE JDLPKAFHJPM)
	{
		return ((::NBGELMBGLKD(*)(::HLGHOFNBMLE))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_NAKHOLDFGFF_OFFSET))(JDLPKAFHJPM);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* DACDEJFKOGJ(::HLGHOFNBMLE HPEMFJDOAKL)
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::HLGHOFNBMLE))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_DACDEJFKOGJ_OFFSET))(this, HPEMFJDOAKL);
	}
};
