#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PCNODGDKBAK;
namespace System { class String; }

#define ADJBDGIJOOC_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x144BE5C0)
#define ADJBDGIJOOC_DILGPAAPNHP_OFFSET UNITYSDK_OFFSET(0x144BDD40)
#define ADJBDGIJOOC_HBGBFALLKIF_OFFSET UNITYSDK_OFFSET(0x144BEC10)
#define ADJBDGIJOOC_IDEEAOBPPEH_OFFSET UNITYSDK_OFFSET(0x144BDC40)
#define ADJBDGIJOOC_LBBNIJAJCKK_OFFSET UNITYSDK_OFFSET(0x144BE9A0)
#define ADJBDGIJOOC_PDDKNEBNOIC_OFFSET UNITYSDK_OFFSET(0x144BE4C0)
#define ADJBDGIJOOC_PJGGJONAFFL_OFFSET UNITYSDK_OFFSET(0x144BE010)

inline static constexpr unsigned int ADJBDGIJOOC_TypeDefinitionIndex = 58127;

class ADJBDGIJOOC : public ::System::Object
{
public:
	static ::System::String* IDEEAOBPPEH(::UnityEngine::Vector3& OMPHGGCEIBD)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_IDEEAOBPPEH_OFFSET))(OMPHGGCEIBD);
	}

	static ::PipelineCamera::WorldBasicCameraData DILGPAAPNHP(::Cinemachine::CameraState& OMPHGGCEIBD)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_DILGPAAPNHP_OFFSET))(OMPHGGCEIBD);
	}

	static ::Cinemachine::CameraState PJGGJONAFFL(::Cinemachine::CameraState& OMPHGGCEIBD, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA)
	{
		return ((::Cinemachine::CameraState(*)(::Cinemachine::CameraState&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_PJGGJONAFFL_OFFSET))(OMPHGGCEIBD, LJBPECKCCEA);
	}

	static ::System::String* PDDKNEBNOIC(::UnityEngine::Vector3& OMPHGGCEIBD)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_PDDKNEBNOIC_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Void CKJLLANBAOB(::PCNODGDKBAK* OMPHGGCEIBD)
	{
		return ((::System::Void(*)(::PCNODGDKBAK*))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_CKJLLANBAOB_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Boolean LBBNIJAJCKK(::PCNODGDKBAK* OMPHGGCEIBD)
	{
		return ((::System::Boolean(*)(::PCNODGDKBAK*))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_LBBNIJAJCKK_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::String* HBGBFALLKIF(::UnityEngine::Vector3& IDDEAAMJMFN)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ADJBDGIJOOC_HBGBFALLKIF_OFFSET))(IDDEAAMJMFN);
	}
};
