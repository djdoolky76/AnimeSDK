#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DAPAKGHBIPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1973C770)
#define DAPAKGHBIPJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1973C6C0)
#define DAPAKGHBIPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1973C4F0)
#define DAPAKGHBIPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1973C760)

inline static constexpr unsigned int DAPAKGHBIPJ_TypeDefinitionIndex = 82929;

class DAPAKGHBIPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x28
	::FGCOIBFFCHB* EKFNNJIKOPL; // 0x30
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPAKGHBIPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAPAKGHBIPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAPAKGHBIPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPAKGHBIPJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
