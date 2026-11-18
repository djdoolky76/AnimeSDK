#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DODDIMPPCPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1060C040)
#define DODDIMPPCPF_KGHNADDCEDN_OFFSET UNITYSDK_OFFSET(0x1060BEE0)
#define DODDIMPPCPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1060BD90)
#define DODDIMPPCPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1060C030)

inline static constexpr unsigned int DODDIMPPCPF_TypeDefinitionIndex = 93193;

class DODDIMPPCPF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CABLNPKCMLG; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FOHNPEHAKOJ; // 0x20
	::UnityEngine::Transform* GGGFPHBCDDA; // 0x28
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* BOEEFHBCEMJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODDIMPPCPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DODDIMPPCPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* KGHNADDCEDN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DODDIMPPCPF_KGHNADDCEDN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DODDIMPPCPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
