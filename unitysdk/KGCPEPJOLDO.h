#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KGCPEPJOLDO;
namespace RPG::Client::NavMap { class IMapDataSource; }

#define KGCPEPJOLDO_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB3CE970)
#define KGCPEPJOLDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB3CE870)
#define KGCPEPJOLDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3CE9F0)
#define KGCPEPJOLDO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB3CE840)
#define KGCPEPJOLDO_HJBDDDLEGKE_OFFSET UNITYSDK_OFFSET(0xB3CE7F0)
#define KGCPEPJOLDO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB3CE860)

	class KGCPEPJOLDO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_CTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType HJBDDDLEGKE()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_HJBDDDLEGKE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_SET_POSITION_OFFSET))(this, a1);
		}

		static ::KGCPEPJOLDO* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::KGCPEPJOLDO*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::KGCPEPJOLDO* BPLPBPMEODA_1(::RPG::Client::NavMap::IMapDataSource* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::KGCPEPJOLDO*(*)(::RPG::Client::NavMap::IMapDataSource*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KGCPEPJOLDO_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

	};
