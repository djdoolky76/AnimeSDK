#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveCommonSkillPool; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3498C0)
#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3498D0)
#define RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D349890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveCommonSkillPool_TypeDefinitionIndex = 23274;

	class ActiveCommonSkillPool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PoolNames; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveCommonSkillPool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveCommonSkillPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveCommonSkillPool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveCommonSkillPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVECOMMONSKILLPOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
