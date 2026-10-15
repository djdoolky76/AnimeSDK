#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJIOJPKFAJ;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCD71920)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 71193;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NodeMaxHint; // 0x10
		::UnityEngine::Transform* NodeMax; // 0x18
		::UnityEngine::Transform* NodeDesc; // 0x20
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x28
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x30
		::UnityEngine::UI::Text* TotalDescText; // 0x38
		::UnityEngine::Transform* LineBottom; // 0x40
		::UnityEngine::UI::Text* TotalPointText; // 0x48
		::RPG::Client::NodeListViewPanel_1<::LDJIOJPKFAJ*>* ElationBuffList; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM_CTOR_OFFSET))(this);
		}

	};
}
