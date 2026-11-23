#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5465DB12F28B9AD/EE969F34BE357320.h"
#include "unitysdk/EB96EB273AFEDD6F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ABC_STREAMING_MONOWORLDSTREAMINGDEBUGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F5F0)

namespace ABC::Streaming
{
	inline static constexpr unsigned int MonoWorldStreamingDebugMap_TypeDefinitionIndex = 7746;

	class MonoWorldStreamingDebugMap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* circle; // 0x20
		::UnityEngine::GameObject* circleFull; // 0x28
		::UnityEngine::GameObject* square; // 0x30
		::UnityEngine::GameObject* squareFull; // 0x38
		::UnityEngine::RectTransform* root; // 0x40
		::UnityEngine::Transform* worldRootTrans; // 0x48
		::UnityEngine::Transform* sectorRootTrans; // 0x50
		::UnityEngine::Transform* streamingSourceLoadRangeTrans; // 0x58
		::UnityEngine::Transform* streamingSourceUnloadRangeTrans; // 0x60
		::UnityEngine::Vector2 originalVector; // 0x68
		::System::Single mapScale; // 0x70
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Single>* unloadRangeSizeList; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* loadRangeSizeList; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* vectors; // 0x88
		::System::Collections::Generic::List_1<::EB96EB273AFEDD6F>* sectorIDs; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* sectorVectors; // 0x98
		::System::Collections::Generic::List_1<::B5465DB12F28B9AD::EE969F34BE357320>* sectorStatus; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_STREAMING_MONOWORLDSTREAMINGDEBUGMAP__CTOR_OFFSET))(this);
		}
	};
}
