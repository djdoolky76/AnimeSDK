#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CBPFNLKLFLJ_BPLPBPMEODA_5_OFFSET UNITYSDK_OFFSET(0x1DD14C40)
#define CBPFNLKLFLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C43FD0)
#define CBPFNLKLFLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x2FA53B0)
#define CBPFNLKLFLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FA5550)
#define CBPFNLKLFLJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2FA52E0)
#define CBPFNLKLFLJ_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x2FA52C0)
#define CBPFNLKLFLJ_MBABPIHGAJN_1_OFFSET UNITYSDK_OFFSET(0x3C43F70)

inline static constexpr unsigned int CBPFNLKLFLJ_TypeDefinitionIndex = 6479;

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
