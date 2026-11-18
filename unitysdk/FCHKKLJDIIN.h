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

#define FCHKKLJDIIN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116A4BB0)
#define FCHKKLJDIIN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116A4AB0)
#define FCHKKLJDIIN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116A48B0)
#define FCHKKLJDIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x116A4BA0)

inline static constexpr unsigned int FCHKKLJDIIN_TypeDefinitionIndex = 76829;

class FCHKKLJDIIN : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* JGHBCBIKKLB; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* BAKJJNDINAM; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* DMCAECJCCAA; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* EPPOCHHIJPM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHKKLJDIIN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCHKKLJDIIN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCHKKLJDIIN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHKKLJDIIN_KGEBDLGBGNM_OFFSET))(this);
	}
};
