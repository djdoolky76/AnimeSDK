#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Func_1; }

#define CIPHODBPLDD___C_MOIDNEKCMPK_OFFSET UNITYSDK_OFFSET(0x159DD200)
#define CIPHODBPLDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159DD1B0)
#define CIPHODBPLDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159DD1F0)

inline static constexpr unsigned int CIPHODBPLDD___c_TypeDefinitionIndex = 86492;

class CIPHODBPLDD___c : public ::System::Object
{
public:
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(CIPHODBPLDD___c_TypeDefinitionIndex)->GetStaticField(0x49860);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CIPHODBPLDD___c_TypeDefinitionIndex)->GetStaticField(0x49868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIPHODBPLDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* MOIDNEKCMPK()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD___C_MOIDNEKCMPK_OFFSET))(this);
	}
};
