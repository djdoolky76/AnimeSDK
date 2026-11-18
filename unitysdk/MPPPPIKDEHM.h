#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MPPPPIKDEHM_DBPBNHOFGMA_OFFSET UNITYSDK_OFFSET(0x18B601F0)
#define MPPPPIKDEHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18B60350)
#define MPPPPIKDEHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18B600F0)
#define MPPPPIKDEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B60340)

inline static constexpr unsigned int MPPPPIKDEHM_TypeDefinitionIndex = 72709;

class MPPPPIKDEHM : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* MDIBCBFNHCD; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPPPIKDEHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPPPPIKDEHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPPPPIKDEHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* DBPBNHOFGMA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPPPPIKDEHM_DBPBNHOFGMA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
