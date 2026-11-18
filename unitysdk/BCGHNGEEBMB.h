#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BCGHNGEEBMB_BFBPGGLFDGO_OFFSET UNITYSDK_OFFSET(0xF78B370)
#define BCGHNGEEBMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF78BC10)
#define BCGHNGEEBMB_DPIDGLAMHIN_OFFSET UNITYSDK_OFFSET(0xF78B580)
#define BCGHNGEEBMB_FCEKDLIBGLJ_OFFSET UNITYSDK_OFFSET(0xF78BEC0)
#define BCGHNGEEBMB_GAADDENBBJF_OFFSET UNITYSDK_OFFSET(0xF78BF20)
#define BCGHNGEEBMB_IDMIDIFGNED_OFFSET UNITYSDK_OFFSET(0xF78B920)
#define BCGHNGEEBMB_JLLJIJPHGBA_OFFSET UNITYSDK_OFFSET(0xF78B500)
#define BCGHNGEEBMB_LIPEGBMCMJE_OFFSET UNITYSDK_OFFSET(0xF78B870)
#define BCGHNGEEBMB_NBPPLMFJHJH_OFFSET UNITYSDK_OFFSET(0xF78B4F0)
#define BCGHNGEEBMB_OAMFCMHLDGC_OFFSET UNITYSDK_OFFSET(0xF78BF80)
#define BCGHNGEEBMB__CTOR_OFFSET UNITYSDK_OFFSET(0xF78B600)

inline static constexpr unsigned int BCGHNGEEBMB_TypeDefinitionIndex = 65214;

class BCGHNGEEBMB : public ::System::Object
{
public:
	::System::Action* FAJOICNCJPO; // 0x10
	::MonoUITableScrollV2* FFLJPJNHONI; // 0x18
	::System::Func_2<::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*>* BAKLDDJELPE; // 0x20
	::System::Int32 OMNLHFIEMBN; // 0x28

	::System::Void _ctor(::MonoUITableScrollV2* FAMGIABLFPH, ::System::Func_2<::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*>* ADAGHDMMBCH)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Func_2<::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + BCGHNGEEBMB__CTOR_OFFSET))(this, FAMGIABLFPH, ADAGHDMMBCH);
	}

	::System::Int32 BFBPGGLFDGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_BFBPGGLFDGO_OFFSET))(this);
	}

	::System::Int32 NBPPLMFJHJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_NBPPLMFJHJH_OFFSET))(this);
	}

	::System::Void JLLJIJPHGBA(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_JLLJIJPHGBA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPIDGLAMHIN(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_DPIDGLAMHIN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_LIPEGBMCMJE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void IDMIDIFGNED(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_IDMIDIFGNED_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_DISPOSE_OFFSET))(this);
	}

	::System::Void FCEKDLIBGLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_FCEKDLIBGLJ_OFFSET))(this);
	}

	::System::Void GAADDENBBJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_GAADDENBBJF_OFFSET))(this);
	}

	::System::Void OAMFCMHLDGC(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 ABHBKFJKINO, ::System::Object* LJBPECKCCEA, ::System::Boolean DBBIDCBDBDB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCGHNGEEBMB_OAMFCMHLDGC_OFFSET))(this, NJOAJLDJCCJ, ABHBKFJKINO, LJBPECKCCEA, DBBIDCBDBDB);
	}
};
