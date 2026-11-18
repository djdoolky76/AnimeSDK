#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActgivityMasterCoffeeItemWidgetController; }
namespace MoleMole { class UIActgivityMasterHollowItemWidgetController; }
namespace MoleMole { class UIActgivityMasterRamenItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define HEEGKBPHEGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B42D70)
#define HEEGKBPHEGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B42C10)
#define HEEGKBPHEGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B42920)
#define HEEGKBPHEGN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B42D60)

inline static constexpr unsigned int HEEGKBPHEGN_TypeDefinitionIndex = 71507;

class HEEGKBPHEGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ADOMBENGNJF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BAMGFAIBEFM; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x28
	::MoleMole::MonoGamepadRegion* BLMPOCBNNNB; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIActgivityMasterRamenItemWidgetController*>* OAAOKNAFBCA; // 0x38
	::LGINJIKKBJA* CONAMFJJGBC; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIActgivityMasterCoffeeItemWidgetController*>* JJNMELJJKCI; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UIActgivityMasterHollowItemWidgetController*>* BINDKOCDHME; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GDHCGNFJNNO; // 0x58
	::UnityEngine::GameObject* GLPDBHNNFIH; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x68
	::UnityEngine::Transform* HEFNEOMFAAH; // 0x70
	::UnityEngine::GameObject* KGLAFMFJFIP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEGKBPHEGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEEGKBPHEGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEEGKBPHEGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEGKBPHEGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
