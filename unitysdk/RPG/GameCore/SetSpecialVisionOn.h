#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSpecialVisionOn; }
namespace RPG::GameCore { class SmellPropConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETSPECIALVISIONON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC25C0)
#define RPG_GAMECORE_SETSPECIALVISIONON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC25F0)
#define RPG_GAMECORE_SETSPECIALVISIONON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSpecialVisionOn_TypeDefinitionIndex = 20513;

	class SetSpecialVisionOn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOn; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SpecialVisionType VisionType; // 0x1C
		::System::String* VisionEffectType; // 0x20
		::System::String* CameraEffectType; // 0x28
		::RPG::GameCore::SmellPropConfig* SmellProp; // 0x30
		::System::Boolean IsInfiniteTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSpecialVisionOn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSpecialVisionOn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSpecialVisionOn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSpecialVisionOn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
