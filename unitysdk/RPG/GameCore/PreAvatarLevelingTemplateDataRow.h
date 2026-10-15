#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreAvatarLevelingTemplateDataRow; }

#define RPG_GAMECORE_PREAVATARLEVELINGTEMPLATEDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D910BC0)
#define RPG_GAMECORE_PREAVATARLEVELINGTEMPLATEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9107D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreAvatarLevelingTemplateDataRow_TypeDefinitionIndex = 14557;

	class PreAvatarLevelingTemplateDataRow : public ::System::Object
	{
	public:
		::System::UInt32 BossMaterialAmount; // 0x10
		::System::UInt32 TracksDestinyAmount; // 0x14
		::System::UInt32 WorldMaterialMediumAmount; // 0x18
		::System::UInt32 SkillMaterialSmallAmount; // 0x1C
		::System::UInt32 WorldMaterialSmallAmount; // 0x20
		::System::UInt32 PromotionMaterialAmount; // 0x24
		::System::UInt32 ExpAmount; // 0x28
		::System::UInt32 TemplateID; // 0x2C
		::System::UInt32 CoinAmount; // 0x30
		::System::UInt32 WorldLevel; // 0x34
		::System::UInt32 WorldMaterialLargeAmount; // 0x38
		::System::UInt32 SkillMaterialMediumAmount; // 0x3C
		::System::UInt32 SkillMaterialLargeAmount; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARLEVELINGTEMPLATEDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARLEVELINGTEMPLATEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
