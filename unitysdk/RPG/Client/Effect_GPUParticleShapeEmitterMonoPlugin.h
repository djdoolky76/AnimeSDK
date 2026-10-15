#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2F340)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_TypeDefinitionIndex = 70484;

	class Effect_GPUParticleShapeEmitterMonoPlugin
	{
	public:
		::Il2CppArray<::System::Object*>* EmitShapes; // 0x30
		::System::UInt32 TotalPointNum; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* _ParticleInstanceDataTexPath; // 0x40
		::System::Boolean DrawShapeHanles; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
