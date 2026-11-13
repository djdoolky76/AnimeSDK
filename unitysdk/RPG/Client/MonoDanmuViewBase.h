#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONODANMUVIEWBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14021D50)
#define RPG_CLIENT_MONODANMUVIEWBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x14021DF0)
#define RPG_CLIENT_MONODANMUVIEWBASE_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x14021D30)
#define RPG_CLIENT_MONODANMUVIEWBASE_SET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x14021D40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuViewBase_TypeDefinitionIndex = 70904;

	class MonoDanmuViewBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _RectTransform_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUVIEWBASE_CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUVIEWBASE_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUVIEWBASE_SET_RECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUVIEWBASE_AWAKE_OFFSET))(this);
		}

	};
}
