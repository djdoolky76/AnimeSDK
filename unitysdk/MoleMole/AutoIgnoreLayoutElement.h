#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutElement.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_DAEDDLFJCPP_OFFSET UNITYSDK_OFFSET(0x18B780B0)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x18B77940)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x18B78300)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x18B77F20)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18B77F70)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x18B782F0)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_KMIAIJJAKFF_OFFSET UNITYSDK_OFFSET(0x18B779A0)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B77DC0)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B77D30)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x18B77ED0)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT_PCLPKCCIOFE_OFFSET UNITYSDK_OFFSET(0x18B78400)
#define MOLEMOLE_AUTOIGNORELAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B77FC0)

namespace MoleMole
{
	inline static constexpr unsigned int AutoIgnoreLayoutElement_TypeDefinitionIndex = 75369;

	class AutoIgnoreLayoutElement : public ::UnityEngine::UI::LayoutElement
	{
	public:
		::System::Boolean m_AutoIgnoreWhenEmpty; // 0x38
		::System::Boolean m_Recursive; // 0x39
		::System::Boolean m_TreatNoChildAsEmpty; // 0x3A
		::System::Byte _padding0[0x5];
		::UnityEngine::RectTransform* PHGMBMFNCEL; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PAJLJBMIOLN; // 0x48
		::System::Boolean FGGCNMPNDPA; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ignoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_GET_IGNORELAYOUT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_INVALIDATE_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean KMIAIJJAKFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_KMIAIJJAKFF_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Boolean PCLPKCCIOFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_PCLPKCCIOFE_OFFSET))(this);
		}

		::System::Void DAEDDLFJCPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOIGNORELAYOUTELEMENT_DAEDDLFJCPP_OFFSET))(this);
		}
	};
}
