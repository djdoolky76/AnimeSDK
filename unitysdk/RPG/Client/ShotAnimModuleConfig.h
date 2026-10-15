#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
namespace RPG::Client { class ShotAnimMovementData; }

#define RPG_CLIENT_SHOTANIMMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BEA80)
#define RPG_CLIENT_SHOTANIMMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xE0BEA30)

namespace RPG::Client
{
	inline static constexpr unsigned int ShotAnimModuleConfig_TypeDefinitionIndex = 69687;

	class ShotAnimModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::RPG::Client::ShotAnimMovementData* DefaultShotAnimMovementData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTANIMMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTANIMMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
