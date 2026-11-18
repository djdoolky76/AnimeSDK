#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MCAAKGMKMHD_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0xD444810)
#define MCAAKGMKMHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD444A50)
#define MCAAKGMKMHD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD4449C0)
#define MCAAKGMKMHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD444690)
#define MCAAKGMKMHD__CTOR_OFFSET UNITYSDK_OFFSET(0xD444A40)

inline static constexpr unsigned int MCAAKGMKMHD_TypeDefinitionIndex = 65418;

class MCAAKGMKMHD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x20
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAAKGMKMHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCAAKGMKMHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCAAKGMKMHD_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAAKGMKMHD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCAAKGMKMHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
