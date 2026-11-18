#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { template <typename T> class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define DBHEAKNHENH_JMBHNLLEIPB_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x13285640)
#define DBHEAKNHENH_JMBHNLLEIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x13285630)

inline static constexpr unsigned int DBHEAKNHENH_JMBHNLLEIPB_TypeDefinitionIndex = 56094;

class DBHEAKNHENH_JMBHNLLEIPB : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* JBEMNGAPKDA; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JMBHNLLEIPB__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JMBHNLLEIPB_MHOCBDNKKJK_OFFSET))(this);
	}
};
