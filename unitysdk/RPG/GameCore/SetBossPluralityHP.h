#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBossPluralityHP; }

#define RPG_GAMECORE_SETBOSSPLURALITYHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA98D80)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA98DE0)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA98CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBossPluralityHP_TypeDefinitionIndex = 22939;

	class SetBossPluralityHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* PluralityValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
