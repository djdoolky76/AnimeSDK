#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FGCOIBFFCHB;
class FPFLIJIFONJ_MJHIPJOGGCD;
class GCIMMDDIFBJ;
class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AAKKDFDGMPI_AHANOECOPHA_OFFSET UNITYSDK_OFFSET(0x164338B0)
#define AAKKDFDGMPI_DLEFGOFFBCJ_OFFSET UNITYSDK_OFFSET(0x16433D90)
#define AAKKDFDGMPI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16433110)
#define AAKKDFDGMPI_GAFIPLJBBOF_OFFSET UNITYSDK_OFFSET(0x16433DF0)
#define AAKKDFDGMPI_JLLPOPMGJML_OFFSET UNITYSDK_OFFSET(0x16433A70)
#define AAKKDFDGMPI_OHDGJFCFGLO_OFFSET UNITYSDK_OFFSET(0x16433AC0)
#define AAKKDFDGMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x16433860)

inline static constexpr unsigned int AAKKDFDGMPI_TypeDefinitionIndex = 74492;

class AAKKDFDGMPI : public ::PBJOCICFNGK
{
public:
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x60
	::UnityEngine::GameObject* AAGFPOKNEOM; // 0x68
	::UnityEngine::GameObject* MKLDKLCJEID; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x78
	::FGCOIBFFCHB* NKOKAFLOJCM; // 0x80
	::GCIMMDDIFBJ* DDKPFJLICJB; // 0x88
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x90
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* HNKKKODJEDL; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* AFHFJIIIPNE; // 0xA8
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0xB0
	::FPFLIJIFONJ_MJHIPJOGGCD* EIEFOCPBPAB; // 0xB8
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKDFDGMPI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void AHANOECOPHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_AHANOECOPHA_OFFSET))(this);
	}

	::System::Void JLLPOPMGJML(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_JLLPOPMGJML_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void OHDGJFCFGLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_OHDGJFCFGLO_OFFSET))(this);
	}

	::System::Void DLEFGOFFBCJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_DLEFGOFFBCJ_OFFSET))(this, LIEJIGMGGOL);
	}

	::System::Void GAFIPLJBBOF(::FPFLIJIFONJ_MJHIPJOGGCD* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::FPFLIJIFONJ_MJHIPJOGGCD*))((::PBYTE)hIl2Cpp + AAKKDFDGMPI_GAFIPLJBBOF_OFFSET))(this, LJBPECKCCEA);
	}
};
