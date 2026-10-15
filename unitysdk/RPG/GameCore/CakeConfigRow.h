#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D546960)
#define RPG_GAMECORE_CAKECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5464D0)

namespace RPG::GameCore
{
	class CakeConfigRow : public ::System::Object
	{
	public:
		::System::String* CatMatPath; // 0x10
		::System::String* CatCakeMiniIcon; // 0x18
		::Il2CppArray<::System::UInt32>* CatCaughtLines; // 0x20
		::System::String* CakeDarkMatPath; // 0x28
		::Il2CppArray<::System::UInt32>* CatMissedLines; // 0x30
		::System::String* CatCakeTailPath; // 0x38
		::System::String* CatCakeHeadIcon; // 0x40
		::System::UInt32 NPCID; // 0x48
		::System::UInt32 CatTailColour; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RuanMadeCakeStory; // 0x58
		::RPG::Client::TextID RuanMadeCakeName; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
