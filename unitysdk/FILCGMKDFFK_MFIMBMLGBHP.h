#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define FILCGMKDFFK_MFIMBMLGBHP_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x14AD6B40)
#define FILCGMKDFFK_MFIMBMLGBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD6B30)

inline static constexpr unsigned int FILCGMKDFFK_MFIMBMLGBHP_TypeDefinitionIndex = 66439;

class FILCGMKDFFK_MFIMBMLGBHP : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_MFIMBMLGBHP__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_MFIMBMLGBHP_MHOCBDNKKJK_OFFSET))(this);
	}
};
