#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Func_1; }

#define FOJONDIPFFL___C_APCACFGPJBH_OFFSET UNITYSDK_OFFSET(0x165C4EA0)
#define FOJONDIPFFL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C4E50)
#define FOJONDIPFFL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165C4E90)

inline static constexpr unsigned int FOJONDIPFFL___c_TypeDefinitionIndex = 55441;

class FOJONDIPFFL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOJONDIPFFL___c_TypeDefinitionIndex)->GetStaticField(0x49B70);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__19_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(FOJONDIPFFL___c_TypeDefinitionIndex)->GetStaticField(0x49B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJONDIPFFL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* APCACFGPJBH()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL___C_APCACFGPJBH_OFFSET))(this);
	}
};
