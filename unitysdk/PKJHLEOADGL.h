#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class INFDNKHJDPP;
class KPMLCCHLLKG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define PKJHLEOADGL_ADD_ONSELECTEDINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xC2C2480)
#define PKJHLEOADGL_CKBIDFALIDG_OFFSET UNITYSDK_OFFSET(0xC2C2230)
#define PKJHLEOADGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C26C0)
#define PKJHLEOADGL_DALJHMNDLJK_OFFSET UNITYSDK_OFFSET(0xC2C2600)
#define PKJHLEOADGL_FHIBBCCFNKI_OFFSET UNITYSDK_OFFSET(0xC2C1C90)
#define PKJHLEOADGL_GET_TABALL_OFFSET UNITYSDK_OFFSET(0xC2C1C50)
#define PKJHLEOADGL_GET_TABRARITY1_OFFSET UNITYSDK_OFFSET(0xC2C1C80)
#define PKJHLEOADGL_GET_TABRARITY2_OFFSET UNITYSDK_OFFSET(0xC2C1C70)
#define PKJHLEOADGL_GET_TABRARITY3_OFFSET UNITYSDK_OFFSET(0xC2C1C60)
#define PKJHLEOADGL_HLHBNPDDCME_OFFSET UNITYSDK_OFFSET(0xC2C1E30)
#define PKJHLEOADGL_IALCCDEIGOH_OFFSET UNITYSDK_OFFSET(0xC2C2540)
#define PKJHLEOADGL_OBBILKCFGBA_OFFSET UNITYSDK_OFFSET(0xC2C1DF0)
#define PKJHLEOADGL_REMOVE_ONSELECTEDINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xC2C24E0)
#define PKJHLEOADGL__GET_SWITCHNEXTCOMMAND_B__28_0_OFFSET UNITYSDK_OFFSET(0xC2C37D0)
#define PKJHLEOADGL__GET_SWITCHPREVCOMMAND_B__25_0_OFFSET UNITYSDK_OFFSET(0xC2C3540)

	class PKJHLEOADGL : public ::System::Object
	{
	public:
		::INFDNKHJDPP* MDBCOONFKIL; // 0x10
		::KPMLCCHLLKG* _TabAll_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::KPMLCCHLLKG*>* GKFIAPLMDDN; // 0x20
		::KPMLCCHLLKG* _TabRarity1_k__BackingField; // 0x28
		::KPMLCCHLLKG* _TabRarity3_k__BackingField; // 0x30
		::CEEGMMCFCBG* BAEHGOMJIND; // 0x38
		::CEEGMMCFCBG* IKKCNIADIOP; // 0x40
		::KPMLCCHLLKG* _TabRarity2_k__BackingField; // 0x48
		::System::Action* OnSelectedIndexChanged; // 0x50
		::System::Int32 MOJFNNMLDNH; // 0x58
		::System::Void _ctor(::INFDNKHJDPP* a1, ::System::Collections::Immutable::IImmutableSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INFDNKHJDPP*, ::System::Collections::Immutable::IImmutableSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PKJHLEOADGL_CTOR_OFFSET))(this, a1, a2);
		}

		::KPMLCCHLLKG* get_TabAll()
		{
			return ((::KPMLCCHLLKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_GET_TABALL_OFFSET))(this);
		}

		::KPMLCCHLLKG* get_TabRarity3()
		{
			return ((::KPMLCCHLLKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_GET_TABRARITY3_OFFSET))(this);
		}

		::KPMLCCHLLKG* get_TabRarity2()
		{
			return ((::KPMLCCHLLKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_GET_TABRARITY2_OFFSET))(this);
		}

		::KPMLCCHLLKG* get_TabRarity1()
		{
			return ((::KPMLCCHLLKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_GET_TABRARITY1_OFFSET))(this);
		}

		::System::Boolean FHIBBCCFNKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_FHIBBCCFNKI_OFFSET))(this);
		}

		::System::Int32 OBBILKCFGBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_OBBILKCFGBA_OFFSET))(this);
		}

		::System::Void HLHBNPDDCME(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKJHLEOADGL_HLHBNPDDCME_OFFSET))(this, a1);
		}

		::System::Void add_OnSelectedIndexChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKJHLEOADGL_ADD_ONSELECTEDINDEXCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectedIndexChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKJHLEOADGL_REMOVE_ONSELECTEDINDEXCHANGED_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* IALCCDEIGOH()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_IALCCDEIGOH_OFFSET))(this);
		}

		::CEEGMMCFCBG* DALJHMNDLJK()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL_DALJHMNDLJK_OFFSET))(this);
		}

		::System::Void CKBIDFALIDG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKJHLEOADGL_CKBIDFALIDG_OFFSET))(this, a1);
		}

		::System::Void _get_SwitchPrevCommand_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL__GET_SWITCHPREVCOMMAND_B__25_0_OFFSET))(this);
		}

		::System::Void _get_SwitchNextCommand_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL__GET_SWITCHNEXTCOMMAND_B__28_0_OFFSET))(this);
		}

	};
