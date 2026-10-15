#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectAutoLayoutScale; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81880)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81890)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAutoLayoutScale_TypeDefinitionIndex = 23124;

	class SetEffectAutoLayoutScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Single Scale; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
