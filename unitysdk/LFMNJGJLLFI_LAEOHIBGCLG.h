#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define LFMNJGJLLFI_LAEOHIBGCLG_LFJMFBLNDMM_OFFSET UNITYSDK_OFFSET(0x14DAA630)
#define LFMNJGJLLFI_LAEOHIBGCLG_NDLDGDMHDFJ_OFFSET UNITYSDK_OFFSET(0x14DAA560)
#define LFMNJGJLLFI_LAEOHIBGCLG_NJJCNGAAFAH_OFFSET UNITYSDK_OFFSET(0x14DAA300)
#define LFMNJGJLLFI_LAEOHIBGCLG__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAA2F0)

inline static constexpr unsigned int LFMNJGJLLFI_LAEOHIBGCLG_TypeDefinitionIndex = 63519;

class LFMNJGJLLFI_LAEOHIBGCLG : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::Boolean>* EJGDHCIBCJH; // 0x10
	::UnityEngine::RectTransform* MGOFOAFCFIJ; // 0x18
	::System::Boolean JOBHFEMGBDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI_LAEOHIBGCLG__CTOR_OFFSET))(this);
	}

	::System::Void NJJCNGAAFAH(::UnityEngine::Vector2 HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LFMNJGJLLFI_LAEOHIBGCLG_NJJCNGAAFAH_OFFSET))(this, HAAEBCOBKFF);
	}

	::UnityEngine::Vector2 NDLDGDMHDFJ()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI_LAEOHIBGCLG_NDLDGDMHDFJ_OFFSET))(this);
	}

	::System::Void LFJMFBLNDMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI_LAEOHIBGCLG_LFJMFBLNDMM_OFFSET))(this);
	}
};
