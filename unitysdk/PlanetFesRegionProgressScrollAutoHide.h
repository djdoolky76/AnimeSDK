#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC393C70)
#define PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_KEENPLHLENK_OFFSET UNITYSDK_OFFSET(0xC393A40)
#define PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC393920)

inline static constexpr unsigned int PlanetFesRegionProgressScrollAutoHide_TypeDefinitionIndex = 47237;

	class PlanetFesRegionProgressScrollAutoHide : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::ScrollRect* scrollRect; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* targetItems; // 0x20
		::System::Single topVisibilityThreshold; // 0x28
		::System::Single bottomVisibilityThreshold; // 0x2C
		::System::Single leftVisibilityThreshold; // 0x30
		::System::Single rightVisibilityThreshold; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_UPDATE_OFFSET))(this);
		}

		::System::Void KEENPLHLENK(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + PLANETFESREGIONPROGRESSSCROLLAUTOHIDE_KEENPLHLENK_OFFSET))(this, a1);
		}

	};
