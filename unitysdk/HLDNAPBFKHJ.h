#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HLDNAPBFKHJ;
namespace RPG::Client::NavMap { class IMapDataSource; }

#define HLDNAPBFKHJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D507C0)
#define HLDNAPBFKHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D50970)
#define HLDNAPBFKHJ_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15D50760)
#define HLDNAPBFKHJ_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15D50780)
#define HLDNAPBFKHJ_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x15D507A0)
#define HLDNAPBFKHJ_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15D50730)
#define HLDNAPBFKHJ_HJBDDDLEGKE_OFFSET UNITYSDK_OFFSET(0x15D506E0)
#define HLDNAPBFKHJ_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15D50770)
#define HLDNAPBFKHJ_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15D50790)
#define HLDNAPBFKHJ_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x15D507B0)
#define HLDNAPBFKHJ_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x15D50750)

inline static constexpr unsigned int HLDNAPBFKHJ_TypeDefinitionIndex = 74577;

	class HLDNAPBFKHJ : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x14
		::System::UInt32 _InstanceID_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_CTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType HJBDDDLEGKE()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_HJBDDDLEGKE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_GET_LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::System::Void set_LittleGameEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
		}

		static ::HLDNAPBFKHJ* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::HLDNAPBFKHJ*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDNAPBFKHJ_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
