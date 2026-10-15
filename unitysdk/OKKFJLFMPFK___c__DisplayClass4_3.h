#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define OKKFJLFMPFK___C__DISPLAYCLASS4_3_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDA800)
#define OKKFJLFMPFK___C__DISPLAYCLASS4_3__ONTASKBEGIN_B__3_OFFSET UNITYSDK_OFFSET(0xBEE1900)

inline static constexpr unsigned int OKKFJLFMPFK___c__DisplayClass4_3_TypeDefinitionIndex = 56374;

	template <typename T1, typename T2, typename T3>
	class OKKFJLFMPFK___c__DisplayClass4_3 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pOwnerGo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_3_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_3__ONTASKBEGIN_B__3_OFFSET))(this, a1, a2);
		}

	};
