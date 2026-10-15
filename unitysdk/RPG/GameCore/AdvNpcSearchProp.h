#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcSearchProp; }

#define RPG_GAMECORE_ADVNPCSEARCHPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37B7D0)
#define RPG_GAMECORE_ADVNPCSEARCHPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37B7E0)
#define RPG_GAMECORE_ADVNPCSEARCHPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37B710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcSearchProp_TypeDefinitionIndex = 19996;

	class AdvNpcSearchProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
