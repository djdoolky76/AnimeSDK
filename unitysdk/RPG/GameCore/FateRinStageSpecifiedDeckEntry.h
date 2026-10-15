#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinStageSpecifiedDeckEntry; }

#define RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69EBF0)
#define RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69EA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinStageSpecifiedDeckEntry_TypeDefinitionIndex = 18153;

	class FateRinStageSpecifiedDeckEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* DeckIDList; // 0x18
		::Il2CppArray<::System::UInt32>* FixedOrderList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinStageSpecifiedDeckEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinStageSpecifiedDeckEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINSTAGESPECIFIEDDECKENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
