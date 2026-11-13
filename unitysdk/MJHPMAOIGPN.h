#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJHNJIPKPHN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/System/Object.h"
class FGKKEIBIPDL;
namespace UnityEngine { class Transform; }

#define MJHPMAOIGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C263650)

inline static constexpr unsigned int MJHPMAOIGPN_TypeDefinitionIndex = 43877;

	class MJHPMAOIGPN : public ::System::Object
	{
	public:
		::FGKKEIBIPDL* KCOHHKFGEAG; // 0x10
		::BJHNJIPKPHN JMDGIBDPMJF; // 0x18
		::UnityEngine::Transform* LLEGAGOPMJA; // 0x20
		::RPG::Client::LittleGame::RoadRash::ECameraMode FCGFFAJIBKA; // 0x28
		::System::Single KAIEOKOGECD; // 0x2C
		::System::Single IJCLFLDMOKD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHPMAOIGPN_CTOR_OFFSET))(this);
		}

	};
