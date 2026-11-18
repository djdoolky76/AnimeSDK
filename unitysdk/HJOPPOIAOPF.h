#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HJOPPOIAOPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A1CF20)
#define HJOPPOIAOPF_KLNPFPEAHKB_OFFSET UNITYSDK_OFFSET(0x14A1CDC0)
#define HJOPPOIAOPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A1CD20)
#define HJOPPOIAOPF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CF10)

inline static constexpr unsigned int HJOPPOIAOPF_TypeDefinitionIndex = 68240;

class HJOPPOIAOPF : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EIKJOMFACJD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPPOIAOPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJOPPOIAOPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJOPPOIAOPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KLNPFPEAHKB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJOPPOIAOPF_KLNPFPEAHKB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
