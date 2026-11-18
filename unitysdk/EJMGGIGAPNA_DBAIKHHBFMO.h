#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define EJMGGIGAPNA_DBAIKHHBFMO_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x17241B70)
#define EJMGGIGAPNA_DBAIKHHBFMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17241B60)

inline static constexpr unsigned int EJMGGIGAPNA_DBAIKHHBFMO_TypeDefinitionIndex = 40694;

class EJMGGIGAPNA_DBAIKHHBFMO : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_DBAIKHHBFMO__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_DBAIKHHBFMO_MHOCBDNKKJK_OFFSET))(this);
	}
};
