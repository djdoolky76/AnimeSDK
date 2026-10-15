#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideViewType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class TutorialGuideViewBinder; }
namespace RPG::Client { class TutorialGuideViewNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE33FC10)
#define RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_GET_NODELIST_OFFSET UNITYSDK_OFFSET(0xE33FBD0)
#define RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_GET_OFFSET UNITYSDK_OFFSET(0xE33FB00)

namespace RPG::Client
{
	class TutorialGuideViewBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::TutorialGuideViewType ViewType; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::TutorialGuideViewNode*>* _NodeList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TutorialGuideViewBinder* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::TutorialGuideViewBinder*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_GET_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TutorialGuideViewNode*>* get_NodeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TutorialGuideViewNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEVIEWBINDER_GET_NODELIST_OFFSET))(this);
		}

	};
}
