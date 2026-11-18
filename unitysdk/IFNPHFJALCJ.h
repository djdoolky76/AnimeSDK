#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define IFNPHFJALCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x153A5940)
#define IFNPHFJALCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153A5840)
#define IFNPHFJALCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153A55E0)
#define IFNPHFJALCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x153A5930)

inline static constexpr unsigned int IFNPHFJALCJ_TypeDefinitionIndex = 52364;

class IFNPHFJALCJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CONBBLDCMED; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* EHFGBADJKDG; // 0x28
	::UnityEngine::RectTransform* ANDHLPBLPBG; // 0x30
	::UnityEngine::RectTransform* AJIBHBJNOCE; // 0x38
	::MoleMole::NotificationBadgeEx* HFCOKPBMGGA; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* PNCBKGGEPEM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNPHFJALCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFNPHFJALCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFNPHFJALCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNPHFJALCJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
