#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define ABMBMHPIJNC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135D45D0)
#define ABMBMHPIJNC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x135D44D0)
#define ABMBMHPIJNC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135D42D0)
#define ABMBMHPIJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x135D45C0)

inline static constexpr unsigned int ABMBMHPIJNC_TypeDefinitionIndex = 56850;

class ABMBMHPIJNC : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* JLIPEIJFKJE; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* JGHBCBIKKLB; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* DMCAECJCCAA; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* GJJJIIBJLMA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMBMHPIJNC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABMBMHPIJNC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABMBMHPIJNC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMBMHPIJNC_KGEBDLGBGNM_OFFSET))(this);
	}
};
