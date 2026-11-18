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

#define OPDIKFCLLDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C4B2A0)
#define OPDIKFCLLDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C4B1A0)
#define OPDIKFCLLDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C4AFA0)
#define OPDIKFCLLDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4B290)

inline static constexpr unsigned int OPDIKFCLLDE_TypeDefinitionIndex = 60655;

class OPDIKFCLLDE : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* DMCAECJCCAA; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* DNINGIFKKPC; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* NCAIOFHBOII; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* JGHBCBIKKLB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDIKFCLLDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPDIKFCLLDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPDIKFCLLDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDIKFCLLDE_KGEBDLGBGNM_OFFSET))(this);
	}
};
