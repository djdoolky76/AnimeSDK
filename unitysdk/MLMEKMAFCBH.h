#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialVideoPanelWidgetController; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define MLMEKMAFCBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C9E180)
#define MLMEKMAFCBH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C9E080)
#define MLMEKMAFCBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C9DE50)
#define MLMEKMAFCBH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9E170)

inline static constexpr unsigned int MLMEKMAFCBH_TypeDefinitionIndex = 79627;

class MLMEKMAFCBH : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x18
	::UnityEngine::Video::VideoPlayer* FEKAMKHOIMK; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* KIHPLOJMEJI; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UITutorialVideoPanelWidgetController*>* AEHBDMKABLL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMEKMAFCBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLMEKMAFCBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLMEKMAFCBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMEKMAFCBH_KGEBDLGBGNM_OFFSET))(this);
	}
};
