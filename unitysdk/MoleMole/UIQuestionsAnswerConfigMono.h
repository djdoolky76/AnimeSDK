#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }

#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_GET_SPECIALNPCCAMERAOFFSETDIC_OFFSET UNITYSDK_OFFSET(0x168DCC60)
#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_GET_SPECIALNPCEMOJIPOSDIC_OFFSET UNITYSDK_OFFSET(0x168DCEA0)
#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_SET_SPECIALNPCCAMERAOFFSETDIC_OFFSET UNITYSDK_OFFSET(0x168DCE90)
#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x168DD0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerConfigMono_TypeDefinitionIndex = 61850;

	class UIQuestionsAnswerConfigMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 ListNpcTag; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ScreenSceneObjectId; // 0x20
		::System::String* ScreenPrefabPath; // 0x28
		::System::String* MainPageLightTimelineKey; // 0x30
		::System::String* LightTimelineKey; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* FairyTips; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* FemaleFairyTips; // 0x48
		::UnityEngine::Vector3 ScreenPos; // 0x50
		::UnityEngine::Vector3 ScreenEuler; // 0x5C
		::System::Boolean CustomNpcPos; // 0x68
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 NpcPos; // 0x6C
		::UnityEngine::Vector3 NpcRot; // 0x78
		::UnityEngine::Vector3 FixCameraPos; // 0x84
		::UnityEngine::Vector3 FixCameraRot; // 0x90
		::System::Single Fov; // 0x9C
		::System::Single NpcCameraOffset; // 0xA0
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* KGMGJOEFDEO; // 0xA8
		::System::Collections::Generic::List_1<::System::Object*>* SpecialNpcCameraOffsetList; // 0xB0
		::MoleMole::Cameras::CameraTrackBlending* Blending; // 0xB8
		::System::String* NoisePath; // 0xC0
		::System::Single NoiseAmplitudeGain; // 0xC8
		::System::Single NoiseFrequencyGain; // 0xCC
		::System::Single NoiseDuration; // 0xD0
		::System::Single SpeakSpeed; // 0xD4
		::System::Single BlockInputTime; // 0xD8
		::System::Single ScoreTweenTime; // 0xDC
		::System::Single UIFadeDelayTime; // 0xE0
		::System::Single DoubleScoreTweenFirstTime; // 0xE4
		::System::Single DoubleScoreTweenStayTime; // 0xE8
		::System::Single DoubleScoreTweenSecoiindTime; // 0xEC
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* DFMOCBJFGCD; // 0xF0
		::System::Collections::Generic::List_1<::System::Object*>* SpecialNpcEmojiPosList; // 0xF8
		::UnityEngine::Gradient* TextColorGradient; // 0x100
		::System::Single TextColorDuration; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_SpecialNpcCameraOffsetDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_GET_SPECIALNPCCAMERAOFFSETDIC_OFFSET))(this);
		}

		::System::Void set_SpecialNpcCameraOffsetDic(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_SET_SPECIALNPCCAMERAOFFSETDIC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* get_SpecialNpcEmojiPosDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_GET_SPECIALNPCEMOJIPOSDIC_OFFSET))(this);
		}
	};
}
