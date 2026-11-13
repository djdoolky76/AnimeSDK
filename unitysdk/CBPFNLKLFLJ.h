#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CBPFNLKLFLJ_BPLPBPMEODA_5_OFFSET UNITYSDK_OFFSET(0x1798B010)
#define CBPFNLKLFLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3DE4CC0)
#define CBPFNLKLFLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A3B9D0)
#define CBPFNLKLFLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A3BB70)
#define CBPFNLKLFLJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3A3B900)
#define CBPFNLKLFLJ_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x3A3B8E0)
#define CBPFNLKLFLJ_MBABPIHGAJN_1_OFFSET UNITYSDK_OFFSET(0x3DE4C60)

inline static constexpr unsigned int CBPFNLKLFLJ_TypeDefinitionIndex = 6486;

	struct alignas(8) CBPFNLKLFLJ
	{
		::ICFEIEJDMIB APKCDIIEJLO; // 0x10
		::System::Func_2<::ICFEIEJDMIB, ::DGEPOBDMLDJ>* LGOENNFHOFE; // 0x98
		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_MBABPIHGAJN_1_OFFSET))(this);
		}

		/*
		static ::CBPFNLKLFLJ BPLPBPMEODA_5(::System::Action* a1)
		{
			return ((::CBPFNLKLFLJ(*)(::System::Action*))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_BPLPBPMEODA_5_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::CBPFNLKLFLJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBPFNLKLFLJ))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ_GETHASHCODE_OFFSET))(this);
		}

	};
