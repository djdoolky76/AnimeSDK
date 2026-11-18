#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define PCIDFFDEGGL_NPHKFEEPCNA_LFJMFBLNDMM_OFFSET UNITYSDK_OFFSET(0x18460D20)
#define PCIDFFDEGGL_NPHKFEEPCNA_NDLDGDMHDFJ_OFFSET UNITYSDK_OFFSET(0x184609F0)
#define PCIDFFDEGGL_NPHKFEEPCNA_NJJCNGAAFAH_OFFSET UNITYSDK_OFFSET(0x18460AC0)
#define PCIDFFDEGGL_NPHKFEEPCNA__CTOR_OFFSET UNITYSDK_OFFSET(0x184609E0)

inline static constexpr unsigned int PCIDFFDEGGL_NPHKFEEPCNA_TypeDefinitionIndex = 65551;

class PCIDFFDEGGL_NPHKFEEPCNA : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::Boolean>* EJGDHCIBCJH; // 0x10
	::UnityEngine::RectTransform* MGOFOAFCFIJ; // 0x18
	::System::Boolean JOBHFEMGBDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL_NPHKFEEPCNA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 NDLDGDMHDFJ()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL_NPHKFEEPCNA_NDLDGDMHDFJ_OFFSET))(this);
	}

	::System::Void NJJCNGAAFAH(::UnityEngine::Vector2 HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PCIDFFDEGGL_NPHKFEEPCNA_NJJCNGAAFAH_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void LFJMFBLNDMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL_NPHKFEEPCNA_LFJMFBLNDMM_OFFSET))(this);
	}
};
