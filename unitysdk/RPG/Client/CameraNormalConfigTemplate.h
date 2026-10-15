#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraNormalConfigData; }
namespace System { class String; }

#define RPG_CLIENT_CAMERANORMALCONFIGTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0xC938DB0)

namespace RPG::Client
{
	class CameraNormalConfigTemplate : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPG::Client::CameraNormalConfigData* CameraNormalConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGTEMPLATE_CTOR_OFFSET))(this);
		}

	};
}
