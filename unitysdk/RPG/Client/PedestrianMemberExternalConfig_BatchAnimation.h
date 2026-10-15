#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/RPG/Client/IPedestrianMemberExternalConfig.h"
#include "unitysdk/RVO/EAsyncNavMeshAgentPriority.h"
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA96770)
#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_GET_SPECIALTAG_OFFSET UNITYSDK_OFFSET(0xDA96760)

namespace RPG::Client
{
	class PedestrianMemberExternalConfig_BatchAnimation : public ::RPG::Client::IPedestrianMemberExternalConfig
	{
	public:
		::System::String* IndependentQuality; // 0x10
		::System::String* BatchAnimationGroupPath; // 0x18
		::System::Int32 StandbyAnimIndex; // 0x20
		::System::Int32 Walk1AnimIndex; // 0x24
		::System::Int32 Walk2AnimIndex; // 0x28
		::System::Single ColliderRadius; // 0x2C
		::System::Single ModelScale; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* SpecialAnims; // 0x38
		::RPG::Client::BatchAnimationGraphMaskLayerConfig* MaskLayerConfig; // 0x40
		::UnityEngine::ScriptableObject* VariantCollection; // 0x48
		::System::Boolean UseDynamicWorldUp; // 0x50
		::System::Boolean ForbidDitherWithPlayer; // 0x51
		::System::Byte _padding1[0x2];
		::RVO::EAsyncNavMeshAgentPriority NavMeshPriority; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianMemberSpecialTag get_SpecialTag()
		{
			return ((::RPG::Client::EPedestrianMemberSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_BATCHANIMATION_GET_SPECIALTAG_OFFSET))(this);
		}

	};
}
