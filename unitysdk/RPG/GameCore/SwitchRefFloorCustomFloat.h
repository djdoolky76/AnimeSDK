#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchRefFloorCustomFloat; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45FE0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB45FF0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorCustomFloat_TypeDefinitionIndex = 17522;

	class SwitchRefFloorCustomFloat : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
