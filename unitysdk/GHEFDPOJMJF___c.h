#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define GHEFDPOJMJF___C_FLGPEHLAIME_OFFSET UNITYSDK_OFFSET(0x189FF280)
#define GHEFDPOJMJF___C_JIMMBHJIJEN_OFFSET UNITYSDK_OFFSET(0x189FF0C0)
#define GHEFDPOJMJF___C_KELEEEJCIFP_OFFSET UNITYSDK_OFFSET(0x189FF1B0)
#define GHEFDPOJMJF___C_LIHHCANEKAG_OFFSET UNITYSDK_OFFSET(0x189FF1A0)
#define GHEFDPOJMJF___C_PBBNEDBJBCM_OFFSET UNITYSDK_OFFSET(0x189FF190)
#define GHEFDPOJMJF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FF070)
#define GHEFDPOJMJF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF0B0)

inline static constexpr unsigned int GHEFDPOJMJF___c_TypeDefinitionIndex = 89949;

class GHEFDPOJMJF___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44150);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44158);
	}
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_4()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44160);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44168);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__8_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44170);
	}
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_2()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(GHEFDPOJMJF___c_TypeDefinitionIndex)->GetStaticField(0x44178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* JIMMBHJIJEN(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C_JIMMBHJIJEN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PBBNEDBJBCM(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C_PBBNEDBJBCM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LIHHCANEKAG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C_LIHHCANEKAG_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraDataBlender* KELEEEJCIFP(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C_KELEEEJCIFP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FLGPEHLAIME(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF___C_FLGPEHLAIME_OFFSET))(this, FKMJKPGNCJI);
	}
};
