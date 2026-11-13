#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }

#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46AF90)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E46A830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizConfigRow_TypeDefinitionIndex = 12116;

	class MonopolyQuizConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuizTaskIDList; // 0x10
		::RPG::Client::TextID QuizDesc; // 0x18
		::RPG::Client::TextID QuizName; // 0x28
		::System::UInt32 Duration; // 0x38
		::System::UInt32 QuizID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyQuizConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyQuizConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
