#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAvatarDetachableEnable; }

#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA95B90)
#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA95BA0)
#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarDetachableEnable_TypeDefinitionIndex = 20760;

	class SetAvatarDetachableEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DetachableEnable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarDetachableEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarDetachableEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarDetachableEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarDetachableEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
