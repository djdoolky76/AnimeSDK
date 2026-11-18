#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define MIKFLMDJKIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E30700)
#define MIKFLMDJKIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E30630)
#define MIKFLMDJKIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E303E0)
#define MIKFLMDJKIA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E306F0)

inline static constexpr unsigned int MIKFLMDJKIA_TypeDefinitionIndex = 78604;

class MIKFLMDJKIA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x20
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* DHPMOOJCDHN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NGNCPKELCEL; // 0x38
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x40
	::UnityEngine::RectTransform* FLMKBHEPNNF; // 0x48
	::UnityEngine::RectTransform* BPLHGDNBDFH; // 0x50
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x58
	::MoleMole::MonoGamepadSelectable* BIFNJFGLIFA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKFLMDJKIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIKFLMDJKIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIKFLMDJKIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKFLMDJKIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
