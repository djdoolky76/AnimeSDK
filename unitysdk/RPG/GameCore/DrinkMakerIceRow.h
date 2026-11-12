#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerIceRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85E840)
#define RPG_GAMECORE_DRINKMAKERICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E85E580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerIceRow_TypeDefinitionIndex = 13246;

	class DrinkMakerIceRow : public ::System::Object
	{
	public:
		::System::String* CupAnchoPath; // 0x10
		::System::String* AudioEvent; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x30
		::RPG::Client::TextID IceName; // 0x38
		::System::UInt32 ID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerIceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerIceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
