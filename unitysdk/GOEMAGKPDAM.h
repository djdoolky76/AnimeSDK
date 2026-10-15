#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define GOEMAGKPDAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2CA90)
#define GOEMAGKPDAM_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15B2C520)
#define GOEMAGKPDAM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B2C600)

inline static constexpr unsigned int GOEMAGKPDAM_TypeDefinitionIndex = 48459;

	class GOEMAGKPDAM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* LCOPDJCBHJP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* DDJNNLKPJBF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEMAGKPDAM_CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GOEMAGKPDAM_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GOEMAGKPDAM_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
