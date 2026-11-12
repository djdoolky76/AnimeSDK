#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonDiceSurfaceRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC00120)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBFF7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceSurfaceRow_TypeDefinitionIndex = 14899;

	class RogueDLCAeonDiceSurfaceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x10
		::Il2CppArray<::System::UInt32>* Dice3DSurfaceList; // 0x18
		::System::String* DiceSurfaceIcon; // 0x20
		::Il2CppArray<::System::UInt32>* DiceEffectParam; // 0x28
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x30
		::System::UInt32 AeonDiceID; // 0x38
		::System::UInt32 Sort; // 0x3C
		::System::UInt32 DiceActiveStage; // 0x40
		::System::UInt32 Rarity; // 0x44
		::RPG::GameCore::ModifierEffectType DiceEffectType; // 0x48
		::System::UInt32 AeonSurfaceDiceID; // 0x4C
		::RPG::Client::TextID DiceSurfaceDesc; // 0x50
		::RPG::Client::TextID DiceSurfaceName; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
