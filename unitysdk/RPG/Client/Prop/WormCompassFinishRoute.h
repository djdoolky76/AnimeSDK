#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD7490)
#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_DGCGLNOLDIB_1_OFFSET UNITYSDK_OFFSET(0xDDD7200)
#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xDDD70F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassFinishRoute_TypeDefinitionIndex = 78924;

	class WormCompassFinishRoute : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* Path; // 0x10
		::System::String* RouteName; // 0x18
		::System::Int16 SavedGroupPropertyValue; // 0x20
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::Int32>* TargetCols; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_CTOR_OFFSET))(this);
		}

		::System::Boolean DGCGLNOLDIB(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean DGCGLNOLDIB_1(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_DGCGLNOLDIB_1_OFFSET))(this, a1, a2);
		}

	};
}
