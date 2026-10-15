#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B923B30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNodeUICache_TypeDefinitionIndex = 40409;

	class HEU_InputNodeUICache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _inputAssetCache; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _inputObjectCache; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_CTOR_OFFSET))(this);
		}

	};
}
