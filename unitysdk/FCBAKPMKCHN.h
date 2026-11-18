#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FCBAKPMKCHN_BMIIDOMKGJO.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCBAKPMKCHN_BLHPMNHBAAD_OFFSET UNITYSDK_OFFSET(0x131FCC60)
#define FCBAKPMKCHN_EKJPMMHFCNJ_OFFSET UNITYSDK_OFFSET(0x131FD420)
#define FCBAKPMKCHN_LNHCEEADGJD_OFFSET UNITYSDK_OFFSET(0x131FD210)
#define FCBAKPMKCHN_ONKJHEAFKCL_OFFSET UNITYSDK_OFFSET(0x131FCFA0)

inline static constexpr unsigned int FCBAKPMKCHN_TypeDefinitionIndex = 58376;

class FCBAKPMKCHN : public ::System::Object
{
public:
	// static const ::System::Single MIGBFPKJAGB; // 0x0

	static ::MoleMole::UIBubbleTips* BLHPMNHBAAD(::System::Boolean AMGAAHMANDM, ::System::Int32 FLEEDKLJOHE, ::FCBAKPMKCHN_BMIIDOMKGJO AJJAJCOLHLP, ::System::Action* EJGDHCIBCJH)
	{
		return ((::MoleMole::UIBubbleTips*(*)(::System::Boolean, ::System::Int32, ::FCBAKPMKCHN_BMIIDOMKGJO, ::System::Action*))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_BLHPMNHBAAD_OFFSET))(AMGAAHMANDM, FLEEDKLJOHE, AJJAJCOLHLP, EJGDHCIBCJH);
	}

	static ::System::Void LNHCEEADGJD(::MoleMole::UIBubbleTips* BPKKDLDEBHO, ::System::String* HHJHPIMLNIN, ::System::Collections::Generic::List_1<::System::String*>* ACCCEAAEHFM)
	{
		return ((::System::Void(*)(::MoleMole::UIBubbleTips*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_LNHCEEADGJD_OFFSET))(BPKKDLDEBHO, HHJHPIMLNIN, ACCCEAAEHFM);
	}

	static ::System::Void EKJPMMHFCNJ(::MoleMole::UIBubbleTips* BPKKDLDEBHO, ::FCBAKPMKCHN_BMIIDOMKGJO AJJAJCOLHLP, ::System::Action* GMCMGILKGPH)
	{
		return ((::System::Void(*)(::MoleMole::UIBubbleTips*, ::FCBAKPMKCHN_BMIIDOMKGJO, ::System::Action*))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_EKJPMMHFCNJ_OFFSET))(BPKKDLDEBHO, AJJAJCOLHLP, GMCMGILKGPH);
	}

	static ::System::Void ONKJHEAFKCL(::System::Int32 ECAOMILGANM)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_ONKJHEAFKCL_OFFSET))(ECAOMILGANM);
	}
};
