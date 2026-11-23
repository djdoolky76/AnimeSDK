#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class B8B6637DAC2825CD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_STREAMING_LODCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD4A0)

namespace ABC::Streaming
{
	inline static constexpr unsigned int LODComponent_TypeDefinitionIndex = 7330;

	class LODComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 LODMaskID; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::E865F6F8B8B44C1E>* LODMeshGroup; // 0x28
		::B8B6637DAC2825CD* LODObject; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_STREAMING_LODCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
