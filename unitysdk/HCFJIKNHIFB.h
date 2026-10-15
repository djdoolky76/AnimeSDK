#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::GameCore { class GameEntity; }

#define HCFJIKNHIFB_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x15C0D7A0)
#define HCFJIKNHIFB_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C0D6F0)
#define HCFJIKNHIFB_CPMHLMGBACH_OFFSET UNITYSDK_OFFSET(0x15C0D970)
#define HCFJIKNHIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0DA90)
#define HCFJIKNHIFB_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0x15C0D680)
#define HCFJIKNHIFB_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x15C0D870)
#define HCFJIKNHIFB_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x15C0D740)
#define HCFJIKNHIFB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C0D8D0)
#define HCFJIKNHIFB_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x15C0D830)
#define HCFJIKNHIFB_NODGFNIECHM_OFFSET UNITYSDK_OFFSET(0x15C0D910)
#define HCFJIKNHIFB_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15C0D7F0)

inline static constexpr unsigned int HCFJIKNHIFB_TypeDefinitionIndex = 60808;

	class HCFJIKNHIFB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::Client::EntityTimelineControlNode* AIGNMECODDJ; // 0x18
		::System::Single PIKFJLPGJJF; // 0x20
		::System::Single KBDPMBDJIOF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_CTOR_OFFSET))(this);
		}

		::System::Void EICIBKHOECO(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::Client::EntityTimelineControlNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_EICIBKHOECO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Single NODGFNIECHM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_NODGFNIECHM_OFFSET))(this);
		}

		::System::Single CPMHLMGBACH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJIKNHIFB_CPMHLMGBACH_OFFSET))(this);
		}

	};
