#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKLCMFLDIB_FHAHGJPIIIN;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define KNKLCMFLDIB___C__DISPLAYCLASS26_1_CTOR_OFFSET UNITYSDK_OFFSET(0x18FACC10)
#define KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x18FADBA0)
#define KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__1_OFFSET UNITYSDK_OFFSET(0x18FADBF0)
#define KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__2_OFFSET UNITYSDK_OFFSET(0x18FADC40)

inline static constexpr unsigned int KNKLCMFLDIB___c__DisplayClass26_1_TypeDefinitionIndex = 81569;

	template <typename T>
	class KNKLCMFLDIB___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::KNKLCMFLDIB_FHAHGJPIIIN* runtime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKLCMFLDIB___C__DISPLAYCLASS26_1_CTOR_OFFSET))(this);
		}

		::System::Void __LoadTrackVisualStreamingItems_b__0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __LoadTrackVisualStreamingItems_b__1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __LoadTrackVisualStreamingItems_b__2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + KNKLCMFLDIB___C__DISPLAYCLASS26_1___LOADTRACKVISUALSTREAMINGITEMS_B__2_OFFSET))(this, a1, a2);
		}

	};
