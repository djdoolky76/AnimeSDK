#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleLayerList; }

#define RPG_GAMECORE_FREESTYLELAYERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4090)
#define RPG_GAMECORE_FREESTYLELAYERLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4050)

namespace RPG::GameCore
{
	class FreeStyleLayerList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLELAYERLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleLayerList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleLayerList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLELAYERLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
