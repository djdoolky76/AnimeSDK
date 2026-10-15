#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBKFMPEMAJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB606E10)
#define LBKFMPEMAJF_GET_DAY_OFFSET UNITYSDK_OFFSET(0xB606DB0)
#define LBKFMPEMAJF_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0xB606DD0)
#define LBKFMPEMAJF_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0xB606DF0)
#define LBKFMPEMAJF_SET_DAY_OFFSET UNITYSDK_OFFSET(0xB606DC0)
#define LBKFMPEMAJF_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0xB606DE0)
#define LBKFMPEMAJF_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0xB606E00)

inline static constexpr unsigned int LBKFMPEMAJF_TypeDefinitionIndex = 81666;

	class LBKFMPEMAJF : public ::System::Object
	{
	public:
		::System::UInt32 _MatchID_k__BackingField; // 0x10
		::System::UInt32 _TrackID_k__BackingField; // 0x14
		::System::UInt32 _Day_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_GET_DAY_OFFSET))(this);
		}

		::System::Void set_Day(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_SET_DAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_MatchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_GET_TRACKID_OFFSET))(this);
		}

		::System::Void set_TrackID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKFMPEMAJF_SET_TRACKID_OFFSET))(this, a1);
		}

	};
