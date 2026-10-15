#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopAim; }
namespace System { class String; }

#define RPG_GAMECORE_STOPAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF6B30)
#define RPG_GAMECORE_STOPAIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF6B40)
#define RPG_GAMECORE_STOPAIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF6AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopAim_TypeDefinitionIndex = 22406;

	class StopAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AimerName; // 0x18
		::System::Single TransitTime; // 0x20
		::System::Boolean IsEffect; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* EffectPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
