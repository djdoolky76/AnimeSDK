#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Object.h"

class IILMGLCLKKF;
namespace MoleMole { class UIBangkovBagPageController_Context; }

#define IDIJBFDCOLN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15BF9A80)
#define IDIJBFDCOLN_DPAOPDEFDMP_OFFSET UNITYSDK_OFFSET(0x15BF9C50)
#define IDIJBFDCOLN_LGDEKFPMFML_OFFSET UNITYSDK_OFFSET(0x15BF9960)

inline static constexpr unsigned int IDIJBFDCOLN_TypeDefinitionIndex = 65915;

class IDIJBFDCOLN : public ::System::Object
{
public:
	static ::OFDKEANKAIL LGDEKFPMFML()
	{
		return ((::OFDKEANKAIL(*)())((::PBYTE)hIl2Cpp + IDIJBFDCOLN_LGDEKFPMFML_OFFSET))();
	}

	static ::IILMGLCLKKF* COKNIICCODC(::OFDKEANKAIL MAOCFFFKJCF)
	{
		return ((::IILMGLCLKKF*(*)(::OFDKEANKAIL))((::PBYTE)hIl2Cpp + IDIJBFDCOLN_COKNIICCODC_OFFSET))(MAOCFFFKJCF);
	}

	static ::IILMGLCLKKF* DPAOPDEFDMP(::MoleMole::UIBangkovBagPageController_Context* AAOCANGHBDG)
	{
		return ((::IILMGLCLKKF*(*)(::MoleMole::UIBangkovBagPageController_Context*))((::PBYTE)hIl2Cpp + IDIJBFDCOLN_DPAOPDEFDMP_OFFSET))(AAOCANGHBDG);
	}
};
