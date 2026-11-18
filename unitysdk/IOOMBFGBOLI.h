#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define IOOMBFGBOLI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF885940)
#define IOOMBFGBOLI_FHEHGAEJAEP_OFFSET UNITYSDK_OFFSET(0xF8857E0)
#define IOOMBFGBOLI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF885700)
#define IOOMBFGBOLI__CTOR_OFFSET UNITYSDK_OFFSET(0xF885930)

inline static constexpr unsigned int IOOMBFGBOLI_TypeDefinitionIndex = 50443;

class IOOMBFGBOLI : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OLONCKNAOIF; // 0x18
	::UnityEngine::GameObject* ALMHAEJLFAA; // 0x20
	::MonoUITableScrollV2* FKLGAEILKAF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOMBFGBOLI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOOMBFGBOLI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FHEHGAEJAEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOOMBFGBOLI_FHEHGAEJAEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOOMBFGBOLI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
