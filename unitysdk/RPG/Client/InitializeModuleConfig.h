#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_INITIALIZEMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD350130)
#define RPG_CLIENT_INITIALIZEMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xD3500E0)

namespace RPG::Client
{
	class InitializeModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single InitFOV; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INITIALIZEMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INITIALIZEMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
