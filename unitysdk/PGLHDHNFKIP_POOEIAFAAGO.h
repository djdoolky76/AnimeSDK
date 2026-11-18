#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define PGLHDHNFKIP_POOEIAFAAGO_BEGNKJPGDNC_OFFSET UNITYSDK_OFFSET(0x16FCAB40)
#define PGLHDHNFKIP_POOEIAFAAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCAB30)

inline static constexpr unsigned int PGLHDHNFKIP_POOEIAFAAGO_TypeDefinitionIndex = 80748;

class PGLHDHNFKIP_POOEIAFAAGO : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* EHDFDPBFINE; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_POOEIAFAAGO__CTOR_OFFSET))(this);
	}

	::System::Void BEGNKJPGDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_POOEIAFAAGO_BEGNKJPGDNC_OFFSET))(this);
	}
};
