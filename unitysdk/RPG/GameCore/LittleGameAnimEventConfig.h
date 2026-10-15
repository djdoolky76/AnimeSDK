#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAnimEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF610)
#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AF660)
#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAnimEventConfig_TypeDefinitionIndex = 18844;

	class LittleGameAnimEventConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean EnableAnimEvent; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x18
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
