#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFollowLightDeviceDamp; }

#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86B30)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86B40)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFollowLightDeviceDamp_TypeDefinitionIndex = 22341;

	class SetFollowLightDeviceDamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean On; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
