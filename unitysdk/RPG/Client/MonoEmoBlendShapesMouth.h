#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class JMNAGCHOAKN;
namespace RPG::Client { class EmoBlendShapesConfig; }
namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesMouthConfig; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_AWAKE_OFFSET UNITYSDK_OFFSET(0xD81CFE0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_CDICGOGNCHJ_OFFSET UNITYSDK_OFFSET(0xD81C080)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_CTOR_OFFSET UNITYSDK_OFFSET(0xD81D0C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xD81BBB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_ENABLEAUTOMOUTH_OFFSET UNITYSDK_OFFSET(0xD81ACB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_MOUTHVALUEMAP_OFFSET UNITYSDK_OFFSET(0xD81BA30)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xD81BA20)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ISBLENDSHAPESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD81AC40)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_JKEACLDGKJM_OFFSET UNITYSDK_OFFSET(0xD81C9F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_MPCIDNPPHOE_OFFSET UNITYSDK_OFFSET(0xD81C030)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONAUDIOLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xD81BA40)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD81D030)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_1_OFFSET UNITYSDK_OFFSET(0xD81BDB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_2_OFFSET UNITYSDK_OFFSET(0xD81BE30)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_OFFSET UNITYSDK_OFFSET(0xD81BCE0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_RESET_OFFSET UNITYSDK_OFFSET(0xD81CB20)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_SETUPFRAMEDELTATIME_OFFSET UNITYSDK_OFFSET(0xD81BFD0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_STOP_OFFSET UNITYSDK_OFFSET(0xD81BB30)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_TICK_OFFSET UNITYSDK_OFFSET(0xD81AD20)

namespace RPG::Client
{
	class MonoEmoBlendShapesMouth : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single fadeInTime; // 0x18
		::System::Single fadeOutTime; // 0x1C
		::RPG::Client::MonoEmoBlendShapesController* JIIKAEMELPJ; // 0x20
		::RPG::Client::EmoBlendShapesConfig* EABKOHGCHFP; // 0x28
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* GBGEECIKLDM; // 0x30
		::System::Single MJCHILLNDCM; // 0x38
		::System::Single ILJHAGGBLBC; // 0x3C
		::System::Single CEBKHBHBNKK; // 0x40
		::System::Single KHGHNLHFGHM; // 0x44
		::System::Single KJLHNBJMPDC; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* FFCOMNJBGNF; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* CMIMENCPGAE; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* MDOGDHOPFKK; // 0x60
		::System::String* GPMCKOJDADG; // 0x68
		::System::Boolean GMOBMDCCOOF; // 0x70
		static ::System::Boolean* StaticGet_UseOldMethod()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "MonoEmoBlendShapesMouth")->GetStaticField(0x14CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_CTOR_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_WEIGHT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* get_MouthValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_MOUTHVALUEMAP_OFFSET))(this);
		}

		::System::Boolean get_EnableAutoMouth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_ENABLEAUTOMOUTH_OFFSET))(this);
		}

		::System::Void OnAudioLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONAUDIOLANGUAGECHANGED_OFFSET))(this);
		}

		::System::Void Play(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_1(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EGNMELNENAC(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_EGNMELNENAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Play_2(::System::String* a1, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_STOP_OFFSET))(this);
		}

		::System::Void SetupFrameDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_SETUPFRAMEDELTATIME_OFFSET))(this, a1);
		}

		::System::Boolean IsBlendShapesOverride(::JMNAGCHOAKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMNAGCHOAKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ISBLENDSHAPESOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_TICK_OFFSET))(this, a1);
		}

		::System::Void MPCIDNPPHOE(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_MPCIDNPPHOE_OFFSET))(this, a1);
		}

		::System::Void CDICGOGNCHJ(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_CDICGOGNCHJ_OFFSET))(this, a1);
		}

		::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig* JKEACLDGKJM(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
		{
			return ((::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_JKEACLDGKJM_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_RESET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONDESTROY_OFFSET))(this);
		}

	};
}
