#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;

#define PGAEHMGNBIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15538CA0)
#define PGAEHMGNBIA_GBMFFFKIKNB_OFFSET UNITYSDK_OFFSET(0x155389C0)
#define PGAEHMGNBIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15538BB0)
#define PGAEHMGNBIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15538800)
#define PGAEHMGNBIA__CTOR_OFFSET UNITYSDK_OFFSET(0x15538C90)

inline static constexpr unsigned int PGAEHMGNBIA_TypeDefinitionIndex = 41739;

class PGAEHMGNBIA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* HEEGMLBJJJI; // 0x20
	::UnityEngine::Transform* JFDOOELFAOA; // 0x28
	::UnityEngine::Transform* DPNLLKMJMMB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PINIDEDDLOL; // 0x38
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* BMBKBLEDFMI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAEHMGNBIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGAEHMGNBIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAEHMGNBIA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGAEHMGNBIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* GBMFFFKIKNB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGAEHMGNBIA_GBMFFFKIKNB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
