#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadItem; }
namespace RPG::GameCore { class PreloadItemList; }

#define RPG_GAMECORE_PRELOADITEMLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93FB90)
#define RPG_GAMECORE_PRELOADITEMLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93FAD0)

namespace RPG::GameCore
{
	class PreloadItemList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* PreloadList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadItemList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadItemList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
