#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOBKBLJAOAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1B5C0)
#define GOBKBLJAOAE_GET_ID_OFFSET UNITYSDK_OFFSET(0x15B1B580)
#define GOBKBLJAOAE_GET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0x15B1B5A0)
#define GOBKBLJAOAE_SET_ID_OFFSET UNITYSDK_OFFSET(0x15B1B590)
#define GOBKBLJAOAE_SET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0x15B1B5B0)

inline static constexpr unsigned int GOBKBLJAOAE_TypeDefinitionIndex = 62138;

	class GOBKBLJAOAE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Waypoints_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GOBKBLJAOAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBKBLJAOAE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOBKBLJAOAE_SET_ID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_Waypoints()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBKBLJAOAE_GET_WAYPOINTS_OFFSET))(this);
		}

		::System::Void set_Waypoints(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GOBKBLJAOAE_SET_WAYPOINTS_OFFSET))(this, a1);
		}

	};
