#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODKCDDFOIJ;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define IODKCDDFOIJ_NMOFBMNGJJE_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x1658DD00)
#define IODKCDDFOIJ_NMOFBMNGJJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1658DCF0)

inline static constexpr unsigned int IODKCDDFOIJ_NMOFBMNGJJE_TypeDefinitionIndex = 48141;

class IODKCDDFOIJ_NMOFBMNGJJE : public ::System::Object
{
public:
	::IODKCDDFOIJ* KLHPEBKNIFB; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_NMOFBMNGJJE__CTOR_OFFSET))(this);
	}

	::System::Void MHOCBDNKKJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_NMOFBMNGJJE_MHOCBDNKKJK_OFFSET))(this);
	}
};
