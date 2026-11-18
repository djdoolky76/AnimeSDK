#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_AUDIO_SPINEANIMATIONAUDIOSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x130418E0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SpineAnimationAudioSetting_TypeDefinitionIndex = 80250;

	class SpineAnimationAudioSetting : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* animationAudioMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SPINEANIMATIONAUDIOSETTING__CTOR_OFFSET))(this);
		}
	};
}
