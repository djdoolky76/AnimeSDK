#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBBIDCKOIOG.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
class BEBKIEOBLPK;
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define KMOOKKEFGDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB574C70)
#define KMOOKKEFGDF_EBIPEJHGIDM_OFFSET UNITYSDK_OFFSET(0xB574980)
#define KMOOKKEFGDF_JMGLPBEBPDM_OFFSET UNITYSDK_OFFSET(0xB574860)
#define KMOOKKEFGDF_KGCAOLCOBJJ_OFFSET UNITYSDK_OFFSET(0xB574720)
#define KMOOKKEFGDF_PKECEGBJLEC_OFFSET UNITYSDK_OFFSET(0xB574C00)
#define KMOOKKEFGDF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5746B0)

inline static constexpr unsigned int KMOOKKEFGDF_TypeDefinitionIndex = 71867;

	class KMOOKKEFGDF : public ::GBBIDCKOIOG
	{
	public:
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0x128
		// static const ::System::String* GJGJFDKACAI; // 0x0
		// static const ::System::String* NJJKFHLGNBL; // 0x0
		// static const ::System::String* IEHOOHNEHGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOOKKEFGDF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOOKKEFGDF__ONBIND_OFFSET))(this);
		}

		::System::Void KGCAOLCOBJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KMOOKKEFGDF_KGCAOLCOBJJ_OFFSET))(this, a1);
		}

		::BEBKIEOBLPK* JMGLPBEBPDM(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::BEBKIEOBLPK*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KMOOKKEFGDF_JMGLPBEBPDM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBIPEJHGIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOOKKEFGDF_EBIPEJHGIDM_OFFSET))(this);
		}

		::System::String* PKECEGBJLEC(::RPG::GameCore::DamageTypeRow* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + KMOOKKEFGDF_PKECEGBJLEC_OFFSET))(this, a1);
		}

	};
