#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GGAKHGCLJFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179E93B0)
#define GGAKHGCLJFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179E92E0)
#define GGAKHGCLJFE_MFNDLINPPLF_OFFSET UNITYSDK_OFFSET(0x179E9190)
#define GGAKHGCLJFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179E9030)
#define GGAKHGCLJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x179E93A0)

inline static constexpr unsigned int GGAKHGCLJFE_TypeDefinitionIndex = 81696;

class GGAKHGCLJFE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DKEKLCAMKHA; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CKLCDHLHALL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKHGCLJFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGAKHGCLJFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* MFNDLINPPLF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGAKHGCLJFE_MFNDLINPPLF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKHGCLJFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGAKHGCLJFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
