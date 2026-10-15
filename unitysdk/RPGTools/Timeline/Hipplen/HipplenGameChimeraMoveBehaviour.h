#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F8C10)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_KLNIIIOFHBD_OFFSET UNITYSDK_OFFSET(0xE8F8880)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8F8600)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE8F8AF0)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenGameChimeraMoveBehaviour_TypeDefinitionIndex = 48648;

	class HipplenGameChimeraMoveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveData* Config; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _SourcePathPoints; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void KLNIIIOFHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVEBEHAVIOUR_KLNIIIOFHBD_OFFSET))(this);
		}

	};
}
