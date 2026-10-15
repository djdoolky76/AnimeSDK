#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchHandResetTransform; }

#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42AC0)
#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42AD0)
#define RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandResetTransform_TypeDefinitionIndex = 20958;

	class SwitchHandResetTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::RPG::GameCore::DynamicString* AnchorID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandResetTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandResetTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandResetTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandResetTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETTRANSFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
