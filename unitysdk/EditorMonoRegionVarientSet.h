#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EDITORMONOREGIONVARIENTSET_CTOR_OFFSET UNITYSDK_OFFSET(0x155DFAD0)

	class EditorMonoRegionVarientSet : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORMONOREGIONVARIENTSET_CTOR_OFFSET))(this);
		}

	};
