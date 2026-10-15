#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDestroyGroupEntity; }

#define RPG_GAMECORE_ADVDESTROYGROUPENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B100)
#define RPG_GAMECORE_ADVDESTROYGROUPENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39B110)
#define RPG_GAMECORE_ADVDESTROYGROUPENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39B0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDestroyGroupEntity_TypeDefinitionIndex = 20287;

	class AdvDestroyGroupEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
