#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_PROTECTMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFC790)
#define RPG_CLIENT_PROTECTMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xDDFC740)

namespace RPG::Client
{
	class ProtectModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single NormalPushRatio; // 0x18
		::System::Single LerpBackSmoothTime; // 0x1C
		::System::Single LerpBackMaxSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROTECTMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROTECTMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
