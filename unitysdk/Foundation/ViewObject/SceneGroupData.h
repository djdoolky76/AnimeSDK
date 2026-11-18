#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectInstanceSource.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class LCDNBAKJFKF;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneGroupData_TypeDefinitionIndex = 58702;

	struct alignas(8) SceneGroupData
	{
		::LCDNBAKJFKF* ServerInfo; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
		::Foundation::ViewObject::EViewObjectInstanceSource Source; // 0x28
	};
}
