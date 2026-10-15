#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnemyRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGENEMYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55ED10)
#define RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55E820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyRow_TypeDefinitionIndex = 11082;

	class ChenLingEnemyRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EnchantList; // 0x10
		::RPG::GameCore::FixPoint CrtRatio; // 0x18
		::RPG::GameCore::FixPoint HpRatio; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 GridIndex; // 0x2C
		::RPG::GameCore::FixPoint AtkRatio; // 0x30
		::RPG::GameCore::FixPoint AtkSpdRatio; // 0x38
		::RPG::GameCore::FixPoint CrtDMGRatio; // 0x40
		::System::UInt32 Level; // 0x48
		::System::Boolean IsPromotion; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 SoldierID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingEnemyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingEnemyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
