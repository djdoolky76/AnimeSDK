#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client::FullBody { class Grounding_ODHIKODJAHF; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HPFNMMMLOAG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8710)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped_HPFNMMMLOAG_TypeDefinitionIndex = 74234;

	struct alignas(8) GrounderQuadruped_HPFNMMMLOAG
	{
		::RPG::Client::FullBody::IKSolver* GOIKIMDAHDA; // 0x10
		::UnityEngine::Transform* EEHPALPMDPG; // 0x18
		::UnityEngine::Quaternion NIDAPHBEMDE; // 0x20
		::RPG::Client::FullBody::Grounding_ODHIKODJAHF* JGMJNJPDNHG; // 0x30
		::System::Void _ctor(::RPG::Client::FullBody::IKSolver* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HPFNMMMLOAG_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
