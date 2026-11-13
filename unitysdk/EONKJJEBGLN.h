#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixedBitsetBoolResult.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class BitArray; }

#define EONKJJEBGLN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x16B2BE30)
#define EONKJJEBGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x16B2B8A0)
#define EONKJJEBGLN_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x16B2BDD0)
#define EONKJJEBGLN_FEJIKOABGLF_OFFSET UNITYSDK_OFFSET(0x16B2BC80)
#define EONKJJEBGLN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16B2C280)
#define EONKJJEBGLN_JAMHJAEJHCO_OFFSET UNITYSDK_OFFSET(0x16B2BCE0)
#define EONKJJEBGLN_JIPHKLLCMOC_OFFSET UNITYSDK_OFFSET(0x16B2C020)
#define EONKJJEBGLN_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x16B2BBA0)
#define EONKJJEBGLN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16B2B9D0)
#define EONKJJEBGLN_LBJLLFINPAM_OFFSET UNITYSDK_OFFSET(0x16B2C150)
#define EONKJJEBGLN_NCONDODAJDN_OFFSET UNITYSDK_OFFSET(0x16B2BF60)
#define EONKJJEBGLN_OLHPIIMLHFM_OFFSET UNITYSDK_OFFSET(0x16B2BEF0)
#define EONKJJEBGLN_ONPCKAGJGON_OFFSET UNITYSDK_OFFSET(0x16B2B960)
#define EONKJJEBGLN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x16B2C290)

inline static constexpr unsigned int EONKJJEBGLN_TypeDefinitionIndex = 57551;

	class EONKJJEBGLN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* IBNNEONBIAO; // 0x10
		::System::Collections::BitArray* LLJGIEAHGHF; // 0x18
		::RPG::GameCore::FixedBitsetBoolResult MJHGBHMNHEJ; // 0x20
		::System::Boolean MJAIJNCMMLI; // 0x24
		::System::Boolean _Value_k__BackingField; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int32 JMCEABGIEGA; // 0x28
		::System::Int32 FNHBNJPEHPK; // 0x2C
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
