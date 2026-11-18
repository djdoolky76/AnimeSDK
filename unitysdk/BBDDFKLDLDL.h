#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define BBDDFKLDLDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11BE6FD0)
#define BBDDFKLDLDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11BE6F20)
#define BBDDFKLDLDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11BE6B00)
#define BBDDFKLDLDL_OLOEKMIOONH_OFFSET UNITYSDK_OFFSET(0x11BE6D30)
#define BBDDFKLDLDL__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE6FC0)

inline static constexpr unsigned int BBDDFKLDLDL_TypeDefinitionIndex = 51677;

class BBDDFKLDLDL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HEMHNGEEMMC; // 0x18
	::UnityEngine::RectTransform* HOGFNHGJMAH; // 0x20
	::GCIMMDDIFBJ* LIOKIPAMKBO; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* MLGEMMDLCJP; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* PMDDCEJOAOP; // 0x38
	::UnityEngine::RectTransform* JGAPAIDIGPL; // 0x40
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* IBPCBALIECJ; // 0x48
	::UnityEngine::RectTransform* KFKJHBMJHMA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDDFKLDLDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBDDFKLDLDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OLOEKMIOONH(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBDDFKLDLDL_OLOEKMIOONH_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBDDFKLDLDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDDFKLDLDL_KGEBDLGBGNM_OFFSET))(this);
	}
};
