#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnAssistConfigRow; }

#define RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D937670)
#define RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9374C0)

namespace RPG::GameCore
{
	class PlayerReturnAssistConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AssistAvatarList; // 0x10
		::System::UInt32 AssistGroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TeamDes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnAssistConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnAssistConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
