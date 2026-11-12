#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGNCONNFMHM;
class JBACCAGFHON;
namespace RPG::Client { class CakeRacePVEGameManager; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGNCONNFMHM_ALPAKGDECHG_OFFSET UNITYSDK_OFFSET(0x1694A4F0)
#define GGNCONNFMHM_APGLGDNCLKP_OFFSET UNITYSDK_OFFSET(0x1694AA40)
#define GGNCONNFMHM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1694A860)
#define GGNCONNFMHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1694A920)
#define GGNCONNFMHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1694A980)
#define GGNCONNFMHM_FJFPBNPPKEN_OFFSET UNITYSDK_OFFSET(0x1694A670)
#define GGNCONNFMHM_GEGCKPLPBHC_OFFSET UNITYSDK_OFFSET(0x1694AFB0)
#define GGNCONNFMHM_GEJGJECLMKL_OFFSET UNITYSDK_OFFSET(0x1694A6C0)
#define GGNCONNFMHM_GENGMGHNNNN_OFFSET UNITYSDK_OFFSET(0x1694A320)
#define GGNCONNFMHM_GET_DELTATIMEMS_OFFSET UNITYSDK_OFFSET(0x1694A7F0)
#define GGNCONNFMHM_HEFAMDHNAEL_OFFSET UNITYSDK_OFFSET(0x1694A790)
#define GGNCONNFMHM_HGNHONJPIHE_OFFSET UNITYSDK_OFFSET(0x1694B050)
#define GGNCONNFMHM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1694A9C0)
#define GGNCONNFMHM_LHJJIINNAPM_OFFSET UNITYSDK_OFFSET(0x1694B180)
#define GGNCONNFMHM_MMIMMGGHBNO_OFFSET UNITYSDK_OFFSET(0x1694A710)
#define GGNCONNFMHM_OABNBBBAFDP_OFFSET UNITYSDK_OFFSET(0x1694B110)
#define GGNCONNFMHM_OBJLAMLMGPP_OFFSET UNITYSDK_OFFSET(0x1694A810)
#define GGNCONNFMHM_PNFEMLPEKEP_OFFSET UNITYSDK_OFFSET(0x1694A3E0)
#define GGNCONNFMHM_SET_DELTATIMEMS_OFFSET UNITYSDK_OFFSET(0x1694A800)

inline static constexpr unsigned int GGNCONNFMHM_TypeDefinitionIndex = 80745;

	class GGNCONNFMHM : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::SortedList_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action*>*>* DIOPOIIBLNB; // 0x18
		::System::Int64 DILPPOANGMO; // 0x20
		::System::Int64 OAOLDDPLOPC; // 0x28
		::System::Int64 EPLIEMFEILP; // 0x30
		::System::Int64 EGAHLOHLJPK; // 0x38
		::System::UInt32 _DeltaTimeMs_k__BackingField; // 0x40
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GGNCONNFMHM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRacePVEGameManager* GENGMGHNNNN()
		{
			return ((::RPG::Client::CakeRacePVEGameManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_GENGMGHNNNN_OFFSET))(this);
		}

		::System::Int64 PNFEMLPEKEP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_PNFEMLPEKEP_OFFSET))(this);
		}

		::System::Int64 ALPAKGDECHG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_ALPAKGDECHG_OFFSET))(this);
		}

		::System::Int64 FJFPBNPPKEN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_FJFPBNPPKEN_OFFSET))(this);
		}

		::System::Int64 GEJGJECLMKL()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_GEJGJECLMKL_OFFSET))(this);
		}

		::System::Int64 MMIMMGGHBNO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_MMIMMGGHBNO_OFFSET))(this);
		}

		::System::Single HEFAMDHNAEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_HEFAMDHNAEL_OFFSET))(this);
		}

		::System::UInt32 get_DeltaTimeMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_GET_DELTATIMEMS_OFFSET))(this);
		}

		::System::Void set_DeltaTimeMs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGNCONNFMHM_SET_DELTATIMEMS_OFFSET))(this, a1);
		}

		::System::Single OBJLAMLMGPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_OBJLAMLMGPP_OFFSET))(this);
		}

		static ::GGNCONNFMHM* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::GGNCONNFMHM*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GGNCONNFMHM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGNCONNFMHM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GEGCKPLPBHC(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + GGNCONNFMHM_GEGCKPLPBHC_OFFSET))(this, a1, a2);
		}

		::System::Void HGNHONJPIHE(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + GGNCONNFMHM_HGNHONJPIHE_OFFSET))(this, a1, a2);
		}

		::System::Void OABNBBBAFDP(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + GGNCONNFMHM_OABNBBBAFDP_OFFSET))(this, a1, a2);
		}

		::System::Void LHJJIINNAPM(::System::Int64 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Action*))((::PBYTE)hIl2Cpp + GGNCONNFMHM_LHJJIINNAPM_OFFSET))(this, a1, a2);
		}

		::System::Void APGLGDNCLKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCONNFMHM_APGLGDNCLKP_OFFSET))(this);
		}

	};
