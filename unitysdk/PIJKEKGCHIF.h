#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NEOCEOCDEAF;
namespace RPG::GameCore { class StartEffectAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define PIJKEKGCHIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC269E10)
#define PIJKEKGCHIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC269E20)
#define PIJKEKGCHIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC269E60)
#define PIJKEKGCHIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC26A310)
#define PIJKEKGCHIF_TICK_OFFSET UNITYSDK_OFFSET(0xC26A360)

inline static constexpr unsigned int PIJKEKGCHIF_TypeDefinitionIndex = 55661;

	class PIJKEKGCHIF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StartEffectAim* OFKGLJOAMLD; // 0x18
		::NEOCEOCDEAF* BICMFAKJPCI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::UnityEngine::Transform* LPEOHKHOLEP; // 0x30
		::UnityEngine::Quaternion KHDDKPNOAMK; // 0x38
		::UnityEngine::Quaternion MGFPKGIOKEN; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartEffectAim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartEffectAim*))((::PBYTE)hIl2Cpp + PIJKEKGCHIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJKEKGCHIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJKEKGCHIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJKEKGCHIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIJKEKGCHIF_TICK_OFFSET))(this, a1);
		}

	};
