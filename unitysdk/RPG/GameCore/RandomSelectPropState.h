#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class RandomSelectPropState; }

#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96C850)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96C860)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96C820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectPropState_TypeDefinitionIndex = 22236;

	class RandomSelectPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* PropList; // 0x18
		::Il2CppArray<::RPG::GameCore::PropState>* ComparePropStateList; // 0x20
		::RPG::GameCore::DynamicString* CustomStringPrefix; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
