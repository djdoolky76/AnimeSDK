#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialBpFeature; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALBPFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD9C0)
#define RPG_GAMECORE_SPECIALBPFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAFD840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialBpFeature_TypeDefinitionIndex = 23222;

	class SpecialBpFeature : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ModifierName; // 0x10
		::System::String* SpecialBpPriority; // 0x18
		::RPG::GameCore::SpecialBPDisplayStyle DisplayStyle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALBPFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialBpFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALBPFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
