#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKFODPFGEA;

#define HBFPEEPJOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF61D0)
#define HBFPEEPJOPK_GET_CHALLENGEBESTTIME_OFFSET UNITYSDK_OFFSET(0x15BF61B0)
#define HBFPEEPJOPK_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x15BF6150)
#define HBFPEEPJOPK_GET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x15BF6170)
#define HBFPEEPJOPK_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x15BF6110)
#define HBFPEEPJOPK_GET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x15BF6190)
#define HBFPEEPJOPK_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x15BF6130)
#define HBFPEEPJOPK_SET_CHALLENGEBESTTIME_OFFSET UNITYSDK_OFFSET(0x15BF61C0)
#define HBFPEEPJOPK_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x15BF6160)
#define HBFPEEPJOPK_SET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x15BF6180)
#define HBFPEEPJOPK_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x15BF6120)
#define HBFPEEPJOPK_SET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x15BF61A0)
#define HBFPEEPJOPK_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x15BF6140)

inline static constexpr unsigned int HBFPEEPJOPK_TypeDefinitionIndex = 81935;

	class HBFPEEPJOPK : public ::System::Object
	{
	public:
		::KHKFODPFGEA* _NextAgendaDto_k__BackingField; // 0x10
		::System::Boolean _IsCycleFinished_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _MatchId_k__BackingField; // 0x1C
		::System::UInt32 _TrackId_k__BackingField; // 0x20
		::System::UInt32 _ChallengeBestTime_k__BackingField; // 0x24
		::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrackId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_TRACKID_OFFSET))(this);
		}

		::System::Void set_TrackId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_TRACKID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedMatchNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_FINISHEDMATCHNUM_OFFSET))(this);
		}

		::System::Void set_FinishedMatchNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCycleFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_ISCYCLEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCycleFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_ISCYCLEFINISHED_OFFSET))(this, a1);
		}

		::KHKFODPFGEA* get_NextAgendaDto()
		{
			return ((::KHKFODPFGEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_NEXTAGENDADTO_OFFSET))(this);
		}

		::System::Void set_NextAgendaDto(::KHKFODPFGEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKFODPFGEA*))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_NEXTAGENDADTO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeBestTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_GET_CHALLENGEBESTTIME_OFFSET))(this);
		}

		::System::Void set_ChallengeBestTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFPEEPJOPK_SET_CHALLENGEBESTTIME_OFFSET))(this, a1);
		}

	};
