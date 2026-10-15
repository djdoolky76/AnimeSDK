#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChatContentRow; }

#define RPG_GAMECORE_IDLELIVECHATCONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7791E0)
#define RPG_GAMECORE_IDLELIVECHATCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChatContentRow_TypeDefinitionIndex = 11780;

	class IdleLiveChatContentRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Content; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATCONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveChatContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveChatContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
