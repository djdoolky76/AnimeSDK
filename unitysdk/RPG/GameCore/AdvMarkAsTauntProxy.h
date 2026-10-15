#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvMarkAsTauntProxy; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVMARKASTAUNTPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D375990)
#define RPG_GAMECORE_ADVMARKASTAUNTPROXY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3759A0)
#define RPG_GAMECORE_ADVMARKASTAUNTPROXY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D375960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvMarkAsTauntProxy_TypeDefinitionIndex = 20562;

	class AdvMarkAsTauntProxy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* ProxyTargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvMarkAsTauntProxy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvMarkAsTauntProxy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvMarkAsTauntProxy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvMarkAsTauntProxy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
