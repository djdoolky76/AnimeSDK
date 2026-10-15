#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddGlobalDynamicOffsetIgnoreEntity; }

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35A430)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35A440)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35A3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffsetIgnoreEntity_TypeDefinitionIndex = 22510;

	class AddGlobalDynamicOffsetIgnoreEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18
		::System::Boolean OnlyIgnoreGlobalDynamicOffset; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
