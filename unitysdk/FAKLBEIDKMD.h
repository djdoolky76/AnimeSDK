#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FAKLBEIDKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15682FC0)
#define FAKLBEIDKMD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15682F80)
#define FAKLBEIDKMD_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15682FA0)
#define FAKLBEIDKMD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15682F50)
#define FAKLBEIDKMD_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15682F90)
#define FAKLBEIDKMD_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15682FB0)
#define FAKLBEIDKMD_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x15682F70)

	class FAKLBEIDKMD : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x14
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAKLBEIDKMD_SET_INSTANCEID_OFFSET))(this, a1);
		}

	};
