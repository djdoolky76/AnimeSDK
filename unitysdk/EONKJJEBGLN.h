#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixedBitsetBoolResult.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class BitArray; }

#define EONKJJEBGLN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x155BD940)
#define EONKJJEBGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x155BD3B0)
#define EONKJJEBGLN_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x155BD8E0)
#define EONKJJEBGLN_FEJIKOABGLF_OFFSET UNITYSDK_OFFSET(0x155BD790)
#define EONKJJEBGLN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x155BDD90)
#define EONKJJEBGLN_JAMHJAEJHCO_OFFSET UNITYSDK_OFFSET(0x155BD7F0)
#define EONKJJEBGLN_JIPHKLLCMOC_OFFSET UNITYSDK_OFFSET(0x155BDB30)
#define EONKJJEBGLN_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x155BD6B0)
#define EONKJJEBGLN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x155BD4E0)
#define EONKJJEBGLN_LBJLLFINPAM_OFFSET UNITYSDK_OFFSET(0x155BDC60)
#define EONKJJEBGLN_NCONDODAJDN_OFFSET UNITYSDK_OFFSET(0x155BDA70)
#define EONKJJEBGLN_OLHPIIMLHFM_OFFSET UNITYSDK_OFFSET(0x155BDA00)
#define EONKJJEBGLN_ONPCKAGJGON_OFFSET UNITYSDK_OFFSET(0x155BD470)
#define EONKJJEBGLN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x155BDDA0)

inline static constexpr unsigned int EONKJJEBGLN_TypeDefinitionIndex = 56337;

	class EONKJJEBGLN : public ::System::Object
	{
	public:
		::System::Collections::BitArray* LLJGIEAHGHF; // 0x10
		::Il2CppArray<::System::Boolean>* IBNNEONBIAO; // 0x18
		::System::Boolean _Value_k__BackingField; // 0x20
		::System::Boolean MJAIJNCMMLI; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 JMCEABGIEGA; // 0x24
		::System::Int32 FNHBNJPEHPK; // 0x28
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
