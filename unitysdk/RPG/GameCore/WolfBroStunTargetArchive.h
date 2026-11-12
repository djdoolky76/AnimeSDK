#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroStunTargetArchive; }

#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBBC40)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEBBC50)
#define RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEBBC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroStunTargetArchive_TypeDefinitionIndex = 22382;

	class WolfBroStunTargetArchive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSTUNTARGETARCHIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
