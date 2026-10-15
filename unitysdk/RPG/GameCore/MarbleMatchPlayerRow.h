#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchPlayerRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHPLAYERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D814480)
#define RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D813FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchPlayerRow_TypeDefinitionIndex = 11873;

	class MarbleMatchPlayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LowPositiveEmojiList; // 0x10
		::Il2CppArray<::System::UInt32>* HighNegativeEmojiList; // 0x18
		::Il2CppArray<::System::UInt32>* HighPositiveEmojiList; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* LowNegativeEmojiList; // 0x30
		::System::String* PrefabPath; // 0x38
		::Il2CppArray<::System::UInt32>* PlayerActionEmojiList; // 0x40
		::System::String* ImagePath; // 0x48
		::System::UInt32 ID; // 0x50
		::System::UInt32 SealGroupID; // 0x54
		::RPG::Client::TextID Desc; // 0x58
		::RPG::Client::TextID Name; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMatchPlayerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMatchPlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
