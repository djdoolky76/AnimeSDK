#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleLayerList; }

#define RPG_GAMECORE_FREESTYLELAYERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C6610)
#define RPG_GAMECORE_FREESTYLELAYERLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C65D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleLayerList_TypeDefinitionIndex = 16319;

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
