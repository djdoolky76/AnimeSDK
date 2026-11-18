#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JEANGJJIAOI_BBKPIJFOMFO_OFFSET UNITYSDK_OFFSET(0x791490)
#define JEANGJJIAOI_COHDMPBBMPO_1_OFFSET UNITYSDK_OFFSET(0x791910)
#define JEANGJJIAOI_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x791560)
#define JEANGJJIAOI_EKDEKEPHHKF_OFFSET UNITYSDK_OFFSET(0x791650)
#define JEANGJJIAOI_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEANGJJIAOI_FFGANCIEFCJ_OFFSET UNITYSDK_OFFSET(0x388A60)
#define JEANGJJIAOI_FOCDNMHJGEE_OFFSET UNITYSDK_OFFSET(0x359B10)
#define JEANGJJIAOI_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7913C0)
#define JEANGJJIAOI_KHCOPBMMNKA_OFFSET UNITYSDK_OFFSET(0x7914B0)
#define JEANGJJIAOI_KIONABBJDBJ_OFFSET UNITYSDK_OFFSET(0x791710)
#define JEANGJJIAOI_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x282350)
#define JEANGJJIAOI_MNIIFNAONLJ_OFFSET UNITYSDK_OFFSET(0x791640)
#define JEANGJJIAOI_NDBNFMMCJOK_OFFSET UNITYSDK_OFFSET(0x791840)
#define JEANGJJIAOI_OPEBMAJIEFD_OFFSET UNITYSDK_OFFSET(0x358B00)
#define JEANGJJIAOI_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7912D0)
#define JEANGJJIAOI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3962C0)
#define JEANGJJIAOI__CTOR_OFFSET UNITYSDK_OFFSET(0x7912A0)

inline static constexpr unsigned int JEANGJJIAOI_TypeDefinitionIndex = 91999;

struct alignas(4) JEANGJJIAOI
{
	::MoleMole::Vector2Int _ICKEBABNKEK_k__BackingField; // 0x10
	::MoleMole::Vector2Int _BOKALAOFEBN_k__BackingField; // 0x18
	::System::Int32 _KMKPALFAAPB_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 JNOMOFOMFEK, ::System::Int32 BGPJHNJKHIN, ::System::Int32 FINIAEFOGIK, ::System::Int32 PMEHNJABPAN, ::System::Int32 FKPMBCOBEPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEANGJJIAOI__CTOR_OFFSET))(this, JNOMOFOMFEK, BGPJHNJKHIN, FINIAEFOGIK, PMEHNJABPAN, FKPMBCOBEPB);
	}

	::System::Void _ctor_1(::MoleMole::Vector2Int GDBANLBHNJK, ::MoleMole::Vector2Int DNFNKBNBJHM, ::System::Int32 FKPMBCOBEPB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + JEANGJJIAOI__CTOR_1_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM, FKPMBCOBEPB);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void OPEBMAJIEFD(::MoleMole::Vector2Int EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JEANGJJIAOI_OPEBMAJIEFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FFGANCIEFCJ(::MoleMole::Vector2Int EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FFGANCIEFCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Vector2Int FCICGEALCFA()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 FOCDNMHJGEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FOCDNMHJGEE_OFFSET))(this);
	}

	/*
	::JEANGJJIAOI BBKPIJFOMFO(::MoleMole::Vector2Int LJIOPEEACPL)
	{
		return ((::JEANGJJIAOI(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JEANGJJIAOI_BBKPIJFOMFO_OFFSET))(this, LJIOPEEACPL);
	}
	*/

	::System::Int32 KHCOPBMMNKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_KHCOPBMMNKA_OFFSET))(this);
	}

	::MoleMole::Vector2Int LDIENHMALPL()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_LDIENHMALPL_OFFSET))(this);
	}

	::System::Boolean COHDMPBBMPO(::MoleMole::HollowChessboard::HollowCell HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JEANGJJIAOI_COHDMPBBMPO_OFFSET))(this, HFMHOELKCAJ);
	}

	::MoleMole::Vector2Int MNIIFNAONLJ()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_MNIIFNAONLJ_OFFSET))(this);
	}

	::MoleMole::Vector2Int EKDEKEPHHKF(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEANGJJIAOI_EKDEKEPHHKF_OFFSET))(this, ABHBKFJKINO);
	}

	::MoleMole::HollowChessboard::HollowCell KIONABBJDBJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEANGJJIAOI_KIONABBJDBJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NDBNFMMCJOK(::MoleMole::Vector2Int EKPEBNCLJPM)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JEANGJJIAOI_NDBNFMMCJOK_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Boolean COHDMPBBMPO_1(::MoleMole::Vector2Int HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JEANGJJIAOI_COHDMPBBMPO_1_OFFSET))(this, HFMHOELKCAJ);
	}
};
