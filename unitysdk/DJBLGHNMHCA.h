#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class MEKABAIJMNM_1;

#define DJBLGHNMHCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1E46C0)
#define DJBLGHNMHCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1E44D0)
#define DJBLGHNMHCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1E41A0)
#define DJBLGHNMHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E46B0)

inline static constexpr unsigned int DJBLGHNMHCA_TypeDefinitionIndex = 65586;

class DJBLGHNMHCA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FECGJBNLJGC; // 0x18
	::FGCOIBFFCHB* JLIFOFDJNMK; // 0x20
	::MonoUITableScrollV2* GCOEPEKINBF; // 0x28
	::UnityEngine::Transform* MDNFGDIGEJO; // 0x30
	::UnityEngine::Transform* GMDHEJIAEHB; // 0x38
	::LGINJIKKBJA* HHMLOIKEIAI; // 0x40
	::LGINJIKKBJA* BKDDKDMILCA; // 0x48
	::FGCOIBFFCHB* JEKHGMOBJMD; // 0x50
	::UnityEngine::Transform* CMNAKLNHBKJ; // 0x58
	::UnityEngine::Animation* CHICNFGHFHK; // 0x60
	::FGCOIBFFCHB* ELCFEAFMPKP; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* ICONPHLDHDH; // 0x70
	::UnityEngine::GameObject* AMLGJLFOLKE; // 0x78
	::LGINJIKKBJA* LAOCECFHFNM; // 0x80
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBLGHNMHCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJBLGHNMHCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJBLGHNMHCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBLGHNMHCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
