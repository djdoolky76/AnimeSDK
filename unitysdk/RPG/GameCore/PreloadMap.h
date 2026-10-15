#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadMap; }

#define RPG_GAMECORE_PRELOADMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9127C0)
#define RPG_GAMECORE_PRELOADMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9127D0)
#define RPG_GAMECORE_PRELOADMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadMap_TypeDefinitionIndex = 21873;

	class PreloadMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::RPG::GameCore::PlaneType PlaneType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
