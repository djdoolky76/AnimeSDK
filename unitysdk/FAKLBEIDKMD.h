#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FAKLBEIDKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x156771F0)
#define FAKLBEIDKMD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x156771B0)
#define FAKLBEIDKMD_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x156771D0)
#define FAKLBEIDKMD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15677180)
#define FAKLBEIDKMD_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x156771C0)
#define FAKLBEIDKMD_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x156771E0)
#define FAKLBEIDKMD_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x156771A0)

inline static constexpr unsigned int FAKLBEIDKMD_TypeDefinitionIndex = 74591;

	class FAKLBEIDKMD : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x1C
		::System::UInt32 _GroupID_k__BackingField; // 0x20
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
