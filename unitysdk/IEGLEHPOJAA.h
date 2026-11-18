#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendInfoWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define IEGLEHPOJAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F5F440)
#define IEGLEHPOJAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F5F390)
#define IEGLEHPOJAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F5F210)
#define IEGLEHPOJAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5F430)

inline static constexpr unsigned int IEGLEHPOJAA_TypeDefinitionIndex = 42495;

class IEGLEHPOJAA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFriendInfoWidgetController*>* EGOAECOLKKC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLEHPOJAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEGLEHPOJAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEGLEHPOJAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLEHPOJAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
