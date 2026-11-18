#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define IKHHEDMENDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x160B1990)
#define IKHHEDMENDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x160B18C0)
#define IKHHEDMENDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x160B1690)
#define IKHHEDMENDP__CTOR_OFFSET UNITYSDK_OFFSET(0x160B1980)

inline static constexpr unsigned int IKHHEDMENDP_TypeDefinitionIndex = 80970;

class IKHHEDMENDP : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* KOBEHMIKNKK; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::MoleMole::NotificationBadgeEx* NLMDKLKHDJC; // 0x28
	::MoleMole::NotificationBadgeEx* FDPJPINOLKG; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* JHFBNAJLFFE; // 0x38
	::UnityEngine::RectTransform* EFNEDNPPDIH; // 0x40
	::UnityEngine::RectTransform* KLNOJLDJCHI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHHEDMENDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHHEDMENDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHHEDMENDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHHEDMENDP_KGEBDLGBGNM_OFFSET))(this);
	}
};
