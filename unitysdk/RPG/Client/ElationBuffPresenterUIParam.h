#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJIOJPKFAJ;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x189B71D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 73175;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x10
		::UnityEngine::UI::Text* TotalDescText; // 0x18
		::RPG::Client::PrefabLoadMeta* PrefabLoadMeta; // 0x20
		::UnityEngine::UI::Text* TotalNihiluxDescText; // 0x28
		::UnityEngine::UI::Text* TextTitle; // 0x30
		::UnityEngine::Transform* NodeMaxHint; // 0x38
		::UnityEngine::Transform* LineBottom; // 0x40
		::UnityEngine::Transform* NodeDesc; // 0x48
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x50
		::RPG::Client::NodeListViewPanel_1<::LDJIOJPKFAJ*>* ElationBuffList; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM_CTOR_OFFSET))(this);
		}

	};
}
