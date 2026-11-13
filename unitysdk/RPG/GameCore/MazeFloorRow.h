#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeFloorRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DF00)
#define RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB6D4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorRow_TypeDefinitionIndex = 14205;

	class MazeFloorRow : public ::System::Object
	{
	public:
		::System::String* FloorBGMGroupName; // 0x10
		::System::String* OptionalLoadBlocksConfig; // 0x18
		::System::String* BGMWorldState; // 0x20
		::System::String* FloorDefaultEmotion; // 0x28
		::System::String* MunicipalConfigPath; // 0x30
		::System::String* FloorBGMNormalStateName; // 0x38
		::Il2CppArray<::System::String*>* EnterAudioEvent; // 0x40
		::Il2CppArray<::System::String*>* FloorTag; // 0x48
		::System::String* CombatBGMLow; // 0x50
		::Il2CppArray<::System::String*>* ExitAudioEvent; // 0x58
		::Il2CppArray<::RPG::Client::TextID>* MapLayerNameList; // 0x60
		::System::String* CombatBGMHigh; // 0x68
		::System::String* FloorBGMBusyStateName; // 0x70
		::System::String* FloorName; // 0x78
		::System::UInt32 BaseFloorID; // 0x80
		::System::UInt32 FloorID; // 0x84
		::RPG::GameCore::FloorType FloorType; // 0x88
		::System::Single WalkingEffectAdditiveScale; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeFloorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeFloorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
