#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarUseMaterialDataRow; }

#define RPG_GAMECORE_AVATARUSEMATERIALDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4319E0)
#define RPG_GAMECORE_AVATARUSEMATERIALDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D431720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarUseMaterialDataRow_TypeDefinitionIndex = 12767;

	class AvatarUseMaterialDataRow : public ::System::Object
	{
	public:
		::System::UInt32 SkillMaterialSmall; // 0x10
		::System::UInt32 BossMaterial; // 0x14
		::System::UInt32 SkillMaterialLarge; // 0x18
		::System::UInt32 SkillMaterialMedium; // 0x1C
		::System::UInt32 WorldMaterialLarge; // 0x20
		::System::UInt32 WorldMaterialSmall; // 0x24
		::System::UInt32 WorldMaterialMedium; // 0x28
		::System::UInt32 PromotionMaterial; // 0x2C
		::System::UInt32 AvatarID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARUSEMATERIALDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarUseMaterialDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarUseMaterialDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARUSEMATERIALDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
