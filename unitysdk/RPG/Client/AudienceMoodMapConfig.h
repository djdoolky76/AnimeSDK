#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class AudienceMoodMapConfig_MoodClipData; }
namespace RPG::Client { class AudienceMoodMapConfig_MoodData; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AC530)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ECKIDJOCJOP_OFFSET UNITYSDK_OFFSET(0xC6AC220)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_GKIHABEHHHE_OFFSET UNITYSDK_OFFSET(0xC6AC050)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC6AC490)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_PJKHDCPNBJM_OFFSET UNITYSDK_OFFSET(0xC6AC140)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceMoodMapConfig_TypeDefinitionIndex = 69154;

	class AudienceMoodMapConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* MoodMap; // 0x18
		::RPG::Client::CrowdAnimator::CrowdPrototype* PrototypeConfig; // 0x20
		::System::Int32 SitDownClipIndex; // 0x28
		::System::Int32 GetupClipIndex; // 0x2C
		::System::Boolean _InitializedClipGroupInfo; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ClipGroupMap; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodClipData* GKIHABEHHHE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodClipData*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_GKIHABEHHHE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodData* PJKHDCPNBJM(::System::String* a1)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_PJKHDCPNBJM_OFFSET))(this, a1);
		}

		::System::Void ECKIDJOCJOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ECKIDJOCJOP_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ONDISABLE_OFFSET))(this);
		}

	};
}
