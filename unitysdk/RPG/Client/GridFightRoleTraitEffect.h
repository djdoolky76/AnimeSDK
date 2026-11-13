#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMemberEffect.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_BBNDNGACCFL_OFFSET UNITYSDK_OFFSET(0x1D4F3AE0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F3BA0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1D4F3950)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_EBJFAPAHMIP_OFFSET UNITYSDK_OFFSET(0x1D4F38A0)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D4F3720)
#define RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1D4F39D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleTraitEffect_TypeDefinitionIndex = 66029;

	class GridFightRoleTraitEffect : public ::RPG::Client::GridFightMemberEffect
	{
	public:
		::System::String* _ParticleSystemPath; // 0x38
		::System::Single HBDJCFFDGDD; // 0x40
		::System::Byte _padding0[0x4];
		::System::Action* OOBALIFBOCA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void BBNDNGACCFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_BBNDNGACCFL_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem* EBJFAPAHMIP()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRAITEFFECT_EBJFAPAHMIP_OFFSET))(this);
		}

	};
}
