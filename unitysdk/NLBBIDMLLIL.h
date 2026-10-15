#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { template <typename T> class INewsTickerPoolableItemCreator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NLBBIDMLLIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC603C0)

	class NLBBIDMLLIL : public ::System::Object
	{
	public:
		static ::RPG::Client::INewsTickerPoolableItemCreator_1<::RPG::Client::NewsTickerItem*>* BPLPBPMEODA(::RPG::Client::NewsTicker_MoveDirectionType a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3)
		{
			return ((::RPG::Client::INewsTickerPoolableItemCreator_1<::RPG::Client::NewsTickerItem*>*(*)(::RPG::Client::NewsTicker_MoveDirectionType, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NLBBIDMLLIL_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
