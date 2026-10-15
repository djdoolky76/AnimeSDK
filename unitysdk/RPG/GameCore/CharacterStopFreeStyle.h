#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterStopFreeStyle; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579780)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_IACFALNNPHJ_OFFSET UNITYSDK_OFFSET(0x1D5799D0)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D579790)
#define RPG_GAMECORE_CHARACTERSTOPFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterStopFreeStyle_TypeDefinitionIndex = 21908;

	class CharacterStopFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single NormalizedTransitionDuration; // 0x28
		::System::Boolean WaitTransitionFinish; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* LayerName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterStopFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterStopFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterStopFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterStopFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean IACFALNNPHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTOPFREESTYLE_IACFALNNPHJ_OFFSET))(this);
		}

	};
}
