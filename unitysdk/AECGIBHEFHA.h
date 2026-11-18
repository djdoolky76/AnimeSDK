#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AECGIBHEFHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16D64200)
#define AECGIBHEFHA_HDPDBIMPFAI_OFFSET UNITYSDK_OFFSET(0x16D64020)
#define AECGIBHEFHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16D64170)
#define AECGIBHEFHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16D63DF0)
#define AECGIBHEFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D641F0)

inline static constexpr unsigned int AECGIBHEFHA_TypeDefinitionIndex = 61716;

class AECGIBHEFHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x18
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x20
	::UnityEngine::GameObject* HLLFNBBLOEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CBCPEDFKPIA; // 0x38
	::GCIMMDDIFBJ* JDNDPHDPEEM; // 0x40
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x48
	::UnityEngine::GameObject* BAMADKCBDBJ; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGIBHEFHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AECGIBHEFHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AECGIBHEFHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HDPDBIMPFAI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AECGIBHEFHA_HDPDBIMPFAI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGIBHEFHA_KGEBDLGBGNM_OFFSET))(this);
	}
};
