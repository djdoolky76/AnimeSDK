#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DCNNAGMLENM_CTOR_OFFSET UNITYSDK_OFFSET(0xEE0D830)
#define DCNNAGMLENM_GET_ISCHALLENGE_OFFSET UNITYSDK_OFFSET(0xEE0D810)
#define DCNNAGMLENM_GET_ISFIRSTSEASONMATCH_OFFSET UNITYSDK_OFFSET(0xEE0D7F0)
#define DCNNAGMLENM_GET_ISSEASONAGENDA_OFFSET UNITYSDK_OFFSET(0xEE0D7D0)
#define DCNNAGMLENM_GET_MATCHCONFIGID_OFFSET UNITYSDK_OFFSET(0xEE0D770)
#define DCNNAGMLENM_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xEE0D790)
#define DCNNAGMLENM_GET_TRACKCONFIGID_OFFSET UNITYSDK_OFFSET(0xEE0D7B0)
#define DCNNAGMLENM_KJGLKFOHNPH_OFFSET UNITYSDK_OFFSET(0xEE0D6A0)
#define DCNNAGMLENM_SET_ISCHALLENGE_OFFSET UNITYSDK_OFFSET(0xEE0D820)
#define DCNNAGMLENM_SET_ISFIRSTSEASONMATCH_OFFSET UNITYSDK_OFFSET(0xEE0D800)
#define DCNNAGMLENM_SET_ISSEASONAGENDA_OFFSET UNITYSDK_OFFSET(0xEE0D7E0)
#define DCNNAGMLENM_SET_MATCHCONFIGID_OFFSET UNITYSDK_OFFSET(0xEE0D780)
#define DCNNAGMLENM_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xEE0D7A0)
#define DCNNAGMLENM_SET_TRACKCONFIGID_OFFSET UNITYSDK_OFFSET(0xEE0D7C0)

inline static constexpr unsigned int DCNNAGMLENM_TypeDefinitionIndex = 84464;

	class DCNNAGMLENM : public ::System::Object
	{
	public:
		::System::Boolean _IsFirstSeasonMatch_k__BackingField; // 0x10
		::System::Boolean _IsSeasonAgenda_k__BackingField; // 0x11
		::System::Boolean _IsChallenge_k__BackingField; // 0x12
		::System::Byte _padding0[0x1];
		::System::UInt32 _SessionId_k__BackingField; // 0x14
		::System::UInt32 _TrackConfigId_k__BackingField; // 0x18
		::System::UInt32 _MatchConfigId_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_CTOR_OFFSET))(this);
		}

		::System::String* KJGLKFOHNPH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_KJGLKFOHNPH_OFFSET))(this);
		}

		::System::UInt32 get_MatchConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_MATCHCONFIGID_OFFSET))(this);
		}

		::System::Void set_MatchConfigId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_MATCHCONFIGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SessionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrackConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_TRACKCONFIGID_OFFSET))(this);
		}

		::System::Void set_TrackConfigId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_TRACKCONFIGID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSeasonAgenda()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_ISSEASONAGENDA_OFFSET))(this);
		}

		::System::Void set_IsSeasonAgenda(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_ISSEASONAGENDA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstSeasonMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_ISFIRSTSEASONMATCH_OFFSET))(this);
		}

		::System::Void set_IsFirstSeasonMatch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_ISFIRSTSEASONMATCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNNAGMLENM_GET_ISCHALLENGE_OFFSET))(this);
		}

		::System::Void set_IsChallenge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNNAGMLENM_SET_ISCHALLENGE_OFFSET))(this, a1);
		}

	};
