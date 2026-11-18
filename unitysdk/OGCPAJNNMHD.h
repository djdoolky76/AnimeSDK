#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define OGCPAJNNMHD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F69630)
#define OGCPAJNNMHD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F69550)
#define OGCPAJNNMHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F69620)

inline static constexpr unsigned int OGCPAJNNMHD_TypeDefinitionIndex = 81020;

class OGCPAJNNMHD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::UnityEngine::Animation* LJDCJJJEGGO; // 0x20
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCPAJNNMHD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGCPAJNNMHD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGCPAJNNMHD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
