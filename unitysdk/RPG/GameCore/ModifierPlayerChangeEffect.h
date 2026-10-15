#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierPlayerChangeEffect; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8611E0)
#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8611F0)
#define RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8611B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierPlayerChangeEffect_TypeDefinitionIndex = 20280;

	class ModifierPlayerChangeEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MaxDuration; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* TargetRendererNames; // 0x20
		::Il2CppArray<::RPG::FloatCurveFrame>* FloatKeyframes; // 0x28
		::Il2CppArray<::RPG::Vector3CurveFrame>* Vector3Keyframes; // 0x30
		::Il2CppArray<::RPG::Vector4CurveFrame>* Vector4Keyframes; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierPlayerChangeEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierPlayerChangeEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERPLAYERCHANGEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
