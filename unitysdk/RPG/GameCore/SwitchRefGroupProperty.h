#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchRefGroupProperty; }

#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB18AB0)
#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB18AC0)
#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB19170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGroupProperty_TypeDefinitionIndex = 17527;

	class SwitchRefGroupProperty : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* PropertyName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
