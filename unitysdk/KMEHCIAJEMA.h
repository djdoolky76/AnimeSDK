#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class KMEHCIAJEMA;
namespace RPG::GameCore { class GameEntity; }

#define KMEHCIAJEMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB545000)
#define KMEHCIAJEMA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB544FB0)
#define KMEHCIAJEMA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB544F60)
#define KMEHCIAJEMA_GET_ISINVOLUME_OFFSET UNITYSDK_OFFSET(0xB544F40)
#define KMEHCIAJEMA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB544EE0)
#define KMEHCIAJEMA_SET_ISINVOLUME_OFFSET UNITYSDK_OFFSET(0xB544F50)

inline static constexpr unsigned int KMEHCIAJEMA_TypeDefinitionIndex = 56675;

	class KMEHCIAJEMA : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x18
		::System::Boolean _IsInVolume_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_CTOR_OFFSET))(this);
		}

		::KMEHCIAJEMA* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::KMEHCIAJEMA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsInVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_GET_ISINVOLUME_OFFSET))(this);
		}

		::System::Void set_IsInVolume(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_SET_ISINVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHCIAJEMA_GETEVENTTYPE_OFFSET))(this);
		}

	};
