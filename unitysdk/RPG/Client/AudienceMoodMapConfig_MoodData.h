#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AudienceMoodMapConfig_MoodClipData; }
namespace RPG::Client::CrowdAnimator { class CapsuleColliderInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B2AF0)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_GKIHABEHHHE_OFFSET UNITYSDK_OFFSET(0xC6B2A20)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceMoodMapConfig_MoodData_TypeDefinitionIndex = 69155;

	class AudienceMoodMapConfig_MoodData : public ::System::Object
	{
	public:
		::System::String* GroupName; // 0x10
		::Il2CppArray<::System::Object*>* Weights; // 0x18
		::System::Single WeightSum; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* WeightMap; // 0x28
		::RPG::Client::CrowdAnimator::CapsuleColliderInfo* FitCollider; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodClipData* GKIHABEHHHE(::System::Int32 a1)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodClipData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_GKIHABEHHHE_OFFSET))(this, a1);
		}

	};
}
