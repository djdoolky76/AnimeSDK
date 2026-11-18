#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define IEBDNKDCKMP___C_JIMMBHJIJEN_OFFSET UNITYSDK_OFFSET(0x15EA8700)
#define IEBDNKDCKMP___C_KELEEEJCIFP_OFFSET UNITYSDK_OFFSET(0x15EA87E0)
#define IEBDNKDCKMP___C_LIHHCANEKAG_OFFSET UNITYSDK_OFFSET(0x15EA86F0)
#define IEBDNKDCKMP___C_PBBNEDBJBCM_OFFSET UNITYSDK_OFFSET(0x15EA87D0)
#define IEBDNKDCKMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EA86A0)
#define IEBDNKDCKMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA86E0)

inline static constexpr unsigned int IEBDNKDCKMP___c_TypeDefinitionIndex = 85485;

class IEBDNKDCKMP___c : public ::System::Object
{
public:
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_2()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(IEBDNKDCKMP___c_TypeDefinitionIndex)->GetStaticField(0x37C90);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(IEBDNKDCKMP___c_TypeDefinitionIndex)->GetStaticField(0x37C98);
	}
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_4()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(IEBDNKDCKMP___c_TypeDefinitionIndex)->GetStaticField(0x37CA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEBDNKDCKMP___c_TypeDefinitionIndex)->GetStaticField(0x37CA8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(IEBDNKDCKMP___c_TypeDefinitionIndex)->GetStaticField(0x37CB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C__CTOR_OFFSET))(this);
	}

	::System::Void LIHHCANEKAG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C_LIHHCANEKAG_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraDataBlender* JIMMBHJIJEN(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C_JIMMBHJIJEN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PBBNEDBJBCM(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C_PBBNEDBJBCM_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraDataBlender* KELEEEJCIFP(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP___C_KELEEEJCIFP_OFFSET))(this, PIIPCLCCOIG);
	}
};
