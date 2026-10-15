#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CacheUI; }
namespace System { class String; }

#define RPG_GAMECORE_CACHEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5463A0)
#define RPG_GAMECORE_CACHEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5463B0)
#define RPG_GAMECORE_CACHEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D546370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CacheUI_TypeDefinitionIndex = 21702;

	class CacheUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PrefabPaths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CacheUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CacheUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
