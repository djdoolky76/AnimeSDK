#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GABJJAFFGPH_JPBGCOIHDGL_AMJKAFGJADJ_OFFSET UNITYSDK_OFFSET(0x13244400)
#define GABJJAFFGPH_JPBGCOIHDGL_GDANKCPDLMH_OFFSET UNITYSDK_OFFSET(0x13243D90)
#define GABJJAFFGPH_JPBGCOIHDGL_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13244BC0)
#define GABJJAFFGPH_JPBGCOIHDGL_KCKDHMIDLAB_OFFSET UNITYSDK_OFFSET(0x13244030)
#define GABJJAFFGPH_JPBGCOIHDGL_MEMNCGMGNKB_OFFSET UNITYSDK_OFFSET(0x132449B0)
#define GABJJAFFGPH_JPBGCOIHDGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13244170)
#define GABJJAFFGPH_JPBGCOIHDGL__CTOR_OFFSET UNITYSDK_OFFSET(0x13243CF0)

inline static constexpr unsigned int GABJJAFFGPH_JPBGCOIHDGL_TypeDefinitionIndex = 47843;

class GABJJAFFGPH_JPBGCOIHDGL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BHEOFOBGOJF; // 0x10
	::System::String* HBKHKCBJDGE; // 0x18
	::System::Int32 IMAFLHFEFFN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL__CTOR_OFFSET))(this);
	}

	::System::Void GDANKCPDLMH(::System::Int32 APGMPFJEIHF, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_GDANKCPDLMH_OFFSET))(this, APGMPFJEIHF, EGEGIMGMJHN);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* AMJKAFGJADJ(::System::Int32 APGMPFJEIHF)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_AMJKAFGJADJ_OFFSET))(this, APGMPFJEIHF);
	}

	::System::Void KCKDHMIDLAB(::UnityEngine::UI::Extension::UILocalizationText* NKKKFMCLCBL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_KCKDHMIDLAB_OFFSET))(this, NKKKFMCLCBL);
	}

	::System::Void MEMNCGMGNKB(::System::Int32 KLJNHMGMDNP, ::System::String* DGDDDMGEAEB, ::System::Collections::Generic::List_1<::System::Object*>* FLNFPCEMADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_MEMNCGMGNKB_OFFSET))(this, KLJNHMGMDNP, DGDDDMGEAEB, FLNFPCEMADN);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JPBGCOIHDGL_HFBPONNNLBA_OFFSET))(this);
	}
};
