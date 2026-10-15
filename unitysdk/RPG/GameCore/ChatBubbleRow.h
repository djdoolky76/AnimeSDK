#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChatBubbleRow; }

#define RPG_GAMECORE_CHATBUBBLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57AAD0)
#define RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57A960)

namespace RPG::GameCore
{
	class ChatBubbleRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 ShowParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChatBubbleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChatBubbleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
