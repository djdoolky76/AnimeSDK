#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABHHLGLKCNO;
class DBIAFBMMBBA;
class HPNFJGOCNLC;
class IIIBPJDFPLJ;
class KCPJAAHHPGK;
class MCPCIKHFBIO;
class OJOHBFMIDJD;
class PDMBLCALNPD;

#define HFBJCGFABAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16BADFE0)
#define HFBJCGFABAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BADEA0)
#define HFBJCGFABAO_GET_ATTRTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0x16BADDE0)
#define HFBJCGFABAO_GET_ATTR_OFFSET UNITYSDK_OFFSET(0x16BADDA0)
#define HFBJCGFABAO_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x16BADE80)
#define HFBJCGFABAO_GET_EXAMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x16BADE20)
#define HFBJCGFABAO_GET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x16BADE60)
#define HFBJCGFABAO_GET_ORDERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x16BADE00)
#define HFBJCGFABAO_GET_OVERLAP_OFFSET UNITYSDK_OFFSET(0x16BADE40)
#define HFBJCGFABAO_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x16BADDC0)
#define HFBJCGFABAO_SET_ATTRTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0x16BADDF0)
#define HFBJCGFABAO_SET_ATTR_OFFSET UNITYSDK_OFFSET(0x16BADDB0)
#define HFBJCGFABAO_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x16BADE90)
#define HFBJCGFABAO_SET_EXAMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x16BADE30)
#define HFBJCGFABAO_SET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x16BADE70)
#define HFBJCGFABAO_SET_ORDERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x16BADE10)
#define HFBJCGFABAO_SET_OVERLAP_OFFSET UNITYSDK_OFFSET(0x16BADE50)
#define HFBJCGFABAO_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x16BADDD0)

inline static constexpr unsigned int HFBJCGFABAO_TypeDefinitionIndex = 82359;

	class HFBJCGFABAO : public ::System::Object
	{
	public:
		::HPNFJGOCNLC* _Board_k__BackingField; // 0x10
		::ABHHLGLKCNO* _Integration_k__BackingField; // 0x18
		::KCPJAAHHPGK* _ExamConstraints_k__BackingField; // 0x20
		::IIIBPJDFPLJ* _Overlap_k__BackingField; // 0x28
		::MCPCIKHFBIO* _Traits_k__BackingField; // 0x30
		::PDMBLCALNPD* _OrderConstraints_k__BackingField; // 0x38
		::OJOHBFMIDJD* _AttrTraitDetail_k__BackingField; // 0x40
		::DBIAFBMMBBA* _Attr_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_CTOR_OFFSET))(this);
		}

		::DBIAFBMMBBA* get_Attr()
		{
			return ((::DBIAFBMMBBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_ATTR_OFFSET))(this);
		}

		::System::Void set_Attr(::DBIAFBMMBBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIAFBMMBBA*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_ATTR_OFFSET))(this, a1);
		}

		::MCPCIKHFBIO* get_Traits()
		{
			return ((::MCPCIKHFBIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::MCPCIKHFBIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCPCIKHFBIO*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_TRAITS_OFFSET))(this, a1);
		}

		::OJOHBFMIDJD* get_AttrTraitDetail()
		{
			return ((::OJOHBFMIDJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_ATTRTRAITDETAIL_OFFSET))(this);
		}

		::System::Void set_AttrTraitDetail(::OJOHBFMIDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOHBFMIDJD*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_ATTRTRAITDETAIL_OFFSET))(this, a1);
		}

		::PDMBLCALNPD* get_OrderConstraints()
		{
			return ((::PDMBLCALNPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_ORDERCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_OrderConstraints(::PDMBLCALNPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMBLCALNPD*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_ORDERCONSTRAINTS_OFFSET))(this, a1);
		}

		::KCPJAAHHPGK* get_ExamConstraints()
		{
			return ((::KCPJAAHHPGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_EXAMCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_ExamConstraints(::KCPJAAHHPGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCPJAAHHPGK*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_EXAMCONSTRAINTS_OFFSET))(this, a1);
		}

		::IIIBPJDFPLJ* get_Overlap()
		{
			return ((::IIIBPJDFPLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_OVERLAP_OFFSET))(this);
		}

		::System::Void set_Overlap(::IIIBPJDFPLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIIBPJDFPLJ*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_OVERLAP_OFFSET))(this, a1);
		}

		::ABHHLGLKCNO* get_Integration()
		{
			return ((::ABHHLGLKCNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_INTEGRATION_OFFSET))(this);
		}

		::System::Void set_Integration(::ABHHLGLKCNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABHHLGLKCNO*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_INTEGRATION_OFFSET))(this, a1);
		}

		::HPNFJGOCNLC* get_Board()
		{
			return ((::HPNFJGOCNLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_GET_BOARD_OFFSET))(this);
		}

		::System::Void set_Board(::HPNFJGOCNLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPNFJGOCNLC*))((::PBYTE)hIl2Cpp + HFBJCGFABAO_SET_BOARD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJCGFABAO_DISPOSE_OFFSET))(this);
		}

	};
