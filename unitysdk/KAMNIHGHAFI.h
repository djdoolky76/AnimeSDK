#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define KAMNIHGHAFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D8210)
#define KAMNIHGHAFI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB2D81C0)
#define KAMNIHGHAFI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB2D8170)

inline static constexpr unsigned int KAMNIHGHAFI_TypeDefinitionIndex = 56672;

	class KAMNIHGHAFI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x10
		::System::Object* LBJJPCCEHLF; // 0x18
		::System::String* DHMDAEKJENF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMNIHGHAFI_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMNIHGHAFI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMNIHGHAFI_GETEVENTTYPE_OFFSET))(this);
		}

	};
