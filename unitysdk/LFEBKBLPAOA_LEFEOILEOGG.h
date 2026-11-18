#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFEBKBLPAOA;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace PipelineCamera { class ICameraDataBlender; }

#define LFEBKBLPAOA_LEFEOILEOGG_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0xD427540)
#define LFEBKBLPAOA_LEFEOILEOGG__CTOR_OFFSET UNITYSDK_OFFSET(0xD427530)

inline static constexpr unsigned int LFEBKBLPAOA_LEFEOILEOGG_TypeDefinitionIndex = 48659;

class LFEBKBLPAOA_LEFEOILEOGG : public ::System::Object
{
public:
	::LFEBKBLPAOA* KLHPEBKNIFB; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_LEFEOILEOGG__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* HBJKOGCOPJG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_LEFEOILEOGG_HBJKOGCOPJG_OFFSET))(this, PIIPCLCCOIG);
	}
};
