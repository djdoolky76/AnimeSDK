#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLGICPNPKIC.h"
#include "unitysdk/System/ArraySegment_1.h"
class AENEFHBMEMJ;
class KLGICPNPKIC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BJABKDCINKK_BPKPLCLPDJA_OFFSET UNITYSDK_OFFSET(0x1C5309E0)
#define BJABKDCINKK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C530710)
#define BJABKDCINKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5318D0)
#define BJABKDCINKK_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0x1C530A20)
#define BJABKDCINKK_HHKHFHDJLHM_OFFSET UNITYSDK_OFFSET(0x1C530C70)
#define BJABKDCINKK_IIHPAGMJPDM_OFFSET UNITYSDK_OFFSET(0x1C531290)
#define BJABKDCINKK_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x1C530250)
#define BJABKDCINKK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C52FF60)
#define BJABKDCINKK_MFIOMKMOCDP_OFFSET UNITYSDK_OFFSET(0x1C5317F0)
#define BJABKDCINKK_MPHNMOGNEHL_OFFSET UNITYSDK_OFFSET(0x1C531760)
#define BJABKDCINKK_OHCAPGGOAGE_OFFSET UNITYSDK_OFFSET(0x1C531880)

	class BJABKDCINKK : public ::KLGICPNPKIC
	{
	public:
		::Il2CppArray<::KLGICPNPKIC*>* PMIBLDJPBCB; // 0x30
		::System::ArraySegment_1<::KLGICPNPKIC*> BLICIKDLKOC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJABKDCINKK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP_1(::System::Int32 a1, ::Il2CppArray<::KLGICPNPKIC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::KLGICPNPKIC*>*))((::PBYTE)hIl2Cpp + BJABKDCINKK_KPJGDHLENIP_1_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_CLEAR_OFFSET))(this);
		}

		::System::Int32 BPKPLCLPDJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_BPKPLCLPDJA_OFFSET))(this);
		}

		::KLGICPNPKIC* DHCECDODIJN(::System::Int32 a1)
		{
			return ((::KLGICPNPKIC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJABKDCINKK_DHCECDODIJN_OFFSET))(this, a1);
		}

		::System::Void HHKHFHDJLHM(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + BJABKDCINKK_HHKHFHDJLHM_OFFSET))(this, a1);
		}

		::System::Void IIHPAGMJPDM(::AENEFHBMEMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AENEFHBMEMJ*))((::PBYTE)hIl2Cpp + BJABKDCINKK_IIHPAGMJPDM_OFFSET))(this, a1);
		}

		::System::String* MPHNMOGNEHL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_MPHNMOGNEHL_OFFSET))(this);
		}

		::System::String* MFIOMKMOCDP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_MFIOMKMOCDP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KLGICPNPKIC*>* OHCAPGGOAGE()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KLGICPNPKIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_OHCAPGGOAGE_OFFSET))(this);
		}

	};
