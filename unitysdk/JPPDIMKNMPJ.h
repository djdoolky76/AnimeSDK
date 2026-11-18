#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define JPPDIMKNMPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B5EC60)
#define JPPDIMKNMPJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B5EB60)
#define JPPDIMKNMPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B5E970)
#define JPPDIMKNMPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5EC50)

inline static constexpr unsigned int JPPDIMKNMPJ_TypeDefinitionIndex = 44906;

class JPPDIMKNMPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x18
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::FGCOIBFFCHB* OEFMINBLAGB; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::MoleMole::NotificationBadgeEx* BHHKPPEFJKH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPDIMKNMPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPPDIMKNMPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPPDIMKNMPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPDIMKNMPJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
