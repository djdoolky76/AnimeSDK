#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MCPBDOFOHCO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D508D0)
#define MCPBDOFOHCO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D50800)
#define MCPBDOFOHCO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D50690)
#define MCPBDOFOHCO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D508C0)

inline static constexpr unsigned int MCPBDOFOHCO_TypeDefinitionIndex = 54146;

class MCPBDOFOHCO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPBDOFOHCO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPBDOFOHCO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPBDOFOHCO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPBDOFOHCO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
