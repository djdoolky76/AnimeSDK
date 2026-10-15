#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define RPG_GAMECORE_CHENLINGENCHANTLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55E440)
#define RPG_GAMECORE_CHENLINGENCHANTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55E290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnchantLevelRow_TypeDefinitionIndex = 11067;

	class ChenLingEnchantLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 EffectID; // 0x14
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingEnchantLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingEnchantLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
