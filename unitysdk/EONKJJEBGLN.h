#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixedBitsetBoolResult.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class BitArray; }

#define EONKJJEBGLN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x155C9300)
#define EONKJJEBGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x155C8D70)
#define EONKJJEBGLN_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x155C92A0)
#define EONKJJEBGLN_FEJIKOABGLF_OFFSET UNITYSDK_OFFSET(0x155C9150)
#define EONKJJEBGLN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x155C9750)
#define EONKJJEBGLN_JAMHJAEJHCO_OFFSET UNITYSDK_OFFSET(0x155C91B0)
#define EONKJJEBGLN_JIPHKLLCMOC_OFFSET UNITYSDK_OFFSET(0x155C94F0)
#define EONKJJEBGLN_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x155C9070)
#define EONKJJEBGLN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x155C8EA0)
#define EONKJJEBGLN_LBJLLFINPAM_OFFSET UNITYSDK_OFFSET(0x155C9620)
#define EONKJJEBGLN_NCONDODAJDN_OFFSET UNITYSDK_OFFSET(0x155C9430)
#define EONKJJEBGLN_OLHPIIMLHFM_OFFSET UNITYSDK_OFFSET(0x155C93C0)
#define EONKJJEBGLN_ONPCKAGJGON_OFFSET UNITYSDK_OFFSET(0x155C8E30)
#define EONKJJEBGLN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x155C9760)

	class EONKJJEBGLN : public ::System::Object
	{
	public:
		::System::Collections::BitArray* LLJGIEAHGHF; // 0x10
		::Il2CppArray<::System::Boolean>* IBNNEONBIAO; // 0x18
		::System::Int32 JMCEABGIEGA; // 0x20
		::System::Int32 FNHBNJPEHPK; // 0x24
		::System::Boolean MJAIJNCMMLI; // 0x28
		::System::Boolean _Value_k__BackingField; // 0x29
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixedBitsetBoolResult MJHGBHMNHEJ; // 0x2C
		::System::Void _ctor(::RPG::GameCore::FixedBitsetBoolResult a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixedBitsetBoolResult, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EONKJJEBGLN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EONKJJEBGLN_KHGIKBFDLFB_1_OFFSET))(this, a1);
		}

		::System::Void FEJIKOABGLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EONKJJEBGLN_FEJIKOABGLF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EONKJJEBGLN_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EONKJJEBGLN_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Boolean OLHPIIMLHFM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EONKJJEBGLN_OLHPIIMLHFM_OFFSET))(this, a1);
		}

		::System::Void JAMHJAEJHCO(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EONKJJEBGLN_JAMHJAEJHCO_OFFSET))(this, a1, a2);
		}

		::System::Void ONPCKAGJGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_ONPCKAGJGON_OFFSET))(this);
		}

		::System::Void JIPHKLLCMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_JIPHKLLCMOC_OFFSET))(this);
		}

		::System::Void LBJLLFINPAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_LBJLLFINPAM_OFFSET))(this);
		}

		::System::Void NCONDODAJDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_NCONDODAJDN_OFFSET))(this);
		}

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EONKJJEBGLN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EONKJJEBGLN_SET_VALUE_OFFSET))(this, a1);
		}

	};
