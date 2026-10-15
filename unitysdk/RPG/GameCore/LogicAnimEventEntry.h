#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace System { class String; }

#define RPG_GAMECORE_LOGICANIMEVENTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6280)
#define RPG_GAMECORE_LOGICANIMEVENTENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C6130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogicAnimEventEntry_TypeDefinitionIndex = 16295;

	class LogicAnimEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::String* AnimStateName; // 0x18
		::System::Single Time; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogicAnimEventEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogicAnimEventEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
