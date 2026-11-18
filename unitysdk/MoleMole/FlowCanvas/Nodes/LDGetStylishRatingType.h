#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D92B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D9490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishRatingType_TypeDefinitionIndex = 48718;

	class LDGetStylishRatingType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET))(this);
		}

		::MoleMole::Level::RatingType Invoke()
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET))(this);
		}
	};
}
