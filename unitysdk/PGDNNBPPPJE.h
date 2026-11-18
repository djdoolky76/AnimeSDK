#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PGDNNBPPPJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDB76B0)
#define PGDNNBPPPJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFDB7590)
#define PGDNNBPPPJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDB7140)
#define PGDNNBPPPJE_PDPHJKFGCED_OFFSET UNITYSDK_OFFSET(0xFDB7440)
#define PGDNNBPPPJE__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB76A0)

inline static constexpr unsigned int PGDNNBPPPJE_TypeDefinitionIndex = 50405;

class PGDNNBPPPJE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MPEEBHPDOML; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::MonoUITableScrollV2* FHHGLGJBPMF; // 0x28
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>* EKMAOANMJBE; // 0x38
	::LGINJIKKBJA* MAHNABIKKDL; // 0x40
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x48
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x50
	::MoleMole::MonoGamepadNavigatableList* FLNFOKNMEJL; // 0x58
	::MoleMole::MonoGamepadCustomList* ODNACHLLOFJ; // 0x60
	::UnityEngine::GameObject* EAIMGODFELN; // 0x68
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x70
	::LGINJIKKBJA* JPKIBDKOOPJ; // 0x78
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x80
	::MoleMole::MonoGamepadNavigatableList* LJNGCIPJIEB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDNNBPPPJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGDNNBPPPJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGDNNBPPPJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDNNBPPPJE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>* PDPHJKFGCED(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGDNNBPPPJE_PDPHJKFGCED_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
