#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEventOptionRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49B90)
#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB498A0)

namespace RPG::GameCore
{
	class SwordTrainingEventOptionRow : public ::System::Object
	{
	public:
		::System::String* ResultImage; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::System::String* ResultAudio; // 0x20
		::System::UInt32 OptionID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ResultDesc; // 0x30
		::RPG::Client::TextID OptionDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingEventOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingEventOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
