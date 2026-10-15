#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHAOLPGKOAP_CTOR_OFFSET UNITYSDK_OFFSET(0xEBB0670)
#define DHAOLPGKOAP_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0xEBB0630)
#define DHAOLPGKOAP_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0xEBB0650)
#define DHAOLPGKOAP_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0xEBB0640)
#define DHAOLPGKOAP_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0xEBB0660)

inline static constexpr unsigned int DHAOLPGKOAP_TypeDefinitionIndex = 81663;

	class DHAOLPGKOAP : public ::System::Object
	{
	public:
		::System::UInt32 _TrackID_k__BackingField; // 0x10
		::System::UInt32 _MatchID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAOLPGKOAP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAOLPGKOAP_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHAOLPGKOAP_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAOLPGKOAP_GET_TRACKID_OFFSET))(this);
		}

		::System::Void set_TrackID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHAOLPGKOAP_SET_TRACKID_OFFSET))(this, a1);
		}

	};
