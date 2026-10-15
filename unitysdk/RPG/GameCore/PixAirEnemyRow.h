#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEnemyRow; }

#define RPG_GAMECORE_PIXAIRENEMYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EC7A0)
#define RPG_GAMECORE_PIXAIRENEMYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EC510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEnemyRow_TypeDefinitionIndex = 12145;

	class PixAirEnemyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipsID; // 0x10
		::Il2CppArray<::System::UInt32>* EquipsLevel; // 0x18
		::System::UInt32 CoinLoot; // 0x20
		::System::UInt32 DisplayID; // 0x24
		::System::UInt32 EnemyID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint HP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEnemyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEnemyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
