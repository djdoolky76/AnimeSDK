#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::Video { class VideoPlayer; }

#define FFPOHOELMDK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB406E0)
#define FFPOHOELMDK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB405F0)
#define FFPOHOELMDK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB40400)
#define FFPOHOELMDK__CTOR_OFFSET UNITYSDK_OFFSET(0xBB406D0)

inline static constexpr unsigned int FFPOHOELMDK_TypeDefinitionIndex = 61196;

class FFPOHOELMDK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NPAJLLHKPLJ; // 0x18
	::UnityEngine::Animation* DLLMKAADMML; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x28
	::LGINJIKKBJA* OLPGKOEJIBN; // 0x30
	::MoleMole::ImgTextParserBase* LBLJMJLAMDO; // 0x38
	::UnityEngine::Video::VideoPlayer* FEKAMKHOIMK; // 0x40
	::LGINJIKKBJA* HEBLCLJPNOA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPOHOELMDK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFPOHOELMDK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFPOHOELMDK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPOHOELMDK_KGEBDLGBGNM_OFFSET))(this);
	}
};
