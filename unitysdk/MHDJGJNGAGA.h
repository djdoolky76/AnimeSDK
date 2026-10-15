#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystemForceField; }

#define MHDJGJNGAGA_DCJLCKGOCJM_OFFSET UNITYSDK_OFFSET(0xB9337B0)
#define MHDJGJNGAGA_DNHFHGPAHLM_OFFSET UNITYSDK_OFFSET(0xB933950)

	class MHDJGJNGAGA : public ::System::Object
	{
	public:
		static ::System::Void DCJLCKGOCJM(::RPG::Client::MonoEffect* a1, ::UnityEngine::ParticleSystemForceField* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + MHDJGJNGAGA_DCJLCKGOCJM_OFFSET))(a1, a2);
		}

		static ::System::Void DNHFHGPAHLM(::RPG::GameCore::MaterialPropertyConfig* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::MaterialPropertyConfig*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MHDJGJNGAGA_DNHFHGPAHLM_OFFSET))(a1, a2);
		}

	};
