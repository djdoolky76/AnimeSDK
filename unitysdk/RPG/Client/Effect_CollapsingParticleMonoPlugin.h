#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_CollapsingParticleMonoPlugin_Orientation.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_CollapsingParticleMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_ABDFLPIMLAO_OFFSET UNITYSDK_OFFSET(0xCD22730)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_BKLLECOLPFK_OFFSET UNITYSDK_OFFSET(0xCD22EA0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD23260)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_EFNBIEHEGIG_OFFSET UNITYSDK_OFFSET(0xCD22530)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_GMOGFICCBDH_OFFSET UNITYSDK_OFFSET(0xCD22DE0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_RENDEREREQUALS_OFFSET UNITYSDK_OFFSET(0xCD22280)

namespace RPG::Client
{
	class Effect_CollapsingParticleMonoPlugin
	{
	public:
		::System::Single interval; // 0x30
		::System::Single jitterRatio; // 0x34
		::UnityEngine::Vector3 riseMinSizeRange; // 0x38
		::UnityEngine::Vector3 riseMaxSizeRange; // 0x44
		::UnityEngine::Vector3 jitterMinSizeRange; // 0x50
		::UnityEngine::Vector3 jitterMaxSizeRange; // 0x5C
		::UnityEngine::Vector3 boundingBoxCenter; // 0x68
		::UnityEngine::Vector3 boundingBoxExtent; // 0x74
		::UnityEngine::Mesh* particleMesh; // 0x80
		::UnityEngine::Material* particleMaterial; // 0x88
		::RPG::Client::Effect_CollapsingParticleMonoPlugin_Orientation orientation; // 0x90
		::System::Boolean useWorldDirection; // 0x94
		::System::Byte _padding0[0x3];
		::System::Single riseSpeed; // 0x98
		::System::Single riseHeight; // 0x9C
		::System::Single jitterSpeed; // 0xA0
		::System::Single jitterRange; // 0xA4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Vertices; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Trans; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Scales; // 0xB8
		::System::Collections::Generic::List_1<::System::Boolean>* m_Jitters; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Boolean RendererEquals(::RPG::Client::Effect_CollapsingParticleMonoPlugin* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_CollapsingParticleMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_RENDEREREQUALS_OFFSET))(this, a1);
		}

		::System::Void EFNBIEHEGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_EFNBIEHEGIG_OFFSET))(this);
		}

		::System::Void ABDFLPIMLAO(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_ABDFLPIMLAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GMOGFICCBDH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_GMOGFICCBDH_OFFSET))(this, a1);
		}

		::System::Void BKLLECOLPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_BKLLECOLPFK_OFFSET))(this);
		}

	};
}
