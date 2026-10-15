#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FDPOCBGDLGA;
namespace RPG::GameCore { class CakeDialogueRuleRow; }

#define RPG_GAMECORE_CAKEDIALOGUERULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D546D80)
#define RPG_GAMECORE_CAKEDIALOGUERULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D546B40)

namespace RPG::GameCore
{
	class CakeDialogueRuleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* TypeList; // 0x10
		::Il2CppArray<::FDPOCBGDLGA*>* CakeRequirementList; // 0x18
		::Il2CppArray<::System::UInt32>* CakeDialogueList; // 0x20
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::CakeSpeakerPolicy SpeakerPolicy; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUERULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeDialogueRuleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeDialogueRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUERULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
