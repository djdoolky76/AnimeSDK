#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE_PLAYMESSAGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB120)

namespace RPG::Client
{
	struct alignas(8) MissionModule_PlayMessage
	{
		::System::Collections::Generic::List_1<::System::UInt32>* MessageSectionList; // 0x10
		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_PLAYMESSAGE_CLEAR_OFFSET))(this);
		}

	};
}
