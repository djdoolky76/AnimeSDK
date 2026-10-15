#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJHNJIPKPHN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/System/Object.h"
class FGKKEIBIPDL;
namespace UnityEngine { class Transform; }

#define MJHPMAOIGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C8E0)

	class MJHPMAOIGPN : public ::System::Object
	{
	public:
		::FGKKEIBIPDL* KCOHHKFGEAG; // 0x10
		::UnityEngine::Transform* LLEGAGOPMJA; // 0x18
		::BJHNJIPKPHN JMDGIBDPMJF; // 0x20
		::System::Single IJCLFLDMOKD; // 0x28
		::System::Single KAIEOKOGECD; // 0x2C
		::RPG::Client::LittleGame::RoadRash::ECameraMode FCGFFAJIBKA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHPMAOIGPN_CTOR_OFFSET))(this);
		}

	};
