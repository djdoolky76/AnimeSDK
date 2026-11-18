#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { template <typename T> class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define OHEAEPGEFOO_CCBNNNHGDDN_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0xE14F0E0)
#define OHEAEPGEFOO_CCBNNNHGDDN__CTOR_OFFSET UNITYSDK_OFFSET(0xE14F0D0)

inline static constexpr unsigned int OHEAEPGEFOO_CCBNNNHGDDN_TypeDefinitionIndex = 67820;

class OHEAEPGEFOO_CCBNNNHGDDN : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* JBEMNGAPKDA; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_CCBNNNHGDDN__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_CCBNNNHGDDN_MHOCBDNKKJK_OFFSET))(this);
	}
};
