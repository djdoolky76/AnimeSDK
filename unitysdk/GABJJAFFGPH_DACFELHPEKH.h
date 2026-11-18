#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GABJJAFFGPH_DACFELHPEKH_GHGGHMDKABI_OFFSET UNITYSDK_OFFSET(0x15CCECD0)
#define GABJJAFFGPH_DACFELHPEKH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15CCF160)
#define GABJJAFFGPH_DACFELHPEKH_KCKDHMIDLAB_OFFSET UNITYSDK_OFFSET(0x15CCEE80)
#define GABJJAFFGPH_DACFELHPEKH_MEMNCGMGNKB_OFFSET UNITYSDK_OFFSET(0x15CCF610)
#define GABJJAFFGPH_DACFELHPEKH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15CCEFC0)
#define GABJJAFFGPH_DACFELHPEKH__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCEC60)

inline static constexpr unsigned int GABJJAFFGPH_DACFELHPEKH_TypeDefinitionIndex = 47841;

class GABJJAFFGPH_DACFELHPEKH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JLJPNFLHPNK; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OEJPCAFNDNJ; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FOFEBGMHPNP; // 0x20
	::System::String* HBKHKCBJDGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH__CTOR_OFFSET))(this);
	}

	::System::Boolean GHGGHMDKABI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH_GHGGHMDKABI_OFFSET))(this);
	}

	::System::Void KCKDHMIDLAB(::UnityEngine::UI::Extension::UILocalizationText* NKKKFMCLCBL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH_KCKDHMIDLAB_OFFSET))(this, NKKKFMCLCBL);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void MEMNCGMGNKB(::System::Collections::Generic::List_1<::System::Int32>* IDNPBLNOOBC, ::System::String* DGDDDMGEAEB, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FLNFPCEMADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DACFELHPEKH_MEMNCGMGNKB_OFFSET))(this, IDNPBLNOOBC, DGDDDMGEAEB, FLNFPCEMADN);
	}
};
