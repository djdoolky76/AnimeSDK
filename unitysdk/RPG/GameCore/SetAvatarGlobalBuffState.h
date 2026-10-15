#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetAvatarGlobalBuffState; }

#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA95D70)
#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA95DE0)
#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarGlobalBuffState_TypeDefinitionIndex = 22738;

	class SetAvatarGlobalBuffState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BuffID; // 0x18
		::RPG::GameCore::BoolEx IsActive; // 0x1C
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarGlobalBuffState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarGlobalBuffState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarGlobalBuffState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarGlobalBuffState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
