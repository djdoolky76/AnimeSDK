#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaDisplayRow; }

#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3A5F0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA39F90)

namespace RPG::GameCore
{
	class RogueTournFormulaDisplayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x10
		::RPG::Client::TextID FormulaStory; // 0x18
		::System::UInt32 FormulaDisplayID; // 0x28
		::System::UInt32 HandbookUnlockDisplayID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
