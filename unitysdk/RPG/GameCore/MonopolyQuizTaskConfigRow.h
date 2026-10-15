#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyQuizTaskConfigRow; }

#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87CC60)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87C5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizTaskConfigRow_TypeDefinitionIndex = 12061;

	class MonopolyQuizTaskConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PriorityPlayerIDList; // 0x10
		::System::UInt32 QuizTaskID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TaskDesc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyQuizTaskConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyQuizTaskConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
