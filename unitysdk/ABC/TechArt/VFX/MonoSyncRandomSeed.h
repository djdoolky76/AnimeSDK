#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define ABC_TECHART_VFX_MONOSYNCRANDOMSEED_AB81C54343688E21_OFFSET UNITYSDK_OFFSET(0x2876B00)
#define ABC_TECHART_VFX_MONOSYNCRANDOMSEED_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2876A00)
#define ABC_TECHART_VFX_MONOSYNCRANDOMSEED_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2876CD0)
#define ABC_TECHART_VFX_MONOSYNCRANDOMSEED_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2876AB0)
#define ABC_TECHART_VFX_MONOSYNCRANDOMSEED__CTOR_OFFSET UNITYSDK_OFFSET(0x2876D30)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoSyncRandomSeed_TypeDefinitionIndex = 16131;

	class MonoSyncRandomSeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* SubParticleSystems; // 0x20
		::System::Boolean SyncPerFrame; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::ParticleSystem* AA4AF8098ABAD8CB; // 0x30

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOSYNCRANDOMSEED_E02954280801633F_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOSYNCRANDOMSEED_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void AB81C54343688E21()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOSYNCRANDOMSEED_AB81C54343688E21_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOSYNCRANDOMSEED_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOSYNCRANDOMSEED__CTOR_OFFSET))(this);
		}
	};
}
