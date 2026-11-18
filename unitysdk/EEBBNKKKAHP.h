#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define EEBBNKKKAHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15898740)
#define EEBBNKKKAHP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158986B0)
#define EEBBNKKKAHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158982D0)
#define EEBBNKKKAHP_PNNBLPIIICN_OFFSET UNITYSDK_OFFSET(0x158984C0)
#define EEBBNKKKAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15898730)

inline static constexpr unsigned int EEBBNKKKAHP_TypeDefinitionIndex = 41355;

class EEBBNKKKAHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BKCMOJIFHID; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OBJHEHGGPBN; // 0x20
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBBNKKKAHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEBBNKKKAHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PNNBLPIIICN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEBBNKKKAHP_PNNBLPIIICN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBBNKKKAHP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEBBNKKKAHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
