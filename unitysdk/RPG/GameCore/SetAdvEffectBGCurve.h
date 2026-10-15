#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class SetAdvEffectBGCurve; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTBGCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA65940)
#define RPG_GAMECORE_SETADVEFFECTBGCURVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA65950)
#define RPG_GAMECORE_SETADVEFFECTBGCURVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA65910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectBGCurve_TypeDefinitionIndex = 22321;

	class SetAdvEffectBGCurve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectBGCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectBGCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectBGCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectBGCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
