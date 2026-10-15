#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class FKKIAHNJCBC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LBIGIIDPPAK_ADD_ONSELECTEDPARTNERCHANGED_OFFSET UNITYSDK_OFFSET(0xB5FB4F0)
#define LBIGIIDPPAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FB9F0)
#define LBIGIIDPPAK_DALJHMNDLJK_OFFSET UNITYSDK_OFFSET(0xB5FB930)
#define LBIGIIDPPAK_DHDCNBGPNPO_OFFSET UNITYSDK_OFFSET(0xB5FB5B0)
#define LBIGIIDPPAK_GDAFDLAJJKG_OFFSET UNITYSDK_OFFSET(0xB5FB440)
#define LBIGIIDPPAK_HAAPMCCFIDJ_OFFSET UNITYSDK_OFFSET(0xB5FB4B0)
#define LBIGIIDPPAK_HLHBNPDDCME_OFFSET UNITYSDK_OFFSET(0xB5FB260)
#define LBIGIIDPPAK_IALCCDEIGOH_OFFSET UNITYSDK_OFFSET(0xB5FB710)
#define LBIGIIDPPAK_IDLDJJGMNLO_OFFSET UNITYSDK_OFFSET(0xB5FB7D0)
#define LBIGIIDPPAK_OBBILKCFGBA_OFFSET UNITYSDK_OFFSET(0xB5FB220)
#define LBIGIIDPPAK_REMOVE_ONSELECTEDPARTNERCHANGED_OFFSET UNITYSDK_OFFSET(0xB5FB550)
#define LBIGIIDPPAK__GET_SWITCHNEXTCOMMAND_B__21_0_OFFSET UNITYSDK_OFFSET(0xB5FBD00)
#define LBIGIIDPPAK__GET_SWITCHPREVCOMMAND_B__16_0_OFFSET UNITYSDK_OFFSET(0xB5FBA70)

	class LBIGIIDPPAK : public ::System::Object
	{
	public:
		::CEEGMMCFCBG* BAEHGOMJIND; // 0x10
		::CEEGMMCFCBG* IKKCNIADIOP; // 0x18
		::FKKIAHNJCBC* BKEICOOMOFG; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>* AMHJOGBABEE; // 0x28
		::System::Action* OnSelectedPartnerChanged; // 0x30
		::System::Int32 MOJFNNMLDNH; // 0x38
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>* a1, ::FKKIAHNJCBC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>*, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 OBBILKCFGBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_OBBILKCFGBA_OFFSET))(this);
		}

		::System::Void HLHBNPDDCME(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_HLHBNPDDCME_OFFSET))(this, a1);
		}

		::FKKIAHNJCBC* HAAPMCCFIDJ()
		{
			return ((::FKKIAHNJCBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_HAAPMCCFIDJ_OFFSET))(this);
		}

		::System::Void GDAFDLAJJKG(::FKKIAHNJCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_GDAFDLAJJKG_OFFSET))(this, a1);
		}

		::System::Void add_OnSelectedPartnerChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_ADD_ONSELECTEDPARTNERCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectedPartnerChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_REMOVE_ONSELECTEDPARTNERCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean DHDCNBGPNPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_DHDCNBGPNPO_OFFSET))(this);
		}

		::CEEGMMCFCBG* IALCCDEIGOH()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_IALCCDEIGOH_OFFSET))(this);
		}

		::System::Boolean IDLDJJGMNLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_IDLDJJGMNLO_OFFSET))(this);
		}

		::CEEGMMCFCBG* DALJHMNDLJK()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK_DALJHMNDLJK_OFFSET))(this);
		}

		::System::Void _get_SwitchPrevCommand_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK__GET_SWITCHPREVCOMMAND_B__16_0_OFFSET))(this);
		}

		::System::Void _get_SwitchNextCommand_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIGIIDPPAK__GET_SWITCHNEXTCOMMAND_B__21_0_OFFSET))(this);
		}

	};
