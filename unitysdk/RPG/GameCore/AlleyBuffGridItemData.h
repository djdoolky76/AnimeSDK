#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyBuffGridItemData; }
namespace RPG::GameCore { class AlleyConditionExtendParam; }

#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2210)
#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B2220)
#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B29F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyBuffGridItemData_TypeDefinitionIndex = 15679;

	class AlleyBuffGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* UnlockConditions; // 0x20
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* RemoveConditions; // 0x28
		::System::UInt32 RegionID; // 0x30
		::System::Boolean IsHideNew; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 RelatedEventID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyBuffGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyBuffGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyBuffGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyBuffGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
