#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODFEEOMGBIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8A840)
#define ODFEEOMGBIB_GET_ENDLESSSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xBD8A7D0)
#define ODFEEOMGBIB_GET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xBD8A7E0)
#define ODFEEOMGBIB_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xBD8A820)
#define ODFEEOMGBIB_GET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0xBD8A7B0)
#define ODFEEOMGBIB_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xBD8A800)
#define ODFEEOMGBIB_GET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0xBD8A790)
#define ODFEEOMGBIB_SET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xBD8A7F0)
#define ODFEEOMGBIB_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xBD8A830)
#define ODFEEOMGBIB_SET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0xBD8A7C0)
#define ODFEEOMGBIB_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xBD8A810)
#define ODFEEOMGBIB_SET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0xBD8A7A0)

inline static constexpr unsigned int ODFEEOMGBIB_TypeDefinitionIndex = 79025;

	class ODFEEOMGBIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessStageIDList_k__BackingField; // 0x10
		::System::UInt32 _SurvivalFirstPassRewardQuestID_k__BackingField; // 0x18
		::System::UInt32 _SurvivalStageID_k__BackingField; // 0x1C
		::System::UInt32 _RaceFirstPassRewardQuestID_k__BackingField; // 0x20
		::System::UInt32 _RaceStageID_k__BackingField; // 0x24
		::System::UInt32 _MaxEndlessWaveCount_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SurvivalStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_SURVIVALSTAGEID_OFFSET))(this);
		}

		::System::Void set_SurvivalStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_SET_SURVIVALSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaceStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_RACESTAGEID_OFFSET))(this);
		}

		::System::Void set_RaceStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_SET_RACESTAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessStageIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_ENDLESSSTAGEIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxEndlessWaveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_MAXENDLESSWAVECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxEndlessWaveCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_SET_MAXENDLESSWAVECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SurvivalFirstPassRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this);
		}

		::System::Void set_SurvivalFirstPassRewardQuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaceFirstPassRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this);
		}

		::System::Void set_RaceFirstPassRewardQuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODFEEOMGBIB_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
		}

	};
