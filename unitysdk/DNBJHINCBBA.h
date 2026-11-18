#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DNBJHINCBBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13469C00)
#define DNBJHINCBBA_IEENKAMHDBB_OFFSET UNITYSDK_OFFSET(0x13469A00)
#define DNBJHINCBBA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13469B50)
#define DNBJHINCBBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13469830)
#define DNBJHINCBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13469BF0)

inline static constexpr unsigned int DNBJHINCBBA_TypeDefinitionIndex = 41619;

class DNBJHINCBBA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HGMNLNMGBBG; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FDKLNNAKCAC; // 0x28
	::FGCOIBFFCHB* DOJJBMEFEPM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBJHINCBBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNBJHINCBBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IEENKAMHDBB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNBJHINCBBA_IEENKAMHDBB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBJHINCBBA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNBJHINCBBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
