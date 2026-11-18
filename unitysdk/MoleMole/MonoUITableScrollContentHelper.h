#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x1249A550)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_CNDLEOMOLKD_OFFSET UNITYSDK_OFFSET(0x1249A2A0)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x1249A4D0)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1249A170)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1249A020)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1249A260)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1249A120)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0x1249A430)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1249A480)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITableScrollContentHelper_TypeDefinitionIndex = 44501;

	class MonoUITableScrollContentHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::DrivenRectTransformTracker DPABCNMMDNE; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* AFEJAOEFIAO; // 0x20
		::UnityEngine::DrivenTransformProperties PIHKBJKBKON; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void RefreshDrivenRectTransformTracker(::UnityEngine::DrivenTransformProperties LGFDMAKEBBB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET))(this, LGFDMAKEBBB);
		}

		::UnityEngine::RectTransform* CNDLEOMOLKD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_CNDLEOMOLKD_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_AJEEBNCNHMN_OFFSET))(this);
		}
	};
}
