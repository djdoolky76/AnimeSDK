#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OJLDIDIGAPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE159A90)
#define OJLDIDIGAPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE159A00)
#define OJLDIDIGAPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE159890)
#define OJLDIDIGAPP__CTOR_OFFSET UNITYSDK_OFFSET(0xE159A80)

inline static constexpr unsigned int OJLDIDIGAPP_TypeDefinitionIndex = 47769;

class OJLDIDIGAPP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EBAOFIJCMEP; // 0x18
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLDIDIGAPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJLDIDIGAPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJLDIDIGAPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLDIDIGAPP_KGEBDLGBGNM_OFFSET))(this);
	}
};
