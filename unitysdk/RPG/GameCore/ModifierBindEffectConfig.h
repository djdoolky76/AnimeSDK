#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierBindEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85FA40)
#define RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D85F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBindEffectConfig_TypeDefinitionIndex = 16487;

	class ModifierBindEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* BindEffectList; // 0x10
		::Il2CppArray<::System::String*>* TriggerEffectList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierBindEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierBindEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
