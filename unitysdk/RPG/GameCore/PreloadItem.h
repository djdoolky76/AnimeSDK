#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadItem; }
namespace System { class String; }

#define RPG_GAMECORE_PRELOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93FAC0)
#define RPG_GAMECORE_PRELOADITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F9C0)

namespace RPG::GameCore
{
	class PreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::UInt32 Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
