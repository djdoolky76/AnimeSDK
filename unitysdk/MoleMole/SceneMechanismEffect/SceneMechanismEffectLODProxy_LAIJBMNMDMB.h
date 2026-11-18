#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_LAIJBMNMDMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1044D7B0)

namespace MoleMole::SceneMechanismEffect
{
	inline static constexpr unsigned int SceneMechanismEffectLODProxy_LAIJBMNMDMB_TypeDefinitionIndex = 56314;

	class SceneMechanismEffectLODProxy_LAIJBMNMDMB : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* JFGELGEHMGF; // 0x10
		::System::Single LPKGFAKAKPE; // 0x18
		::System::Boolean PHLLPKOAHAC; // 0x1C
		::System::Boolean KGEBLFFDBMG; // 0x1D
		::System::Boolean MOEABAOAFKI; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Single AEBKGGOAEID; // 0x20
		::System::Single MKJPNOEPGCM; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_LAIJBMNMDMB__CTOR_OFFSET))(this);
		}
	};
}
