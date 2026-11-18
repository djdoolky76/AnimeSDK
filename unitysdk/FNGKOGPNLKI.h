#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define FNGKOGPNLKI_DDKGGLBFAFB_OFFSET UNITYSDK_OFFSET(0x13233660)
#define FNGKOGPNLKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132337C0)
#define FNGKOGPNLKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13233510)
#define FNGKOGPNLKI__CTOR_OFFSET UNITYSDK_OFFSET(0x132337B0)

inline static constexpr unsigned int FNGKOGPNLKI_TypeDefinitionIndex = 61719;

class FNGKOGPNLKI : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* MDPILEIDKJE; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* LHEJNDFBFJE; // 0x28
	::UnityEngine::RectTransform* NLAGEMILCIA; // 0x30
	::UnityEngine::RectTransform* LIBCFJEPHDH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKOGPNLKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNGKOGPNLKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* DDKGGLBFAFB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNGKOGPNLKI_DDKGGLBFAFB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNGKOGPNLKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
