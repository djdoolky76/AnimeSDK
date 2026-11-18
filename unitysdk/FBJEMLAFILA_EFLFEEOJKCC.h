#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define FBJEMLAFILA_EFLFEEOJKCC_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x16174390)
#define FBJEMLAFILA_EFLFEEOJKCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16174380)

inline static constexpr unsigned int FBJEMLAFILA_EFLFEEOJKCC_TypeDefinitionIndex = 65182;

class FBJEMLAFILA_EFLFEEOJKCC : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_EFLFEEOJKCC__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_EFLFEEOJKCC_MHOCBDNKKJK_OFFSET))(this);
	}
};
