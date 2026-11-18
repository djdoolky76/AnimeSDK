#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HIENEKAJNAK.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"

class DFGPHIKFPPI;
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define AOHOCBLHJGO_LKJALHIBAOB_JBLJANHBELK_OFFSET UNITYSDK_OFFSET(0x135FFC60)
#define AOHOCBLHJGO_LKJALHIBAOB__CTOR_OFFSET UNITYSDK_OFFSET(0x135FFC50)

inline static constexpr unsigned int AOHOCBLHJGO_LKJALHIBAOB_TypeDefinitionIndex = 79199;

class AOHOCBLHJGO_LKJALHIBAOB : public ::System::Object
{
public:
	::DFGPHIKFPPI* AMILPBAGAEJ; // 0x10
	::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_LKJALHIBAOB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::FinalCameraData JBLJANHBELK(::HIENEKAJNAK AAOCANGHBDG)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::HIENEKAJNAK))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_LKJALHIBAOB_JBLJANHBELK_OFFSET))(this, AAOCANGHBDG);
	}
};
