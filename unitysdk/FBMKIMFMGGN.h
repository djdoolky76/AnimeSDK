#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define FBMKIMFMGGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14284B30)
#define FBMKIMFMGGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14284A60)
#define FBMKIMFMGGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14284890)
#define FBMKIMFMGGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14284B20)

inline static constexpr unsigned int FBMKIMFMGGN_TypeDefinitionIndex = 90606;

class FBMKIMFMGGN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::UnityEngine::Transform* CCOPHCPCIAA; // 0x20
	::LGINJIKKBJA* NFMOOAHNCKI; // 0x28
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::MoleMole::NotificationBadgeEx* HEHGIBHCPED; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMKIMFMGGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBMKIMFMGGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMKIMFMGGN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBMKIMFMGGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
