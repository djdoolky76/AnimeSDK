#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PauseAnimatorReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
#include "unitysdk/System/Object.h"
class DJLDFCNNNHD;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBPMACLHLOP_CKMAEANHNHF_OFFSET UNITYSDK_OFFSET(0x1CA32B00)
#define EBPMACLHLOP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA33060)
#define EBPMACLHLOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA332C0)
#define EBPMACLHLOP_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x1CA32210)
#define EBPMACLHLOP_EBAOECKLNNL_OFFSET UNITYSDK_OFFSET(0x1CA32540)
#define EBPMACLHLOP_FFKCLDKICIN_OFFSET UNITYSDK_OFFSET(0x1CA32F10)
#define EBPMACLHLOP_FNAFKNCPDOI_OFFSET UNITYSDK_OFFSET(0x1CA32340)
#define EBPMACLHLOP_FOAMLKMHMGP_OFFSET UNITYSDK_OFFSET(0x1CA32B60)
#define EBPMACLHLOP_IEBPLNILIDN_OFFSET UNITYSDK_OFFSET(0x1CA32930)
#define EBPMACLHLOP_JCOCGDHMNBO_OFFSET UNITYSDK_OFFSET(0x1CA322F0)
#define EBPMACLHLOP_KINNOONJMFD_OFFSET UNITYSDK_OFFSET(0x1CA32230)
#define EBPMACLHLOP_LOKGFKLIFNE_OFFSET UNITYSDK_OFFSET(0x1CA32700)
#define EBPMACLHLOP_NINNKGFKMNJ_OFFSET UNITYSDK_OFFSET(0x1CA32D90)
#define EBPMACLHLOP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA33150)
#define EBPMACLHLOP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA33280)
#define EBPMACLHLOP_POOHEAJAGAG_OFFSET UNITYSDK_OFFSET(0x1CA32C70)

	class EBPMACLHLOP : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::System::Int32>* FNKKEKIPLMB; // 0x10
		::DJLDFCNNNHD* HPMOHHCLMBD; // 0x18
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32>* FLNHDGHDJKB; // 0x20
		::RPG::PoolList_1<::System::Action*>* LGBKLLCJIKH; // 0x28
		::RPG::PoolList_1<::System::Int32>* LHPHLHGFCFL; // 0x30
		::RPG::Client::LittleGame::FiveDim::PauseAnimatorReason OLKBNGKDJPN; // 0x38
		::System::Single FNMCLOFFLMJ; // 0x3C
		::System::Boolean JHHAJDKPLJH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_CTOR_OFFSET))(this);
		}

		::System::Single EANLMIKHCKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Void KINNOONJMFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_KINNOONJMFD_OFFSET))(this);
		}

		::System::Void JCOCGDHMNBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_JCOCGDHMNBO_OFFSET))(this);
		}

		::System::Int32 FNAFKNCPDOI(::RPG::Client::LittleGame::FiveDim::TimeScaleReason a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Single))((::PBYTE)hIl2Cpp + EBPMACLHLOP_FNAFKNCPDOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean EBAOECKLNNL(::RPG::Client::LittleGame::FiveDim::TimeScaleReason a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32))((::PBYTE)hIl2Cpp + EBPMACLHLOP_EBAOECKLNNL_OFFSET))(this, a1, a2);
		}

		::System::Int32 LOKGFKLIFNE(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + EBPMACLHLOP_LOKGFKLIFNE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IEBPLNILIDN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EBPMACLHLOP_IEBPLNILIDN_OFFSET))(this, a1, a2);
		}

		::System::Single CKMAEANHNHF(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + EBPMACLHLOP_CKMAEANHNHF_OFFSET))(this, a1);
		}

		::System::Void FOAMLKMHMGP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBPMACLHLOP_FOAMLKMHMGP_OFFSET))(this, a1);
		}

		::System::Boolean POOHEAJAGAG(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBPMACLHLOP_POOHEAJAGAG_OFFSET))(this, a1);
		}

		::System::Void NINNKGFKMNJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBPMACLHLOP_NINNKGFKMNJ_OFFSET))(this, a1);
		}

		::System::Boolean FFKCLDKICIN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBPMACLHLOP_FFKCLDKICIN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPMACLHLOP_ONRECYCLE_OFFSET))(this);
		}

	};
