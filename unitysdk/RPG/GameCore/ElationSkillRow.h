#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationSkillRow; }

#define RPG_GAMECORE_ELATIONSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6338D0)
#define RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D633250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillRow_TypeDefinitionIndex = 13219;

	class ElationSkillRow : public ::System::Object
	{
	public:
		::System::UInt32 ElationSkillID; // 0x10
		::System::Int32 PriorityValue; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
