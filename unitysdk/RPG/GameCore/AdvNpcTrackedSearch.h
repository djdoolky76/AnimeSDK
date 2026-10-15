#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcTrackedSearch; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A93A0)
#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A93B0)
#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A9370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcTrackedSearch_TypeDefinitionIndex = 19994;

	class AdvNpcTrackedSearch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginAlert; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcTrackedSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcTrackedSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
