#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueCabinetType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace RPG::GameCore { class RogueDLCAeonCabinetRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56C950)
#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F56C4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCabinetRow_TypeDefinitionIndex = 14909;

	class RogueDLCAeonCabinetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockCabinetID; // 0x10
		::System::String* CabinetIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>* FinishAeonDimensionPointList; // 0x20
		::Il2CppArray<::System::UInt32>* DescParam; // 0x28
		::System::UInt32 QuestID; // 0x30
		::System::UInt32 CabinetID; // 0x34
		::RPG::Client::TextID CabinetName; // 0x38
		::RPG::GameCore::ChessRogueCabinetType CabinetType; // 0x48
		::System::UInt32 Sort; // 0x4C
		::RPG::Client::TextID CabinetMissionDesc; // 0x50
		::RPG::Client::TextID CabinetDesc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCABINETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonCabinetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonCabinetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
