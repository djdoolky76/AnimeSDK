#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONONODESWITCHBYGENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2694C0)
#define RPG_CLIENT_MONONODESWITCHBYGENDER_START_OFFSET UNITYSDK_OFFSET(0x1D269390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNodeSwitchByGender_TypeDefinitionIndex = 74902;

	class MonoNodeSwitchByGender : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* MaleActiveRT; // 0x18
		::UnityEngine::RectTransform* FemaleActiveRT; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGENDER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGENDER_START_OFFSET))(this);
		}

	};
}
