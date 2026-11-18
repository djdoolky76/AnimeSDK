#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13E1EFA0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1F0D0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeTransform3D_TypeDefinitionIndex = 47886;

	class LDMakeTransform3D : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKETRANSFORM3D_REGISTERPORTS_OFFSET))(this);
		}
	};
}
