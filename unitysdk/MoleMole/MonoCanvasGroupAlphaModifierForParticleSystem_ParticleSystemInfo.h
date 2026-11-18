#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_DDAENKLAMDF_OFFSET UNITYSDK_OFFSET(0x735EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo_TypeDefinitionIndex = 73231;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo
	{
		::UnityEngine::ParticleSystem* particleSystem; // 0x10
		::System::Boolean manualShaderConfig; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* materials; // 0x20

		::System::Void DDAENKLAMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_DDAENKLAMDF_OFFSET))(this);
		}
	};
}
