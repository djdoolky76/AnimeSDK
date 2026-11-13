#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_LOOKATMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x19467C40)
#define RPG_CLIENT_LOOKATMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0x19467BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtModuleConfig_TypeDefinitionIndex = 71639;

	class LookAtModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
