#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveShotCameraTemplate; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34ABF0)
#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D34AC00)
#define RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D34ABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveShotCameraTemplate_TypeDefinitionIndex = 20828;

	class ActiveShotCameraTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TemplatePath; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* SecondTarget; // 0x28
		::RPG::GameCore::TargetEvaluator* FirstTarget; // 0x30
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveShotCameraTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveShotCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveShotCameraTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveShotCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVESHOTCAMERATEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
