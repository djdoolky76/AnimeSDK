#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GameReplayModel; }
namespace RPG::Client { class ReplayUploadContent; }
namespace System { class String; }

#define RPG_CLIENT_GAMEREPLAYMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD0AC660)
#define RPG_CLIENT_GAMEREPLAYMODEL_DJKNAOANOCG_OFFSET UNITYSDK_OFFSET(0xD0AC3A0)
#define RPG_CLIENT_GAMEREPLAYMODEL_PAIGGMHPGJK_OFFSET UNITYSDK_OFFSET(0xD0AC4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameReplayModel_TypeDefinitionIndex = 60975;

	class GameReplayModel : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* applicationName; // 0x18
		::System::String* msgId; // 0x20
		::System::String* eventTime; // 0x28
		::System::Int32 eventId; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* eventName; // 0x38
		::RPG::Client::ReplayUploadContent* uploadContent; // 0x40
		::System::String* dump; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DJKNAOANOCG()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL_DJKNAOANOCG_OFFSET))(this);
		}

		static ::RPG::Client::GameReplayModel* PAIGGMHPGJK(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::RPG::Client::GameReplayModel*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL_PAIGGMHPGJK_OFFSET))(a1);
		}

	};
}
