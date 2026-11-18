#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NJJFHMBMGKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1375D8F0)
#define NJJFHMBMGKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1375D790)
#define NJJFHMBMGKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1375D8E0)

inline static constexpr unsigned int NJJFHMBMGKL_TypeDefinitionIndex = 47137;

class NJJFHMBMGKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IILOLNCCHPK; // 0x18
	::UnityEngine::RectTransform* OFHBCMBDNHD; // 0x20
	::ShaderAniHelp* FFNMNOGFJJO; // 0x28
	::UnityEngine::RectTransform* MNABDGNNEAA; // 0x30
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JHPDLEBBFEF; // 0x40
	::UnityEngine::RectTransform* PKKPPPEIDEL; // 0x48
	::UnityEngine::RectTransform* GOHLGCJPNCO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJFHMBMGKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJJFHMBMGKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJJFHMBMGKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
