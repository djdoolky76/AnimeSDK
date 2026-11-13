#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGCHPMCOENF;
namespace RPG::GameCore { class ComicDessertCustomerRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTCUSTOMERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F513C00)
#define RPG_GAMECORE_COMICDESSERTCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F513880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertCustomerRow_TypeDefinitionIndex = 11247;

	class ComicDessertCustomerRow : public ::System::Object
	{
	public:
		::MGCHPMCOENF* TalkBubbleOffset; // 0x10
		::System::String* BehaviorConfigPath; // 0x18
		::MGCHPMCOENF* EmotionBubbleOffset; // 0x20
		::MGCHPMCOENF* TalkBubbleOffset_R; // 0x28
		::Il2CppArray<::System::UInt32>* AppearLevelIDList; // 0x30
		::MGCHPMCOENF* CoinBubbleOffset; // 0x38
		::System::String* OverrideConfigEntityPath; // 0x40
		::MGCHPMCOENF* EmojiBubbleOffset; // 0x48
		::System::UInt32 AngryMotionID; // 0x50
		::System::UInt32 NPCID; // 0x54
		::System::UInt32 OrderType; // 0x58
		::System::UInt32 CalmMotionID; // 0x5C
		::System::UInt32 CustomerID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCUSTOMERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertCustomerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertCustomerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCUSTOMERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
