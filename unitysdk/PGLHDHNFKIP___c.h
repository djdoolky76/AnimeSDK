#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define PGLHDHNFKIP___C_GNBKAGKGOGC_OFFSET UNITYSDK_OFFSET(0x1B9DD2A0)
#define PGLHDHNFKIP___C_IANNHLJLMPD_OFFSET UNITYSDK_OFFSET(0x1B9DD290)
#define PGLHDHNFKIP___C_OPEEGBKOCJP_OFFSET UNITYSDK_OFFSET(0x1B9DD280)
#define PGLHDHNFKIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9DD230)
#define PGLHDHNFKIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DD270)

inline static constexpr unsigned int PGLHDHNFKIP___c_TypeDefinitionIndex = 80749;

class PGLHDHNFKIP___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__7_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(PGLHDHNFKIP___c_TypeDefinitionIndex)->GetStaticField(0x3CF30);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__6_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(PGLHDHNFKIP___c_TypeDefinitionIndex)->GetStaticField(0x3CF38);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PGLHDHNFKIP___c_TypeDefinitionIndex)->GetStaticField(0x3CF40);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__6_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(PGLHDHNFKIP___c_TypeDefinitionIndex)->GetStaticField(0x3CF48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLHDHNFKIP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP___C__CTOR_OFFSET))(this);
	}

	::System::Void OPEEGBKOCJP(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP___C_OPEEGBKOCJP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void IANNHLJLMPD(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP___C_IANNHLJLMPD_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void GNBKAGKGOGC(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP___C_GNBKAGKGOGC_OFFSET))(this, PIIPCLCCOIG);
	}
};
