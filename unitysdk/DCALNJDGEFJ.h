#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DCALNJDGEFJ_BFBPGGLFDGO_OFFSET UNITYSDK_OFFSET(0x132868A0)
#define DCALNJDGEFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13286C10)
#define DCALNJDGEFJ_DPIDGLAMHIN_OFFSET UNITYSDK_OFFSET(0x13286980)
#define DCALNJDGEFJ_IDMIDIFGNED_OFFSET UNITYSDK_OFFSET(0x13286BC0)
#define DCALNJDGEFJ_JLLJIJPHGBA_OFFSET UNITYSDK_OFFSET(0x13286900)
#define DCALNJDGEFJ_LIPEGBMCMJE_OFFSET UNITYSDK_OFFSET(0x13286B30)
#define DCALNJDGEFJ_NBPPLMFJHJH_OFFSET UNITYSDK_OFFSET(0x132868F0)
#define DCALNJDGEFJ_NFKMIGECIEO_OFFSET UNITYSDK_OFFSET(0x13286C60)
#define DCALNJDGEFJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13286AA0)
#define DCALNJDGEFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13286A00)

inline static constexpr unsigned int DCALNJDGEFJ_TypeDefinitionIndex = 62606;

class DCALNJDGEFJ : public ::System::Object
{
public:
	::System::Action* FAJOICNCJPO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* OAJLKDLANIF; // 0x18
	::System::Int32 OMNLHFIEMBN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCALNJDGEFJ__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* JGDOBOEHIBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + DCALNJDGEFJ__CTOR_1_OFFSET))(this, JGDOBOEHIBK);
	}

	::System::Int32 BFBPGGLFDGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_BFBPGGLFDGO_OFFSET))(this);
	}

	::System::Int32 NBPPLMFJHJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_NBPPLMFJHJH_OFFSET))(this);
	}

	::System::Void JLLJIJPHGBA(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_JLLJIJPHGBA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPIDGLAMHIN(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_DPIDGLAMHIN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_LIPEGBMCMJE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void IDMIDIFGNED(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_IDMIDIFGNED_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_DISPOSE_OFFSET))(this);
	}

	::System::Void NFKMIGECIEO(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* JGDOBOEHIBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + DCALNJDGEFJ_NFKMIGECIEO_OFFSET))(this, JGDOBOEHIBK);
	}
};
