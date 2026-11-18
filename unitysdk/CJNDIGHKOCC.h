#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AJJKJNPEHCH;
class BCFFCKPJKON;
class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class ADJHBNPPGEE_1;

#define CJNDIGHKOCC_DLEFGOFFBCJ_OFFSET UNITYSDK_OFFSET(0x13267860)
#define CJNDIGHKOCC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x13266EE0)
#define CJNDIGHKOCC_OAMFCMHLDGC_OFFSET UNITYSDK_OFFSET(0x13267D40)
#define CJNDIGHKOCC_ONCLICK_OFFSET UNITYSDK_OFFSET(0x13267700)
#define CJNDIGHKOCC_PLCOHEMHONN_OFFSET UNITYSDK_OFFSET(0x132678B0)
#define CJNDIGHKOCC__CTOR_OFFSET UNITYSDK_OFFSET(0x13267810)

inline static constexpr unsigned int CJNDIGHKOCC_TypeDefinitionIndex = 58981;

class CJNDIGHKOCC : public ::PBJOCICFNGK
{
public:
	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* JMLBEGHNAMK; // 0x50
	::FGCOIBFFCHB* LELHEOIPABN; // 0x58
	::LGINJIKKBJA* JPDBNPEICJI; // 0x60
	::FGCOIBFFCHB* NPFJDOHELIL; // 0x68
	::UnityEngine::RectTransform* NANMFEJHGBN; // 0x70
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* LCGGJAMHFHK; // 0x78
	::UnityEngine::RectTransform* IEFNPGFJMPG; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* IKALPBLGMLA; // 0x88
	::LGINJIKKBJA* LMAMOJPPHKE; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* HLOOIBBFPAG; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* HIFADCEEIPN; // 0xA0
	::UnityEngine::RectTransform* IELMHMBHBNI; // 0xA8
	::UnityEngine::RectTransform* DLHBEDEHLBH; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* GGCJBMCKJLA; // 0xB8
	::BCFFCKPJKON* EFFAONJBCOG; // 0xC0
	::FGCOIBFFCHB* ILBPDOMNEIM; // 0xC8
	::AJJKJNPEHCH* NJEDKFHNLIH; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDIGHKOCC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_ONCLICK_OFFSET))(this);
	}

	::System::Void DLEFGOFFBCJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_DLEFGOFFBCJ_OFFSET))(this, LIEJIGMGGOL);
	}

	::System::Void PLCOHEMHONN(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_PLCOHEMHONN_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void OAMFCMHLDGC(::System::Int32 ABHBKFJKINO, ::System::Object* LJBPECKCCEA, ::System::Boolean JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJNDIGHKOCC_OAMFCMHLDGC_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA, JBJFINAFFKO);
	}
};
