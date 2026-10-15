#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGHBGLNMFF.h"

#define IFEJKEEHJHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0C610)
#define IFEJKEEHJHP_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F0C5F0)
#define IFEJKEEHJHP_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F0C600)

inline static constexpr unsigned int IFEJKEEHJHP_TypeDefinitionIndex = 77581;

	class IFEJKEEHJHP : public ::GMGHBGLNMFF
	{
	public:
		::System::UInt32 _EventID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEJKEEHJHP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEJKEEHJHP_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEJKEEHJHP_SET_EVENTID_OFFSET))(this, a1);
		}

	};
