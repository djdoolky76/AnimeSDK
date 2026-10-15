#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class JMNAGCHOAKN;
namespace RPG::Client { class EmoBlendShapeBlinkConfig; }
namespace RPG::Client { class EmoBlendShapeParamBase; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPG::Client { class MonoEmoNpcEyeController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD817D90)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CANOVERRIDEBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xD816BF0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CONSUMEBLENDSHAPEVALUEMAP_OFFSET UNITYSDK_OFFSET(0xD8161E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CTOR_OFFSET UNITYSDK_OFFSET(0xD818090)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xD8161C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xD816160)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xD8161D0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GMABDJHGGEA_OFFSET UNITYSDK_OFFSET(0xD816820)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_HGNJKFFLLJH_OFFSET UNITYSDK_OFFSET(0xD817BA0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_LOCKEYE_OFFSET UNITYSDK_OFFSET(0xD816330)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_MJHDCBFCNDO_OFFSET UNITYSDK_OFFSET(0xD817D10)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_POPDISABLEBLINKREASON_OFFSET UNITYSDK_OFFSET(0xD816AA0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_PUSHDISABLEBLINKREASON_OFFSET UNITYSDK_OFFSET(0xD816A10)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_RESET_OFFSET UNITYSDK_OFFSET(0xD817FF0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETAUTOBLINKENABLED_OFFSET UNITYSDK_OFFSET(0xD816700)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETUPEYEMONO_OFFSET UNITYSDK_OFFSET(0xD8164C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_TICK_OFFSET UNITYSDK_OFFSET(0xD816DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_TypeDefinitionIndex = 71145;

	class MonoEmoBlendShapeBlink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableAutoBlink; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single fadeInAutoBlinkTime; // 0x1C
		::System::Single fadeOutAutoBlinkTime; // 0x20
		::System::Single minBlinkGap; // 0x24
		::System::Single maxBlinkGap; // 0x28
		::System::Single blinkingDuration; // 0x2C
		::System::Single doubleBlinkProbability; // 0x30
		::System::Single autoBlinkWeight; // 0x34
		::Il2CppArray<::RPG::Client::EmoBlendShapeBlinkConfig*>* blinkClosePoseConfigs; // 0x38
		::Il2CppArray<::RPG::Client::EmoBlendShapeParamBase*>* autoBlinkPoseParams; // 0x40
		::RPG::Client::MonoEmoBlendShapesController* controller; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* PHCIBEPEPJD; // 0x50
		::System::Single KJLHNBJMPDC; // 0x58
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Single>* HKLHNLMINFB; // 0x60
		::Il2CppArray<::System::Single>* NBKFMDAOAEI; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LMHPLPAHNME; // 0x70
		::System::Single ONCKGMAEFLO; // 0x78
		::System::Byte _padding2[0x4];
		::RPG::Client::MonoEmoNpcEyeController* IDHBFDOAIPB; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* NNCFCKNNHBF; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_EnableAutoBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLEAUTOBLINK_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void ConsumeBlendShapeValueMap(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CONSUMEBLENDSHAPEVALUEMAP_OFFSET))(this, a1);
		}

		::System::Void LockEye()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_LOCKEYE_OFFSET))(this);
		}

		::System::Void SetupEyeMono(::RPG::Client::MonoEmoNpcEyeController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoNpcEyeController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETUPEYEMONO_OFFSET))(this, a1);
		}

		::System::Void SetAutoBlinkEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETAUTOBLINKENABLED_OFFSET))(this, a1);
		}

		::System::Void PushDisableBlinkReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_PUSHDISABLEBLINKREASON_OFFSET))(this, a1);
		}

		::System::Void PopDisableBlinkReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_POPDISABLEBLINKREASON_OFFSET))(this, a1);
		}

		::System::Boolean CanOverrideBlendShapeConfig(::JMNAGCHOAKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMNAGCHOAKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CANOVERRIDEBLENDSHAPECONFIG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_TICK_OFFSET))(this, a1);
		}

		::System::Void GMABDJHGGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GMABDJHGGEA_OFFSET))(this);
		}

		::System::Void HGNJKFFLLJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_HGNJKFFLLJH_OFFSET))(this);
		}

		::System::Single MJHDCBFCNDO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_MJHDCBFCNDO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_RESET_OFFSET))(this);
		}

	};
}
