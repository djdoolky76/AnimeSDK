#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8ED950)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE8ED990)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__GET__GETBLENDNAMES_B__5_0_OFFSET UNITYSDK_OFFSET(0xE8ED9A0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeBehaviour___c_TypeDefinitionIndex = 48756;

	class EmoDiscussionBlendShapeBehaviour___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "<>c")->GetStaticField(0x6FC60);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "<>c")->GetStaticField(0x6FC68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C_CTOR_OFFSET))(this);
		}

		::System::String* _get__GetBlendNames_b__5_0(::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__GET__GETBLENDNAMES_B__5_0_OFFSET))(this, a1);
		}

	};
}
