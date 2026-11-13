#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_AOMEFBBHHNP_1_OFFSET UNITYSDK_OFFSET(0x1D9014A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_AOMEFBBHHNP_OFFSET UNITYSDK_OFFSET(0x1D901650)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_BHNPJGJAPHG_OFFSET UNITYSDK_OFFSET(0x1D9016A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D901490)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_FIJGOBLAGDL_OFFSET UNITYSDK_OFFSET(0x1D900E10)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1D900DB0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeAutoMouthConfig_TypeDefinitionIndex = 49779;

	class EmoBlendShapeAutoMouthConfig : public ::System::Object
	{
	public:
		::System::UInt32 talkSentenceID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* dataPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_CTOR_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_GET_ASSETPATH_OFFSET))(this);
		}

		static ::System::String* AOMEFBBHHNP(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_AOMEFBBHHNP_OFFSET))(a1);
		}

		static ::System::String* AOMEFBBHHNP_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_AOMEFBBHHNP_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean FIJGOBLAGDL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_FIJGOBLAGDL_OFFSET))(a1);
		}

		static ::System::String* BHNPJGJAPHG(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_BHNPJGJAPHG_OFFSET))(a1, a2, a3);
		}

	};
}
