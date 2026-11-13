#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E704F70)
#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E704B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameConfigRow_TypeDefinitionIndex = 12113;

	class MonopolyGameConfigRow : public ::System::Object
	{
	public:
		::System::String* ParamStr1; // 0x10
		::System::String* GameIcon; // 0x18
		::Il2CppArray<::System::UInt32>* GameResourceIDList; // 0x20
		::System::String* ParamStr2; // 0x28
		::System::UInt32 GameID; // 0x30
		::System::UInt32 BaseRaiseMaxValue; // 0x34
		::System::UInt32 RaiseCurveID; // 0x38
		::RPG::GameCore::MonopolyGameType GameType; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID IntroDesc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyGameConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyGameConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
