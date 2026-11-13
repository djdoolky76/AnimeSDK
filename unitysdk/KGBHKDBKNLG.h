#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Action; }

#define KGBHKDBKNLG_ADD_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x17710350)
#define KGBHKDBKNLG_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0x177101A0)
#define KGBHKDBKNLG_AHNHNBDCOLP_OFFSET UNITYSDK_OFFSET(0x177100F0)
#define KGBHKDBKNLG_CPKOILJOBOB_OFFSET UNITYSDK_OFFSET(0x17710130)
#define KGBHKDBKNLG_CTOR_OFFSET UNITYSDK_OFFSET(0x17710430)
#define KGBHKDBKNLG_EMLGPKHMCAA_OFFSET UNITYSDK_OFFSET(0x17710280)
#define KGBHKDBKNLG_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0x17710410)
#define KGBHKDBKNLG_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x17710260)
#define KGBHKDBKNLG_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x177100D0)
#define KGBHKDBKNLG_IEEAMJKIHMF_OFFSET UNITYSDK_OFFSET(0x177102C0)
#define KGBHKDBKNLG_REMOVE_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x177103B0)
#define KGBHKDBKNLG_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0x17710200)
#define KGBHKDBKNLG_SET_ISLAST_OFFSET UNITYSDK_OFFSET(0x17710420)
#define KGBHKDBKNLG_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x17710270)
#define KGBHKDBKNLG_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x177100E0)

inline static constexpr unsigned int KGBHKDBKNLG_TypeDefinitionIndex = 82205;

	class KGBHKDBKNLG : public ::System::Object
	{
	public:
		::System::Action* OnIsCheckedChanged; // 0x10
		::System::Action* OnCurrentCountChanged; // 0x18
		::FKLECLLJCEH* _Trait_k__BackingField; // 0x20
		::System::Nullable_1<::System::Int32> ADGBLJLHPPJ; // 0x28
		::System::Boolean _IsLast_k__BackingField; // 0x30
		::System::Boolean PGNIIDNPONO; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 _TargetCount_k__BackingField; // 0x34
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

		::System::Nullable_1<::System::Int32> EMLGPKHMCAA()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_EMLGPKHMCAA_OFFSET))(this);
		}

		::System::Void IEEAMJKIHMF(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + KGBHKDBKNLG_IEEAMJKIHMF_OFFSET))(this, a1);
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
