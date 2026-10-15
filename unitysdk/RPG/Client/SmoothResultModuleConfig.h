#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_SMOOTHRESULTMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE0EBCB0)
#define RPG_CLIENT_SMOOTHRESULTMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xE0EBC60)

namespace RPG::Client
{
	class SmoothResultModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean UseBattleAreaY; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single MinDistanceYToStageCollider; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHRESULTMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHRESULTMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
