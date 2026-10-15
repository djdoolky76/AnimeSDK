#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureEntity; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CAPTUREENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D529890)
#define RPG_GAMECORE_CAPTUREENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5298A0)
#define RPG_GAMECORE_CAPTUREENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureEntity_TypeDefinitionIndex = 20820;

	class CaptureEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
