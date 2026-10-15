#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KJFIKOKBCCA_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD3E720)
#define KJFIKOKBCCA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DD3E840)
#define KJFIKOKBCCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C4C830)
#define KJFIKOKBCCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2FA5C90)
#define KJFIKOKBCCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FA5E30)
#define KJFIKOKBCCA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2FA5BC0)
#define KJFIKOKBCCA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x2FA5BA0)
#define KJFIKOKBCCA_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x3C4C7D0)

inline static constexpr unsigned int KJFIKOKBCCA_TypeDefinitionIndex = 6431;

	struct alignas(8) KJFIKOKBCCA
	{
		::ICFEIEJDMIB APKCDIIEJLO; // 0x10
		::System::Action_1<::ICFEIEJDMIB>* LGOENNFHOFE; // 0x98
		/*
		static ::KJFIKOKBCCA BBNJCKPKPDN(::System::Action* a1)
		{
			return ((::KJFIKOKBCCA(*)(::System::Action*))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_MBABPIHGAJN_OFFSET))(this);
		}

		/*
		static ::KJFIKOKBCCA BPLPBPMEODA(::System::Action* a1)
		{
			return ((::KJFIKOKBCCA(*)(::System::Action*))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::KJFIKOKBCCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIKOKBCCA_GETHASHCODE_OFFSET))(this);
		}

	};
