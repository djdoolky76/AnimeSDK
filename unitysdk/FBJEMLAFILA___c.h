#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define FBJEMLAFILA___C_CLPGIMLJBDC_OFFSET UNITYSDK_OFFSET(0x17139100)
#define FBJEMLAFILA___C_DHAFCGGFJEO_OFFSET UNITYSDK_OFFSET(0x171391A0)
#define FBJEMLAFILA___C_KPELJKMCPAI_OFFSET UNITYSDK_OFFSET(0x171391C0)
#define FBJEMLAFILA___C_MEKFALLDALF_OFFSET UNITYSDK_OFFSET(0x171391B0)
#define FBJEMLAFILA___C_MLODCBLPFHN_OFFSET UNITYSDK_OFFSET(0x171390F0)
#define FBJEMLAFILA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171390A0)
#define FBJEMLAFILA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171390E0)

inline static constexpr unsigned int FBJEMLAFILA___c_TypeDefinitionIndex = 65181;

class FBJEMLAFILA___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__19_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x461E0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__18_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x461E8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x461F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x461F8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__20_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x46200);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(FBJEMLAFILA___c_TypeDefinitionIndex)->GetStaticField(0x46208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJEMLAFILA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C__CTOR_OFFSET))(this);
	}

	::System::Void MLODCBLPFHN(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C_MLODCBLPFHN_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* CLPGIMLJBDC()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C_CLPGIMLJBDC_OFFSET))(this);
	}

	::System::Void DHAFCGGFJEO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C_DHAFCGGFJEO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MEKFALLDALF(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C_MEKFALLDALF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KPELJKMCPAI(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + FBJEMLAFILA___C_KPELJKMCPAI_OFFSET))(this, PIIPCLCCOIG);
	}
};
