#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class PlacementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_BACKGROUNDLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9690)

namespace RPG::Client::LittleGame
{
	class BackgroundLayerConfig : public ::System::Object
	{
	public:
		::System::Int32 Layer; // 0x10
		::System::Single Speed; // 0x14
		::System::Boolean IsRail; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlacementConfig*>* PlacementConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BACKGROUNDLAYERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
