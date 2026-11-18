#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPRIGHSHOPROWIMAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1563B880)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRighShopRowImageContext_TypeDefinitionIndex = 58650;

	class UIUrbanMapRighShopRowImageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath Icon; // 0x28
		::Foundation::AssetPath QuestIcon; // 0x38
		::System::Boolean ShowLevel; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 Level; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHSHOPROWIMAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
