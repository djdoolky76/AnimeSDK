#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AJJKJNPEHCH;
class BCFFCKPJKON;
class FGCOIBFFCHB;
class IOOIHHOJOPI;
class KIAEEMJLCJA;
class LGINJIKKBJA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class ADJHBNPPGEE_1;

#define MOEOKDEEGKB_ANDGIKOAICJ_OFFSET UNITYSDK_OFFSET(0x10789F10)
#define MOEOKDEEGKB_DLEFGOFFBCJ_OFFSET UNITYSDK_OFFSET(0x1078AAA0)
#define MOEOKDEEGKB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x107896E0)
#define MOEOKDEEGKB_OAMFCMHLDGC_OFFSET UNITYSDK_OFFSET(0x1078A990)
#define MOEOKDEEGKB_ONCLICK_OFFSET UNITYSDK_OFFSET(0x10789DB0)
#define MOEOKDEEGKB_PLCOHEMHONN_OFFSET UNITYSDK_OFFSET(0x1078A500)
#define MOEOKDEEGKB__CTOR_OFFSET UNITYSDK_OFFSET(0x10789EC0)

inline static constexpr unsigned int MOEOKDEEGKB_TypeDefinitionIndex = 49306;

class MOEOKDEEGKB : public ::PBJOCICFNGK
{
public:
	::UnityEngine::RectTransform* ELAEIKCNCBD; // 0x50
	::FGCOIBFFCHB* AMIAIBFKKGA; // 0x58
	::UnityEngine::RectTransform* JKHONLNNCKL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* CNJJIFJJKMA; // 0x68
	::FGCOIBFFCHB* JJGIHPKHKLP; // 0x70
	::FGCOIBFFCHB* POEICIJBKIC; // 0x78
	::AJJKJNPEHCH* NJEDKFHNLIH; // 0x80
	::LGINJIKKBJA* PHDLHCELKKC; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* BICMEEDIMBK; // 0x90
	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* ANCAPJDPIIM; // 0x98
	::UnityEngine::RectTransform* HJDFEFMFAPC; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* HPLGLGFBEJH; // 0xA8
	::BCFFCKPJKON* EFFAONJBCOG; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* NPNGGDKACAO; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEOKDEEGKB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_ONCLICK_OFFSET))(this);
	}

	::System::Void ANDGIKOAICJ(::KIAEEMJLCJA* JFGMHJOCHGB)
	{
		return ((::System::Void(*)(::PVOID, ::KIAEEMJLCJA*))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_ANDGIKOAICJ_OFFSET))(this, JFGMHJOCHGB);
	}

	::System::Void OAMFCMHLDGC(::System::Int32 ABHBKFJKINO, ::System::Object* LJBPECKCCEA, ::System::Boolean JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_OAMFCMHLDGC_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA, JBJFINAFFKO);
	}

	::System::Void PLCOHEMHONN(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_PLCOHEMHONN_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void DLEFGOFFBCJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_DLEFGOFFBCJ_OFFSET))(this, LIEJIGMGGOL);
	}
};
