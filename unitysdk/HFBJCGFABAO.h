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

#define HFBJCGFABAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C699E0)
#define HFBJCGFABAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C698A0)
#define HFBJCGFABAO_GET_ATTRTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0x15C697E0)
#define HFBJCGFABAO_GET_ATTR_OFFSET UNITYSDK_OFFSET(0x15C697A0)
#define HFBJCGFABAO_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x15C69880)
#define HFBJCGFABAO_GET_EXAMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x15C69820)
#define HFBJCGFABAO_GET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x15C69860)
#define HFBJCGFABAO_GET_ORDERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x15C69800)
#define HFBJCGFABAO_GET_OVERLAP_OFFSET UNITYSDK_OFFSET(0x15C69840)
#define HFBJCGFABAO_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x15C697C0)
#define HFBJCGFABAO_SET_ATTRTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0x15C697F0)
#define HFBJCGFABAO_SET_ATTR_OFFSET UNITYSDK_OFFSET(0x15C697B0)
#define HFBJCGFABAO_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x15C69890)
#define HFBJCGFABAO_SET_EXAMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x15C69830)
#define HFBJCGFABAO_SET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x15C69870)
#define HFBJCGFABAO_SET_ORDERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x15C69810)
#define HFBJCGFABAO_SET_OVERLAP_OFFSET UNITYSDK_OFFSET(0x15C69850)
#define HFBJCGFABAO_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x15C697D0)

	class HFBJCGFABAO : public ::System::Object
	{
	public:
		::KCPJAAHHPGK* _ExamConstraints_k__BackingField; // 0x10
		::MCPCIKHFBIO* _Traits_k__BackingField; // 0x18
		::IIIBPJDFPLJ* _Overlap_k__BackingField; // 0x20
		::ABHHLGLKCNO* _Integration_k__BackingField; // 0x28
		::PDMBLCALNPD* _OrderConstraints_k__BackingField; // 0x30
		::DBIAFBMMBBA* _Attr_k__BackingField; // 0x38
		::HPNFJGOCNLC* _Board_k__BackingField; // 0x40
		::OJOHBFMIDJD* _AttrTraitDetail_k__BackingField; // 0x48
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
