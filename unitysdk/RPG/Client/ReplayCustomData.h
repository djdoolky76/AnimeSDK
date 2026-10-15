#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_REPLAYCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDEB90D0)
#define RPG_CLIENT_REPLAYCUSTOMDATA_GCBMOBCGDPI_OFFSET UNITYSDK_OFFSET(0xDEB9080)

namespace RPG::Client
{
	class ReplayCustomData : public ::System::Object
	{
	public:
		::System::String* DataVersion; // 0x10
		::System::String* GameCoreDataVersion; // 0x18
		::System::String* ClientVersion; // 0x20
		::System::String* CostTime; // 0x28
		::System::String* SimulateTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::String* GCBMOBCGDPI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYCUSTOMDATA_GCBMOBCGDPI_OFFSET))(this);
		}

	};
}
