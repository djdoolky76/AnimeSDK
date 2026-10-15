#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialEmoRow; }

#define RPG_GAMECORE_HEARTDIALEMOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7588A0)
#define RPG_GAMECORE_HEARTDIALEMOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D758260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoRow_TypeDefinitionIndex = 13726;

	class HeartDialEmoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EmoName; // 0x10
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialEmoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialEmoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
