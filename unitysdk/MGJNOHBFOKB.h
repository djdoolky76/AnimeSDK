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

#define MGJNOHBFOKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1405AE80)
#define MGJNOHBFOKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1405AD80)
#define MGJNOHBFOKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1405AB60)
#define MGJNOHBFOKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1405AE70)

inline static constexpr unsigned int MGJNOHBFOKB_TypeDefinitionIndex = 70824;

class MGJNOHBFOKB : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* FAJBLNMFALH; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* JGHBCBIKKLB; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* KJAKMFHKBPB; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* DMCAECJCCAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNOHBFOKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGJNOHBFOKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNOHBFOKB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGJNOHBFOKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
