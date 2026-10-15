#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRoundRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELROUNDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57BF30)
#define RPG_GAMECORE_CHIMERADUELROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRoundRow_TypeDefinitionIndex = 11132;

	class ChimeraDuelRoundRow : public ::System::Object
	{
	public:
		::System::String* ShopUnlockTutorial; // 0x10
		::Il2CppArray<::System::UInt32>* ShopChimeraWeightList; // 0x18
		::Il2CppArray<::System::UInt32>* ShopItemWeightList; // 0x20
		::System::UInt32 ShopItemSlotCount; // 0x28
		::System::UInt32 ShopChimeraSlotCount; // 0x2C
		::System::UInt32 ShopItemGroup; // 0x30
		::System::UInt32 RoundID; // 0x34
		::System::UInt32 ShopChimeraGroup; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELROUNDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRoundRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRoundRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELROUNDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
