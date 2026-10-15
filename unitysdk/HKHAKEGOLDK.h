#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace UnityEngine { class RectTransform; }

#define HKHAKEGOLDK_CBFCHPGOLLI_OFFSET UNITYSDK_OFFSET(0x15D43BF0)
#define HKHAKEGOLDK_CGEPGFHCEDD_OFFSET UNITYSDK_OFFSET(0x15D43A90)
#define HKHAKEGOLDK_CLCBKHJJPDL_OFFSET UNITYSDK_OFFSET(0x15D43E70)
#define HKHAKEGOLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D44120)

inline static constexpr unsigned int HKHAKEGOLDK_TypeDefinitionIndex = 74759;

	class HKHAKEGOLDK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHAKEGOLDK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 CGEPGFHCEDD(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo*, ::System::Single))((::PBYTE)hIl2Cpp + HKHAKEGOLDK_CGEPGFHCEDD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 CBFCHPGOLLI(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::RPG::Client::SequentialPanelContainer::EdgeDirection a4, ::RPG::Client::SequentialPanelContainer::EdgeDirection a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Vector2 a8)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HKHAKEGOLDK_CBFCHPGOLLI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 CLCBKHJJPDL(::UnityEngine::RectTransform* a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + HKHAKEGOLDK_CLCBKHJJPDL_OFFSET))(this, a1, a2);
		}

	};
