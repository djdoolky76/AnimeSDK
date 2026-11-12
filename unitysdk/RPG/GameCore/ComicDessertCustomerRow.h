#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGCHPMCOENF;
namespace RPG::GameCore { class ComicDessertCustomerRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTCUSTOMERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DAEA0)
#define RPG_GAMECORE_COMICDESSERTCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DAB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertCustomerRow_TypeDefinitionIndex = 11247;

	class ComicDessertCustomerRow : public ::System::Object
	{
	public:
		::System::String* BehaviorConfigPath; // 0x10
		::Il2CppArray<::System::UInt32>* AppearLevelIDList; // 0x18
		::MGCHPMCOENF* TalkBubbleOffset; // 0x20
		::MGCHPMCOENF* TalkBubbleOffset_R; // 0x28
		::MGCHPMCOENF* CoinBubbleOffset; // 0x30
		::System::String* OverrideConfigEntityPath; // 0x38
		::MGCHPMCOENF* EmotionBubbleOffset; // 0x40
		::MGCHPMCOENF* EmojiBubbleOffset; // 0x48
		::System::UInt32 OrderType; // 0x50
		::System::UInt32 NPCID; // 0x54
		::System::UInt32 AngryMotionID; // 0x58
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
