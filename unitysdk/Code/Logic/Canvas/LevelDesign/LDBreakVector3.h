#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1327FD40)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1327FEC0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakVector3_TypeDefinitionIndex = 44410;

	class LDBreakVector3 : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3_REGISTERPORTS_OFFSET))(this);
		}
	};
}
