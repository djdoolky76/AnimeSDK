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

#define BHJJACNAACK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115EA5F0)
#define BHJJACNAACK_GBMFFFKIKNB_OFFSET UNITYSDK_OFFSET(0x115EA2B0)
#define BHJJACNAACK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x115EA4B0)
#define BHJJACNAACK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115EA060)
#define BHJJACNAACK__CTOR_OFFSET UNITYSDK_OFFSET(0x115EA5E0)

inline static constexpr unsigned int BHJJACNAACK_TypeDefinitionIndex = 62204;

class BHJJACNAACK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::Transform* MCGPPADHCLJ; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* BMBKBLEDFMI; // 0x28
	::UnityEngine::Transform* MCJCCJOEKGN; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* ILKIDNPCMGA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* KFKBKELPIOA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJJACNAACK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHJJACNAACK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* GBMFFFKIKNB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHJJACNAACK_GBMFFFKIKNB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHJJACNAACK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJJACNAACK_KGEBDLGBGNM_OFFSET))(this);
	}
};
