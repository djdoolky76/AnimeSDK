#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FHGHJDPHHEL;
class GHEFDPOJMJF;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define GHEFDPOJMJF_HEGPELBMDKG_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x10EF4620)
#define GHEFDPOJMJF_HEGPELBMDKG_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x10EF4550)
#define GHEFDPOJMJF_HEGPELBMDKG__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF4540)

inline static constexpr unsigned int GHEFDPOJMJF_HEGPELBMDKG_TypeDefinitionIndex = 89950;

class GHEFDPOJMJF_HEGPELBMDKG : public ::System::Object
{
public:
	::FHGHJDPHHEL* AAOCANGHBDG; // 0x10
	::GHEFDPOJMJF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_HEGPELBMDKG__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_HEGPELBMDKG_HBJKOGCOPJG_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_HEGPELBMDKG_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}
};
