#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define LFEBKBLPAOA___C_LFCFNJMIJPL_OFFSET UNITYSDK_OFFSET(0x158D0990)
#define LFEBKBLPAOA___C_MGKIEPBHCDE_OFFSET UNITYSDK_OFFSET(0x158D09A0)
#define LFEBKBLPAOA___C_ONGCNFEBDNM_OFFSET UNITYSDK_OFFSET(0x158D0980)
#define LFEBKBLPAOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158D0930)
#define LFEBKBLPAOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0970)

inline static constexpr unsigned int LFEBKBLPAOA___c_TypeDefinitionIndex = 48660;

class LFEBKBLPAOA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFEBKBLPAOA___c_TypeDefinitionIndex)->GetStaticField(0x38430);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(LFEBKBLPAOA___c_TypeDefinitionIndex)->GetStaticField(0x38438);
	}
	static ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(LFEBKBLPAOA___c_TypeDefinitionIndex)->GetStaticField(0x38440);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__15_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(LFEBKBLPAOA___c_TypeDefinitionIndex)->GetStaticField(0x38448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEBKBLPAOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA___C__CTOR_OFFSET))(this);
	}

	::System::Void ONGCNFEBDNM(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA___C_ONGCNFEBDNM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LFCFNJMIJPL(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA___C_LFCFNJMIJPL_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::WorldBasicCameraData MGKIEPBHCDE(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + LFEBKBLPAOA___C_MGKIEPBHCDE_OFFSET))(this, AAOCANGHBDG);
	}
};
