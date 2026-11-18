#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialVideoPanelWidgetController; }
namespace UnityEngine::Video { class VideoPlayer; }
template <typename T> class MEKABAIJMNM_1;

#define MAFDKHLJEAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1590D670)
#define MAFDKHLJEAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1590D5A0)
#define MAFDKHLJEAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1590D3C0)
#define MAFDKHLJEAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1590D660)

inline static constexpr unsigned int MAFDKHLJEAF_TypeDefinitionIndex = 72997;

class MAFDKHLJEAF : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UITutorialVideoPanelWidgetController*>* AEHBDMKABLL; // 0x20
	::UnityEngine::Video::VideoPlayer* FEKAMKHOIMK; // 0x28
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDKHLJEAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAFDKHLJEAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAFDKHLJEAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDKHLJEAF_KGEBDLGBGNM_OFFSET))(this);
	}
};
