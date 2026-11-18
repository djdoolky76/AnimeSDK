#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EELOMMHDNHK;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define EELOMMHDNHK_MBIFBJMEACM_BEGNKJPGDNC_OFFSET UNITYSDK_OFFSET(0x16137D20)
#define EELOMMHDNHK_MBIFBJMEACM__CTOR_OFFSET UNITYSDK_OFFSET(0x16137D10)

inline static constexpr unsigned int EELOMMHDNHK_MBIFBJMEACM_TypeDefinitionIndex = 48785;

class EELOMMHDNHK_MBIFBJMEACM : public ::System::Object
{
public:
	::EELOMMHDNHK* KLHPEBKNIFB; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_MBIFBJMEACM__CTOR_OFFSET))(this);
	}

	::System::Void BEGNKJPGDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_MBIFBJMEACM_BEGNKJPGDNC_OFFSET))(this);
	}
};
