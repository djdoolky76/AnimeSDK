#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LJILLBFDPJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15192A90)
#define LJILLBFDPJD_HKFPLBIFAHJ_OFFSET UNITYSDK_OFFSET(0x15192930)
#define LJILLBFDPJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15192800)
#define LJILLBFDPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15192A80)

inline static constexpr unsigned int LJILLBFDPJD_TypeDefinitionIndex = 87956;

class LJILLBFDPJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x18
	::UnityEngine::RectTransform* ICHNNHOAOMI; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MOGHNKEPOMG; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AFKGNJKOCDK; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ODCDFGDMFCG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJILLBFDPJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJILLBFDPJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJILLBFDPJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HKFPLBIFAHJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJILLBFDPJD_HKFPLBIFAHJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
