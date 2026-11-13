#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::LittleGame::ComicDessert { class TransportFlightSettings; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTCURVEDEBUGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C372FE0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int TransportCurveDebugger_TypeDefinitionIndex = 79747;

	class TransportCurveDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* StartPoint; // 0x18
		::UnityEngine::Transform* EndPoint; // 0x20
		::RPG::Client::LittleGame::ComicDessert::TransportFlightSettings* Settings; // 0x28
		::System::Single PreviewT; // 0x30
		::System::Boolean Animate; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single AnimateSpeed; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* PreviewObject; // 0x40
		// static const ::System::Object PPPCLPHHIAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_TRANSPORTCURVEDEBUGGER_CTOR_OFFSET))(this);
		}

	};
}
