#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class SetTargetDirMove; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETDIRMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC5660)
#define RPG_GAMECORE_SETTARGETDIRMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5700)
#define RPG_GAMECORE_SETTARGETDIRMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC55A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDirMove_TypeDefinitionIndex = 20172;

	class SetTargetDirMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* StartPosTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* EndPosTarget; // 0x28
		::RPG::MVector3 StartOffset; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::RPG::GameCore::DynamicFloat* Duration; // 0x48
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDirMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDirMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDirMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDirMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
