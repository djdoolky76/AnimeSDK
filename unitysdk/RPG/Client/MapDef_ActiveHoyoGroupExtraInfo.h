#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAGAEJHEJH;
class DKFNBJOGFME;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD52C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 62080;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::BFAGAEJHEJH* InitServerGroupInfo; // 0x10
		::DKFNBJOGFME* RefreshServerGroupInfo; // 0x18
		::System::UInt32 ActiveSubMissionID; // 0x20
		::System::Boolean IsInitActiveHoyoGroup; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO_CTOR_OFFSET))(this);
		}

	};
}
