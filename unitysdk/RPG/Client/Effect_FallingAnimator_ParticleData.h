#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_PARTICLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2ADA0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_PARTICLEDATA_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xCD2AEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimator_ParticleData_TypeDefinitionIndex = 70468;

	class Effect_FallingAnimator_ParticleData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::System::Int32 proportion; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_PARTICLEDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_PARTICLEDATA_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
