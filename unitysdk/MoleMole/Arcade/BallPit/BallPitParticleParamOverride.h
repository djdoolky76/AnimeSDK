#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallPit/BallPitParticleParamOverride_KJNMAIOAHPE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_AENFGPHGJDP_OFFSET UNITYSDK_OFFSET(0x1F694980)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_GET_HASSCALETARGETS_OFFSET UNITYSDK_OFFSET(0x1F695010)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1F694680)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F6943E0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONFROMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F694C70)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZDEG_OFFSET UNITYSDK_OFFSET(0x1F6948E0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1F694BD0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1F694DB0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F695070)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitParticleParamOverride_TypeDefinitionIndex = 94929;

	class BallPitParticleParamOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem*>* targets; // 0x18
		::MoleMole::Arcade::BallPit::BallPitParticleParamOverride_KJNMAIOAHPE axis; // 0x20
		::System::Boolean enableRotationOverride; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::UnityEngine::Transform*>* rotationTargets; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* scaleTargets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void SetLength(::System::Single KMKBJKOEBMF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTH_OFFSET))(this, KMKBJKOEBMF);
		}

		::System::Void SetLengthMultiplier(::System::Single JCJILJMPADN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTHMULTIPLIER_OFFSET))(this, JCJILJMPADN);
		}

		::System::Void SetRotationZDeg(::System::Single JGOFGELCLOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZDEG_OFFSET))(this, JGOFGELCLOL);
		}

		::System::Void SetRotationZ(::System::Single KFHCPHJGFFN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZ_OFFSET))(this, KFHCPHJGFFN);
		}

		::System::Void SetRotationFromDirection(::UnityEngine::Vector2 JBCNPOHMGPE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONFROMDIRECTION_OFFSET))(this, JBCNPOHMGPE);
		}

		::System::Void SetScale(::UnityEngine::Vector3 CLMNLPKFBFA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETSCALE_OFFSET))(this, CLMNLPKFBFA);
		}

		::System::Boolean get_HasScaleTargets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_GET_HASSCALETARGETS_OFFSET))(this);
		}

		::System::Void AENFGPHGJDP(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_AENFGPHGJDP_OFFSET))(this, BFBELMDIAHI);
		}
	};
}
