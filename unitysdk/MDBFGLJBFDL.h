#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define MDBFGLJBFDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177A1110)
#define MDBFGLJBFDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177A0FB0)
#define MDBFGLJBFDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177A0DB0)
#define MDBFGLJBFDL__CTOR_OFFSET UNITYSDK_OFFSET(0x177A1100)

inline static constexpr unsigned int MDBFGLJBFDL_TypeDefinitionIndex = 56291;

class MDBFGLJBFDL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GPGOHIMJOIN; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* FCBBHDGFDIG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* JMDIEGKCJKG; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* DJDBNFFLHMC; // 0x30
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* DLHAFFGMNKJ; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* OJDGKNMKCMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBFGLJBFDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDBFGLJBFDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBFGLJBFDL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDBFGLJBFDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
