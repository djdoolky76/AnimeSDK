#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define JKMGJKOCGDE___C_FLKIPPAJIFO_OFFSET UNITYSDK_OFFSET(0x19460750)
#define JKMGJKOCGDE___C_GGKFHENFHGF_OFFSET UNITYSDK_OFFSET(0x19460740)
#define JKMGJKOCGDE___C_LHEAIAGECBO_OFFSET UNITYSDK_OFFSET(0x19460730)
#define JKMGJKOCGDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194606E0)
#define JKMGJKOCGDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19460720)

inline static constexpr unsigned int JKMGJKOCGDE___c_TypeDefinitionIndex = 89840;

class JKMGJKOCGDE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKMGJKOCGDE___c_TypeDefinitionIndex)->GetStaticField(0x38090);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__17_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(JKMGJKOCGDE___c_TypeDefinitionIndex)->GetStaticField(0x38098);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(JKMGJKOCGDE___c_TypeDefinitionIndex)->GetStaticField(0x380A0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__19_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(JKMGJKOCGDE___c_TypeDefinitionIndex)->GetStaticField(0x380A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKMGJKOCGDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE___C__CTOR_OFFSET))(this);
	}

	::System::Void LHEAIAGECBO(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE___C_LHEAIAGECBO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GGKFHENFHGF(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE___C_GGKFHENFHGF_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FLKIPPAJIFO()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE___C_FLKIPPAJIFO_OFFSET))(this);
	}
};
