#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailDataRow; }

#define RPG_GAMECORE_TAROTMAILDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A6B0)
#define RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4A350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailDataRow_TypeDefinitionIndex = 15247;

	class TarotMailDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MailSentenceIDList; // 0x10
		::RPG::Client::TextID From; // 0x18
		::System::Boolean IsSpecial; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID To; // 0x30
		::RPG::Client::TextID Title; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotMailDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotMailDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
