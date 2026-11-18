#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEJLJONCNNJ;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { template <typename T> class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define AEJLJONCNNJ_FHBNGFLHHIC_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x12CE4250)
#define AEJLJONCNNJ_FHBNGFLHHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE4240)

inline static constexpr unsigned int AEJLJONCNNJ_FHBNGFLHHIC_TypeDefinitionIndex = 76681;

class AEJLJONCNNJ_FHBNGFLHHIC : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::AEJLJONCNNJ* KLHPEBKNIFB; // 0x20
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* JBEMNGAPKDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_FHBNGFLHHIC__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_FHBNGFLHHIC_MHOCBDNKKJK_OFFSET))(this);
	}
};
