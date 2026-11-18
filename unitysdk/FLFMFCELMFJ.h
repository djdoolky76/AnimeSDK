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

#define FLFMFCELMFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x191FC740)
#define FLFMFCELMFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x191FC640)
#define FLFMFCELMFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x191FC440)
#define FLFMFCELMFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x191FC730)

inline static constexpr unsigned int FLFMFCELMFJ_TypeDefinitionIndex = 65801;

class FLFMFCELMFJ : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* HFGBNKGLEEJ; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* NNBIANHFKJK; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* JGHBCBIKKLB; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* DMCAECJCCAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFMFCELMFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLFMFCELMFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFMFCELMFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLFMFCELMFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
