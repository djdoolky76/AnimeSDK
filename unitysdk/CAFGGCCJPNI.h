#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFKIEAGDHL;

#define CAFGGCCJPNI_CTOR_OFFSET UNITYSDK_OFFSET(0xC474660)
#define CAFGGCCJPNI_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0xC474630)
#define CAFGGCCJPNI_GET_ROUTEENDDATA_OFFSET UNITYSDK_OFFSET(0xC474640)
#define CAFGGCCJPNI_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xC474620)
#define CAFGGCCJPNI_GET_TEAMMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC474650)

inline static constexpr unsigned int CAFGGCCJPNI_TypeDefinitionIndex = 63877;

	class CAFGGCCJPNI : public ::System::Object
	{
	public:
		::GNFKIEAGDHL* _RouteEndData_k__BackingField; // 0x10
		::System::UInt32 _TeamMemberCount_k__BackingField; // 0x18
		::System::UInt32 _RouteID_k__BackingField; // 0x1C
		::System::UInt32 _LevelIndex_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::GNFKIEAGDHL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::GNFKIEAGDHL*))((::PBYTE)hIl2Cpp + CAFGGCCJPNI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFGGCCJPNI_GET_ROUTEID_OFFSET))(this);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFGGCCJPNI_GET_LEVELINDEX_OFFSET))(this);
		}

		::GNFKIEAGDHL* get_RouteEndData()
		{
			return ((::GNFKIEAGDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFGGCCJPNI_GET_ROUTEENDDATA_OFFSET))(this);
		}

		::System::UInt32 get_TeamMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFGGCCJPNI_GET_TEAMMEMBERCOUNT_OFFSET))(this);
		}

	};
