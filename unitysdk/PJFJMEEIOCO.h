#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEEDEDGCOI.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJFJMEEIOCO_CMLAFGNEMKN_OFFSET UNITYSDK_OFFSET(0xC27D830)
#define PJFJMEEIOCO_CTOR_OFFSET UNITYSDK_OFFSET(0xC27CBE0)
#define PJFJMEEIOCO_GET_FINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xC27D7E0)
#define PJFJMEEIOCO_GET_ISPLAYERNEWRECORD_OFFSET UNITYSDK_OFFSET(0xC27D7F0)
#define PJFJMEEIOCO_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0xC27D7C0)
#define PJFJMEEIOCO_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xC27D7D0)
#define PJFJMEEIOCO_GET_RACERANKING_OFFSET UNITYSDK_OFFSET(0xC27D820)
#define PJFJMEEIOCO_GET_RANKFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xC27D810)
#define PJFJMEEIOCO_KEKCHEBMIGI_1_OFFSET UNITYSDK_OFFSET(0xC27D1E0)
#define PJFJMEEIOCO_KEKCHEBMIGI_OFFSET UNITYSDK_OFFSET(0xC27CFF0)
#define PJFJMEEIOCO_SET_ISPLAYERNEWRECORD_OFFSET UNITYSDK_OFFSET(0xC27D800)

inline static constexpr unsigned int PJFJMEEIOCO_TypeDefinitionIndex = 81942;

	class PJFJMEEIOCO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GNEEDEDGCOI>* _RaceRanking_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* _RankFinishTimeSeconds_k__BackingField; // 0x18
		::System::Int32 _PlayerRank_k__BackingField; // 0x20
		::System::Single _FinishTimeSeconds_k__BackingField; // 0x24
		::System::UInt32 _MatchId_k__BackingField; // 0x28
		::System::Boolean _IsPlayerNewRecord_k__BackingField; // 0x2C
		// static const ::System::Object KAJAPKFEADN; // 0x0
		// static const ::System::Object HILJFNAIEMD; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>* a4, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_MatchId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_MATCHID_OFFSET))(this);
		}

		::System::Int32 get_PlayerRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_PLAYERRANK_OFFSET))(this);
		}

		::System::Single get_FinishTimeSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_FINISHTIMESECONDS_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_ISPLAYERNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsPlayerNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_SET_ISPLAYERNEWRECORD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_RankFinishTimeSeconds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_RANKFINISHTIMESECONDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GNEEDEDGCOI>* get_RaceRanking()
		{
			return ((::System::Collections::Generic::List_1<::GNEEDEDGCOI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_GET_RACERANKING_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* KEKCHEBMIGI(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_KEKCHEBMIGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* KEKCHEBMIGI_1(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a5)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_KEKCHEBMIGI_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single CMLAFGNEMKN(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PJFJMEEIOCO_CMLAFGNEMKN_OFFSET))(a1, a2);
		}

	};
