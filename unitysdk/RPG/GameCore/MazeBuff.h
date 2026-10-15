#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D860170)
#define RPG_GAMECORE_MAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D860040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuff_TypeDefinitionIndex = 20417;

	class MazeBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BuffID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
