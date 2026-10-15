#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvForceNpcGoBack; }

#define RPG_GAMECORE_ADVFORCENPCGOBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FEC0)
#define RPG_GAMECORE_ADVFORCENPCGOBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39FED0)
#define RPG_GAMECORE_ADVFORCENPCGOBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39FE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvForceNpcGoBack_TypeDefinitionIndex = 21961;

	class AdvForceNpcGoBack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvForceNpcGoBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvForceNpcGoBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvForceNpcGoBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvForceNpcGoBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
