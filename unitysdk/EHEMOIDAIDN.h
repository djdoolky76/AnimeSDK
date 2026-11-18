#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EHEMOIDAIDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154B0750)
#define EHEMOIDAIDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154B0640)
#define EHEMOIDAIDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154B03F0)
#define EHEMOIDAIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x154B0740)

inline static constexpr unsigned int EHEMOIDAIDN_TypeDefinitionIndex = 87103;

class EHEMOIDAIDN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PKKIGGFKLBM; // 0x18
	::FGCOIBFFCHB* DPKHPNHNKLL; // 0x20
	::UnityEngine::Transform* BJEHKHOHCPE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IIGDPKEGJBN; // 0x30
	::UnityEngine::Transform* IMDLHCPGEDN; // 0x38
	::UnityEngine::RectTransform* IOECKALGAIB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DKFPNEPLKII; // 0x48
	::UnityEngine::RectTransform* FCAGIOJHHBC; // 0x50
	::UnityEngine::RectTransform* HAHNNHLMKGO; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEMOIDAIDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHEMOIDAIDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEMOIDAIDN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHEMOIDAIDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
