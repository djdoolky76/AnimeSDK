#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UICircleTransition; }

#define JGKPHMIMODK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ACF1C0)
#define JGKPHMIMODK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13ACF0F0)
#define JGKPHMIMODK_LALPDBHJOIG_OFFSET UNITYSDK_OFFSET(0x13ACEFA0)
#define JGKPHMIMODK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ACEE20)
#define JGKPHMIMODK__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACF1B0)

inline static constexpr unsigned int JGKPHMIMODK_TypeDefinitionIndex = 71706;

class JGKPHMIMODK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CCNGDPJIJCM; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* PCDOCPNEOPG; // 0x20
	::LGINJIKKBJA* ANDFIBAKEAE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKPHMIMODK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKPHMIMODK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* LALPDBHJOIG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKPHMIMODK_LALPDBHJOIG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKPHMIMODK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKPHMIMODK_KGEBDLGBGNM_OFFSET))(this);
	}
};
