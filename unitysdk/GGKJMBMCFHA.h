#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define GGKJMBMCFHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149C3070)
#define GGKJMBMCFHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149C2FE0)
#define GGKJMBMCFHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149C2E70)
#define GGKJMBMCFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x149C3060)

inline static constexpr unsigned int GGKJMBMCFHA_TypeDefinitionIndex = 49464;

class GGKJMBMCFHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKJMBMCFHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGKJMBMCFHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGKJMBMCFHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKJMBMCFHA_KGEBDLGBGNM_OFFSET))(this);
	}
};
