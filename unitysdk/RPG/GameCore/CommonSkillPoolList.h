#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommonSkillPool; }
namespace RPG::GameCore { class CommonSkillPoolList; }

#define RPG_GAMECORE_COMMONSKILLPOOLLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC6B0)
#define RPG_GAMECORE_COMMONSKILLPOOLLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CC5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkillPoolList_TypeDefinitionIndex = 18151;

	class CommonSkillPoolList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CommonSkillPool*>* PoolList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOLLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonSkillPoolList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonSkillPoolList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOLLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
