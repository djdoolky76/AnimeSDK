#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerCupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CCD00)
#define RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3CC950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCupRow_TypeDefinitionIndex = 13240;

	class DrinkMakerCupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IceCount; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* AudioEvent; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x30
		::Il2CppArray<::System::Single>* PerLayerHeight; // 0x38
		::System::UInt32 CupID; // 0x40
		::RPG::GameCore::DrinkMakerCupType Type; // 0x44
		::RPG::Client::TextID CupName; // 0x48
		::System::UInt32 Capacity; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
