#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoEffectParticleGuideLine_GuideLineData;

#define MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x10591B50)
#define MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES_MOVEALINEGUIDELINE_OFFSET UNITYSDK_OFFSET(0x10591CA0)
#define MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10591B70)
#define MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x10591B60)

inline static constexpr unsigned int MonoEffectParticleGuideLine_ControlledParticles_TypeDefinitionIndex = 91134;

class MonoEffectParticleGuideLine_ControlledParticles : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* m_Particles; // 0x10
	::Il2CppArray<::System::Single>* m_ParticlePercent; // 0x18
	::System::Int32 m_Length; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 length)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES__CTOR_1_OFFSET))(this, length);
	}

	::System::Int32 get_Length()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES_GET_LENGTH_OFFSET))(this);
	}

	::System::Void MoveAlineGuideLine(::System::Single speed, ::MonoEffectParticleGuideLine_GuideLineData* gD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MonoEffectParticleGuideLine_GuideLineData*))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CONTROLLEDPARTICLES_MOVEALINEGUIDELINE_OFFSET))(this, speed, gD);
	}
};
