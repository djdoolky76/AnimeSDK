#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReleaseCacheUI; }
namespace System { class String; }

#define RPG_GAMECORE_RELEASECACHEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A000)
#define RPG_GAMECORE_RELEASECACHEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94A010)
#define RPG_GAMECORE_RELEASECACHEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCacheUI_TypeDefinitionIndex = 21703;

	class ReleaseCacheUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCacheUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCacheUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
