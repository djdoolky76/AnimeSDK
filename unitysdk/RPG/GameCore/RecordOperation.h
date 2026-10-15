#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordOperation; }

#define RPG_GAMECORE_RECORDOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D946610)
#define RPG_GAMECORE_RECORDOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D946380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordOperation_TypeDefinitionIndex = 18204;

	class RecordOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TurnCounter; // 0x10
		::RPG::GameCore::TurnState State; // 0x14
		::System::UInt32 OpCounter; // 0x18
		::System::UInt16 OpType; // 0x1C
		::System::Byte _padding0[0x2];
		::System::Int32 SkillIndex; // 0x20
		::System::UInt32 ActionEntityID; // 0x24
		::System::UInt32 TargetEntityID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
