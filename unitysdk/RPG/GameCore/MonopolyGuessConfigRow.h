#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGuessConfigRow; }

#define RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A16C0)
#define RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8A1580)

namespace RPG::GameCore
{
	class MonopolyGuessConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GuessPlayerIDList; // 0x10
		::System::UInt32 GuessID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyGuessConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyGuessConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
