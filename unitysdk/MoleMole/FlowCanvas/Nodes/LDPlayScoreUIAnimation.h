#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/ScoreUIAnimationType.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSCOREUIANIMATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x10412090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSCOREUIANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x104121D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayScoreUIAnimation_TypeDefinitionIndex = 54512;

	class LDPlayScoreUIAnimation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSCOREUIANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::BubbleType bubbleType, ::MoleMole::ScoreUIAnimationType animationType, ::System::String* animation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BubbleType, ::MoleMole::ScoreUIAnimationType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSCOREUIANIMATION_INVOKE_OFFSET))(this, bubbleType, animationType, animation);
		}
	};
}
