#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HADNKOIDKKF;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A84C0)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A80B0)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1D9A84D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterRow_TypeDefinitionIndex = 14880;

	class RogueMagicScepterRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* TrenchCount; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x18
		::Il2CppArray<::HADNKOIDKKF*>* LockMagicUnit; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x28
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x2C
		::System::UInt32 UnlockID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint ScepterBasicPower; // 0x38
		::System::UInt32 ScepterLevel; // 0x40
		::RPG::GameCore::RogueMagicRangeType LimitRangeType; // 0x44
		::System::UInt32 StaffMazeBuffID; // 0x48
		::System::UInt32 ScepterID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicScepterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET))(this);
		}

	};
}
