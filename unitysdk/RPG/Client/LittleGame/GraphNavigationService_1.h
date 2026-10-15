#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDJHEABHBG;
namespace RPG::Client::LittleGame { template <typename T> class NavigationRequest_1; }
namespace RPG::GameCore { class LittleGameWayPointGraphConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class GraphNavigationService_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsGraphIgnoreInvalidPoints; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _PendingInvalidPointIndexs; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _InvalidPointIndexs; // 0x0
		::UnityEngine::Transform* _Root; // 0x0
		::UnityEngine::GameObject* _BGCurvePrefabAsset; // 0x0
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* _BGCurveCache; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* _BgCurveMap; // 0x0
		::RPG::GameCore::LittleGameWayPointGraphConfig* _WayPointConfig; // 0x0
		::System::Object* _Graph; // 0x0
		::System::Int32 _GraphLength; // 0x0
		::PDDJHEABHBG* _Dijkstra; // 0x0
		::System::Collections::Generic::List_1<T>* _NavAgents; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::NavigationRequest_1<T>*>* _NavRequests; // 0x0
		static ::System::String** StaticGet__BGCurveProxyPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame", "GraphNavigationService`1")->GetStaticField(0x0);
		}

	};
}
