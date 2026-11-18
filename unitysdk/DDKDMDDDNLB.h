#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DDKDMDDDNLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12403BE0)
#define DDKDMDDDNLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12403B10)
#define DDKDMDDDNLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12403910)
#define DDKDMDDDNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x12403BD0)

inline static constexpr unsigned int DDKDMDDDNLB_TypeDefinitionIndex = 38790;

class DDKDMDDDNLB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::UnityEngine::RectTransform* HELAMPHDBEH; // 0x30
	::FGCOIBFFCHB* MGJHBBLNDJB; // 0x38
	::FGCOIBFFCHB* ALICOCODPML; // 0x40
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKDMDDDNLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDKDMDDDNLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKDMDDDNLB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDKDMDDDNLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
