#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define MPMMPCAECLP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18B60050)
#define MPMMPCAECLP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18B5FF80)
#define MPMMPCAECLP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18B5FE30)
#define MPMMPCAECLP__CTOR_OFFSET UNITYSDK_OFFSET(0x18B60040)

inline static constexpr unsigned int MPMMPCAECLP_TypeDefinitionIndex = 42241;

class MPMMPCAECLP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IANDPKMMGLK; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMMPCAECLP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPMMPCAECLP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMMPCAECLP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPMMPCAECLP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
