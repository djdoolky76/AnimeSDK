#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

class KDAAFPENHNM;
namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x11918590)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x11918D40)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETSTORYAT_OFFSET UNITYSDK_OFFSET(0x11918CB0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_COMMONDELAYINSEC_OFFSET UNITYSDK_OFFSET(0x11918C10)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STARTTIMEINSEC_OFFSET UNITYSDK_OFFSET(0x11918BC0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0x11918C60)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11918510)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_TypeDefinitionIndex = 65343;

	class GalBubbleStorySequenceNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* stories; // 0x20
		::System::Int32 StartTime; // 0x28
		::System::Int32 MinimumEndTime; // 0x2C
		::System::Int32 CommonDelay; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET))(this);
		}

		::System::Single GetDurationInSecExceptCommonDelay(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode* node)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, node);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_get_StartTimeInSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STARTTIMEINSEC_OFFSET))(this);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_get_CommonDelayInSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_COMMONDELAYINSEC_OFFSET))(this);
		}

		::System::Int32 MoleMole_Level_IBubbleSequenceSource_get_StoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STORYCOUNT_OFFSET))(this);
		}

		::KDAAFPENHNM* MoleMole_Level_IBubbleSequenceSource_GetStoryAt(::System::Int32 index)
		{
			return ((::KDAAFPENHNM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETSTORYAT_OFFSET))(this, index);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_GetDurationInSecExceptCommonDelay(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, index);
		}
	};
}
