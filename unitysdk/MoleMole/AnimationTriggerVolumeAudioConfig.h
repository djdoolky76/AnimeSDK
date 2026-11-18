#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace MoleMole { class AnimationTriggerVolumeAudioConfig_SegmentAudio; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_ELADDKAOAIO_OFFSET UNITYSDK_OFFSET(0x131B6120)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_KCHDPEMEHPB_OFFSET UNITYSDK_OFFSET(0x131B5F00)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_PGHMCEBMNCF_OFFSET UNITYSDK_OFFSET(0x131B6240)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x131B5E20)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolumeAudioConfig_TypeDefinitionIndex = 84655;

	class AnimationTriggerVolumeAudioConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* segments; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _lookup; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void KCHDPEMEHPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_KCHDPEMEHPB_OFFSET))(this);
		}

		::MoleMole::AnimationTriggerVolumeAudioConfig_SegmentAudio* ELADDKAOAIO(::System::String* OBGNOPJGIHM)
		{
			return ((::MoleMole::AnimationTriggerVolumeAudioConfig_SegmentAudio*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_ELADDKAOAIO_OFFSET))(this, OBGNOPJGIHM);
		}

		::System::Void PGHMCEBMNCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUMEAUDIOCONFIG_PGHMCEBMNCF_OFFSET))(this);
		}
	};
}
