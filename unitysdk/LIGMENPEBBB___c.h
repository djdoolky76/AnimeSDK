#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define LIGMENPEBBB___C_CEPDNIEJJMD_OFFSET UNITYSDK_OFFSET(0x1518C120)
#define LIGMENPEBBB___C_KPELJKMCPAI_OFFSET UNITYSDK_OFFSET(0x1518C100)
#define LIGMENPEBBB___C_MEKFALLDALF_OFFSET UNITYSDK_OFFSET(0x1518C110)
#define LIGMENPEBBB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1518C0B0)
#define LIGMENPEBBB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1518C0F0)

inline static constexpr unsigned int LIGMENPEBBB___c_TypeDefinitionIndex = 50625;

class LIGMENPEBBB___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(LIGMENPEBBB___c_TypeDefinitionIndex)->GetStaticField(0x3E6B0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__23_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(LIGMENPEBBB___c_TypeDefinitionIndex)->GetStaticField(0x3E6B8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(LIGMENPEBBB___c_TypeDefinitionIndex)->GetStaticField(0x3E6C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LIGMENPEBBB___c_TypeDefinitionIndex)->GetStaticField(0x3E6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGMENPEBBB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB___C__CTOR_OFFSET))(this);
	}

	::System::Void KPELJKMCPAI(::PipelineCamera::ICameraDataBlender* ODLOFJPFLJE)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LIGMENPEBBB___C_KPELJKMCPAI_OFFSET))(this, ODLOFJPFLJE);
	}

	::System::Void MEKFALLDALF(::PipelineCamera::ICameraDataBlender* ODLOFJPFLJE)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LIGMENPEBBB___C_MEKFALLDALF_OFFSET))(this, ODLOFJPFLJE);
	}

	::System::Void CEPDNIEJJMD(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + LIGMENPEBBB___C_CEPDNIEJJMD_OFFSET))(this, FKMJKPGNCJI);
	}
};
