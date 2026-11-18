#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define GGEKOCBLDKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116F49F0)
#define GGEKOCBLDKK_FCHFCHHDFNM_OFFSET UNITYSDK_OFFSET(0x116F4890)
#define GGEKOCBLDKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116F47F0)
#define GGEKOCBLDKK__CTOR_OFFSET UNITYSDK_OFFSET(0x116F49E0)

inline static constexpr unsigned int GGEKOCBLDKK_TypeDefinitionIndex = 60200;

class GGEKOCBLDKK : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* CFFFBGBCCEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGEKOCBLDKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGEKOCBLDKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FCHFCHHDFNM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGEKOCBLDKK_FCHFCHHDFNM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGEKOCBLDKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
