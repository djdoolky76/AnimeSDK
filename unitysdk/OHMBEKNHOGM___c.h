#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define OHMBEKNHOGM___C_NICHBMAFFOG_OFFSET UNITYSDK_OFFSET(0x13A62510)
#define OHMBEKNHOGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A624C0)
#define OHMBEKNHOGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A62500)

inline static constexpr unsigned int OHMBEKNHOGM___c_TypeDefinitionIndex = 53863;

class OHMBEKNHOGM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OHMBEKNHOGM___c_TypeDefinitionIndex)->GetStaticField(0x36070);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__53_2()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(OHMBEKNHOGM___c_TypeDefinitionIndex)->GetStaticField(0x36078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHMBEKNHOGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMBEKNHOGM___C__CTOR_OFFSET))(this);
	}

	::System::Void NICHBMAFFOG(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + OHMBEKNHOGM___C_NICHBMAFFOG_OFFSET))(this, PIIPCLCCOIG);
	}
};
