#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyQuizResultRow; }

#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A96F0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8A8FE0)

namespace RPG::GameCore
{
	class MonopolyQuizResultRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerIDList; // 0x10
		::System::UInt32 QuizID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Desc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyQuizResultRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyQuizResultRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
