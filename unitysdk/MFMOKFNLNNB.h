#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJEGHJPAMPI.h"
#include "unitysdk/OHFECKKADEK.h"
#include "unitysdk/System/Object.h"
class ABEBEOKFKFF;
class IJJFBFPCBCI;
class OIHEIIDJOLI;
namespace RPG::Client { class ParkourRank; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFMOKFNLNNB_BEGGGLDBKOF_OFFSET UNITYSDK_OFFSET(0xB90C940)
#define MFMOKFNLNNB_BJAKDFDLLPH_OFFSET UNITYSDK_OFFSET(0xB90C6E0)
#define MFMOKFNLNNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB90C5F0)
#define MFMOKFNLNNB_GET_AIINFOS_OFFSET UNITYSDK_OFFSET(0xB90C560)
#define MFMOKFNLNNB_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xB90C4C0)
#define MFMOKFNLNNB_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xB90C570)
#define MFMOKFNLNNB_GET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xB90C5D0)
#define MFMOKFNLNNB_GET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xB90C4E0)
#define MFMOKFNLNNB_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB90C4A0)
#define MFMOKFNLNNB_GET_LEVELSTTS_OFFSET UNITYSDK_OFFSET(0xB90C540)
#define MFMOKFNLNNB_GET_PARKOURRANKS_OFFSET UNITYSDK_OFFSET(0xB90C550)
#define MFMOKFNLNNB_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB90C500)
#define MFMOKFNLNNB_GET_REASON_OFFSET UNITYSDK_OFFSET(0xB90C520)
#define MFMOKFNLNNB_GET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xB90C590)
#define MFMOKFNLNNB_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xB90C5B0)
#define MFMOKFNLNNB_LOIODEJCNHI_OFFSET UNITYSDK_OFFSET(0xB90C800)
#define MFMOKFNLNNB_PKMKGCKGEFO_OFFSET UNITYSDK_OFFSET(0xB90CA60)
#define MFMOKFNLNNB_SET_BALLID_OFFSET UNITYSDK_OFFSET(0xB90C4D0)
#define MFMOKFNLNNB_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0xB90C580)
#define MFMOKFNLNNB_SET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xB90C5E0)
#define MFMOKFNLNNB_SET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xB90C4F0)
#define MFMOKFNLNNB_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB90C4B0)
#define MFMOKFNLNNB_SET_RANK_OFFSET UNITYSDK_OFFSET(0xB90C510)
#define MFMOKFNLNNB_SET_REASON_OFFSET UNITYSDK_OFFSET(0xB90C530)
#define MFMOKFNLNNB_SET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xB90C5A0)
#define MFMOKFNLNNB_SET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xB90C5C0)

	class MFMOKFNLNNB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ABEBEOKFKFF*>* _LevelStts_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _ParkourRanks_k__BackingField; // 0x18
		::OIHEIIDJOLI* _Detail_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::IJJFBFPCBCI*>* _AiInfos_k__BackingField; // 0x28
		::System::UInt32 _LevelID_k__BackingField; // 0x30
		::System::UInt32 _Rank_k__BackingField; // 0x34
		::System::UInt32 _RestartCount_k__BackingField; // 0x38
		::System::UInt32 _TotalTime_k__BackingField; // 0x3C
		::System::UInt32 _DistanceToFinish_k__BackingField; // 0x40
		::System::UInt32 _ElapsedMs_k__BackingField; // 0x44
		::System::UInt32 _BallID_k__BackingField; // 0x48
		::OHFECKKADEK _Reason_k__BackingField; // 0x4C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::OIHEIIDJOLI* a5, ::OHFECKKADEK a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::OIHEIIDJOLI*, ::OHFECKKADEK, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_BALLID_OFFSET))(this);
		}

		::System::Void set_BallID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_BALLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ElapsedMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_ELAPSEDMS_OFFSET))(this);
		}

		::System::Void set_ElapsedMs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_ELAPSEDMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_RANK_OFFSET))(this, a1);
		}

		::OHFECKKADEK get_Reason()
		{
			return ((::OHFECKKADEK(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::OHFECKKADEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHFECKKADEK))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_REASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ABEBEOKFKFF*>* get_LevelStts()
		{
			return ((::System::Collections::Generic::List_1<::ABEBEOKFKFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_LEVELSTTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* get_ParkourRanks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_PARKOURRANKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IJJFBFPCBCI*>* get_AiInfos()
		{
			return ((::System::Collections::Generic::List_1<::IJJFBFPCBCI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_AIINFOS_OFFSET))(this);
		}

		::OIHEIIDJOLI* get_Detail()
		{
			return ((::OIHEIIDJOLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_DETAIL_OFFSET))(this);
		}

		::System::Void set_Detail(::OIHEIIDJOLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIHEIIDJOLI*))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_DETAIL_OFFSET))(this, a1);
		}

		::System::UInt32 get_RestartCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_RESTARTCOUNT_OFFSET))(this);
		}

		::System::Void set_RestartCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_RESTARTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_TOTALTIME_OFFSET))(this);
		}

		::System::Void set_TotalTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_TOTALTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_DistanceToFinish()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_GET_DISTANCETOFINISH_OFFSET))(this);
		}

		::System::Void set_DistanceToFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_SET_DISTANCETOFINISH_OFFSET))(this, a1);
		}

		::System::Void BJAKDFDLLPH(::EJEGHJPAMPI a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJEGHJPAMPI, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_BJAKDFDLLPH_OFFSET))(this, a1, a2);
		}

		::System::Void LOIODEJCNHI(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_LOIODEJCNHI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BEGGGLDBKOF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_BEGGGLDBKOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKMKGCKGEFO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMOKFNLNNB_PKMKGCKGEFO_OFFSET))(this, a1, a2);
		}

	};
