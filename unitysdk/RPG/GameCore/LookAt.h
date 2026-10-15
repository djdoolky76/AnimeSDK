#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceDirectionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LookAt; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F3E20)
#define RPG_GAMECORE_LOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F3E70)
#define RPG_GAMECORE_LOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F3DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookAt_TypeDefinitionIndex = 22872;

	class LookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::FaceDirectionType TargetType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x28
		::System::Single ToTargetRatio; // 0x30
		::System::Single AngleOffset; // 0x34
		::System::Single Duration; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* SyncYawTargetType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
