#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatFeedbackConfigRow; }

#define RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13F790)
#define RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F13F610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatFeedbackConfigRow_TypeDefinitionIndex = 14467;

	class PamChatFeedbackConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamChatFeedbackConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamChatFeedbackConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
