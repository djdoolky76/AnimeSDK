#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Action; }
namespace System { class Nullable; }

#define KGBHKDBKNLG_ADD_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDF20)
#define KGBHKDBKNLG_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDD70)
#define KGBHKDBKNLG_AHNHNBDCOLP_OFFSET UNITYSDK_OFFSET(0xB3CDCC0)
#define KGBHKDBKNLG_CPKOILJOBOB_OFFSET UNITYSDK_OFFSET(0xB3CDD00)
#define KGBHKDBKNLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB3CE000)
#define KGBHKDBKNLG_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0xB3CDE50)
#define KGBHKDBKNLG_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0xB3CDFE0)
#define KGBHKDBKNLG_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB3CDE30)
#define KGBHKDBKNLG_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0xB3CDCA0)
#define KGBHKDBKNLG_IEEAMJKIHMF_OFFSET UNITYSDK_OFFSET(0xB3CDE90)
#define KGBHKDBKNLG_REMOVE_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDF80)
#define KGBHKDBKNLG_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDDD0)
#define KGBHKDBKNLG_SET_ISLAST_OFFSET UNITYSDK_OFFSET(0xB3CDFF0)
#define KGBHKDBKNLG_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB3CDE40)
#define KGBHKDBKNLG_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0xB3CDCB0)

inline static constexpr unsigned int KGBHKDBKNLG_TypeDefinitionIndex = 79429;

	class KGBHKDBKNLG : public ::System::Object
	{
	public:
		::FKLECLLJCEH* _Trait_k__BackingField; // 0x10
		::System::Action* OnCurrentCountChanged; // 0x18
		::System::Action* OnIsCheckedChanged; // 0x20
		::System::Int32 _TargetCount_k__BackingField; // 0x28
		::System::Nullable* ADGBLJLHPPJ; // 0x2C
		::System::Boolean _IsLast_k__BackingField; // 0x34
		::System::Boolean PGNIIDNPONO; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_CTOR_OFFSET))(this);
		}

		::FKLECLLJCEH* get_Trait()
		{
			return ((::FKLECLLJCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::FKLECLLJCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_SET_TRAIT_OFFSET))(this, a1);
		}

		::System::Boolean AHNHNBDCOLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_AHNHNBDCOLP_OFFSET))(this);
		}

		::System::Void CPKOILJOBOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_CPKOILJOBOB_OFFSET))(this, a1);
		}

		::System::Void add_OnIsCheckedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_ADD_ONISCHECKEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsCheckedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_REMOVE_ONISCHECKEDCHANGED_OFFSET))(this, a1);
		}

		::System::Int32 get_TargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_GET_TARGETCOUNT_OFFSET))(this);
		}

		::System::Void set_TargetCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_SET_TARGETCOUNT_OFFSET))(this, a1);
		}

		::System::Nullable* EMLGPKHMCAA()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_EMLGPKHMCAA_OFFSET))(this);
		}

		::System::Void IEEAMJKIHMF(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_IEEAMJKIHMF_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentCountChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_ADD_ONCURRENTCOUNTCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentCountChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_REMOVE_ONCURRENTCOUNTCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_GET_ISLAST_OFFSET))(this);
		}

		::System::Void set_IsLast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_SET_ISLAST_OFFSET))(this, a1);
		}

	};
