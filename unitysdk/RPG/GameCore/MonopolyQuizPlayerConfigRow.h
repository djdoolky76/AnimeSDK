#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyQuizPlayerConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87ADC0)
#define RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87A6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizPlayerConfigRow_TypeDefinitionIndex = 12063;

	class MonopolyQuizPlayerConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 QuizPlayerID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyQuizPlayerConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyQuizPlayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZPLAYERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
