#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LMGAOOEJHIJ;
namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD2DD70)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2DF80)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCD2DF70)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD2DF20)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD2DE40)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD2DED0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUCrowdAnimationBatcher_TypeDefinitionIndex = 70481;

	class Effect_GPUCrowdAnimationBatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LMGAOOEJHIJ* KADDKEGNCHE; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Effect_GPUCrowdAnimation*>* BatchList; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* FloatMPBProperty; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* FloatMaterialProperty; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* VectorMPBProperty; // 0x38
		::System::Boolean hasBeInit; // 0x40
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* CrowdMaterial; // 0x48
		::System::Boolean EnableBatch; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_LATEUPDATE_OFFSET))(this);
		}

		::LMGAOOEJHIJ* get_Behavior()
		{
			return ((::LMGAOOEJHIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
