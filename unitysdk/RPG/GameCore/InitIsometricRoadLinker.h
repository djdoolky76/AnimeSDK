#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class InitIsometricRoadLinker; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITISOMETRICROADLINKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D788430)
#define RPG_GAMECORE_INITISOMETRICROADLINKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D788460)
#define RPG_GAMECORE_INITISOMETRICROADLINKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7883E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitIsometricRoadLinker_TypeDefinitionIndex = 22204;

	class InitIsometricRoadLinker : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* DiffHeight; // 0x20
		::RPG::GameCore::DynamicFloat* ToSidePitch; // 0x28
		::RPG::GameCore::DynamicFloat* Priority; // 0x30
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x38
		::RPG::GameCore::DynamicString* ExceptOffsetKey; // 0x40
		::RPG::GameCore::DynamicString* ExceptScaleKey; // 0x48
		::RPG::GameCore::DynamicFloat* IsSide1ToTrigger; // 0x50
		::RPG::GameCore::DynamicFloat* IsSide2ToTrigger; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitIsometricRoadLinker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitIsometricRoadLinker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitIsometricRoadLinker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitIsometricRoadLinker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
