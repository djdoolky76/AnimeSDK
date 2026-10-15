#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EDITORMONOREGIONVARIENTSET_CTOR_OFFSET UNITYSDK_OFFSET(0x155D40A0)

inline static constexpr unsigned int EditorMonoRegionVarientSet_TypeDefinitionIndex = 47398;

	class EditorMonoRegionVarientSet : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORMONOREGIONVARIENTSET_CTOR_OFFSET))(this);
		}

	};
