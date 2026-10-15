#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WolfBroGunFire; }
namespace System { class String; }

#define RPG_GAMECORE_WOLFBROGUNFIRE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7F60)
#define RPG_GAMECORE_WOLFBROGUNFIRE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA7F70)
#define RPG_GAMECORE_WOLFBROGUNFIRE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA7F30)

namespace RPG::GameCore
{
	class WolfBroGunFire : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
