#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroUseBullet; }

#define RPG_GAMECORE_WOLFBROUSEBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x20809790)
#define RPG_GAMECORE_WOLFBROUSEBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208097A0)
#define RPG_GAMECORE_WOLFBROUSEBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208096D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroUseBullet_TypeDefinitionIndex = 21976;

	class WolfBroUseBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
