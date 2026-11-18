#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILAGIDEHCJG;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define ILAGIDEHCJG_MHKFNGMHGOD_CDLIOLCJNOK_OFFSET UNITYSDK_OFFSET(0x1ACBB8F0)
#define ILAGIDEHCJG_MHKFNGMHGOD_GLFHBCCJMJD_OFFSET UNITYSDK_OFFSET(0x1ACBB8B0)
#define ILAGIDEHCJG_MHKFNGMHGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBB8A0)

inline static constexpr unsigned int ILAGIDEHCJG_MHKFNGMHGOD_TypeDefinitionIndex = 56508;

class ILAGIDEHCJG_MHKFNGMHGOD : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* HMIFGOCFOFM; // 0x10
	::ILAGIDEHCJG* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MHKFNGMHGOD__CTOR_OFFSET))(this);
	}

	::System::Void GLFHBCCJMJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MHKFNGMHGOD_GLFHBCCJMJD_OFFSET))(this);
	}

	::System::Void CDLIOLCJNOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MHKFNGMHGOD_CDLIOLCJNOK_OFFSET))(this);
	}
};
