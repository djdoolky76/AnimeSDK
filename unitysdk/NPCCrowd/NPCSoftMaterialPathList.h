#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

#define NPCCROWD_NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET UNITYSDK_OFFSET(0xF159870)
#define NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF159860)
#define NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xF1597F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMaterialPathList_TypeDefinitionIndex = 83555;

	class NPCSoftMaterialPathList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::Foundation::AssetPath>* paths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET))(this, paths);
		}

		::Il2CppArray<::Foundation::AssetPath>* GetPaths()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET))(this);
		}
	};
}
