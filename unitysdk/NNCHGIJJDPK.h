#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

class ENGKPGFGGLM;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNCHGIJJDPK_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x115ACFC0)
#define NNCHGIJJDPK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x115ACF30)
#define NNCHGIJJDPK_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x115ACF40)
#define NNCHGIJJDPK_CAFPPEHOJGL_OFFSET UNITYSDK_OFFSET(0x115AC850)
#define NNCHGIJJDPK_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x115ACF60)
#define NNCHGIJJDPK_HLEDDJMLICC_OFFSET UNITYSDK_OFFSET(0x115AC2C0)
#define NNCHGIJJDPK_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x115ACF00)
#define NNCHGIJJDPK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x115ACF20)
#define NNCHGIJJDPK_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x115ACF50)
#define NNCHGIJJDPK_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x115ACF10)
#define NNCHGIJJDPK_ODEOBNFLBGK_OFFSET UNITYSDK_OFFSET(0x115ABB20)
#define NNCHGIJJDPK_ONATTACH_OFFSET UNITYSDK_OFFSET(0x115ABA50)
#define NNCHGIJJDPK_ONDETACH_OFFSET UNITYSDK_OFFSET(0x115ABA90)
#define NNCHGIJJDPK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x115ABAD0)
#define NNCHGIJJDPK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x115AC270)
#define NNCHGIJJDPK_ONEVENT_OFFSET UNITYSDK_OFFSET(0x115ACCC0)
#define NNCHGIJJDPK_ONREADY_OFFSET UNITYSDK_OFFSET(0x115AC230)
#define NNCHGIJJDPK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x115AC190)
#define NNCHGIJJDPK_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x115ACE40)
#define NNCHGIJJDPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x115ACD10)
#define NNCHGIJJDPK__CTOR_OFFSET UNITYSDK_OFFSET(0x115AB9B0)

inline static constexpr unsigned int NNCHGIJJDPK_TypeDefinitionIndex = 86002;

class NNCHGIJJDPK
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EFHGAKIEIHP; // 0x28
	::System::String* LCNEANDFKOJ; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* LDNINLGGHCG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCHGIJJDPK__CCTOR_OFFSET))();
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONDETACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONREADY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void HLEDDJMLICC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_HLEDDJMLICC_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ODEOBNFLBGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_ODEOBNFLBGK_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CAFPPEHOJGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_CAFPPEHOJGL_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCHGIJJDPK_AFBHCNCIKEK_OFFSET))(this);
	}
};
