#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x22A6810)
#define ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_B4D7A7FDC904AF60_OFFSET UNITYSDK_OFFSET(0x22A69F0)
#define ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x22A66B0)
#define ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoVFXParticleSystemMaterialPlugin_TypeDefinitionIndex = 7051;

	class MonoVFXParticleSystemMaterialPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem*>* ParticleSystems; // 0x20
		::System::Int32 TexSheetRow; // 0x28
		::System::Int32 TexSheetCol; // 0x2C
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Materials; // 0x30

		::System::Void B4D7A7FDC904AF60(::System::Int32 FE6DFE845CADEA87)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_B4D7A7FDC904AF60_OFFSET))(this, FE6DFE845CADEA87);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXPARTICLESYSTEMMATERIALPLUGIN_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
