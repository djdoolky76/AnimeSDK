#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CEHBAPGFOJH;

#define CEHBAPGFOJH_ALJJIMKOKIE_OFFSET UNITYSDK_OFFSET(0xC9D5370)
#define CEHBAPGFOJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC9D5260)
#define CEHBAPGFOJH_CFFPGAIMKAE_OFFSET UNITYSDK_OFFSET(0xC9D5420)
#define CEHBAPGFOJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC9D5360)
#define CEHBAPGFOJH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC9D5230)
#define CEHBAPGFOJH_HJBDDDLEGKE_OFFSET UNITYSDK_OFFSET(0xC9D51D0)
#define CEHBAPGFOJH_PCGLHHKFPBJ_OFFSET UNITYSDK_OFFSET(0xC9D52E0)
#define CEHBAPGFOJH_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC9D5250)

inline static constexpr unsigned int CEHBAPGFOJH_TypeDefinitionIndex = 74575;

	class CEHBAPGFOJH : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_CTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType HJBDDDLEGKE()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_HJBDDDLEGKE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_SET_POSITION_OFFSET))(this, a1);
		}

		static ::CEHBAPGFOJH* BPLPBPMEODA()
		{
			return ((::CEHBAPGFOJH*(*)())((::PBYTE)hIl2Cpp + CEHBAPGFOJH_BPLPBPMEODA_OFFSET))();
		}

		static ::System::Boolean PCGLHHKFPBJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_PCGLHHKFPBJ_OFFSET))(a1);
		}

		static ::System::Boolean ALJJIMKOKIE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_ALJJIMKOKIE_OFFSET))(a1);
		}

		static ::System::Boolean CFFPGAIMKAE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEHBAPGFOJH_CFFPGAIMKAE_OFFSET))(a1);
		}

	};
