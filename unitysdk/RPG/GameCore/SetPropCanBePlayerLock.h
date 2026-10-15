#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPropCanBePlayerLock; }
namespace System { class String; }

#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91D10)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91D20)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropCanBePlayerLock_TypeDefinitionIndex = 22245;

	class SetPropCanBePlayerLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CanBeLock; // 0x18
		::System::Boolean UseForOwner; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* UniqueName; // 0x20
		::System::UInt32 PropID; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
