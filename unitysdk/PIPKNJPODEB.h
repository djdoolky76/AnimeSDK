#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreatePrefab; }
namespace UnityEngine { class GameObject; }

#define PIPKNJPODEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC26E7B0)
#define PIPKNJPODEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26E7C0)
#define PIPKNJPODEB_FPFPGLKNIGF_OFFSET UNITYSDK_OFFSET(0xC26EA40)
#define PIPKNJPODEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC26E810)
#define PIPKNJPODEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC26E990)
#define PIPKNJPODEB_TICK_OFFSET UNITYSDK_OFFSET(0xC26E9E0)

inline static constexpr unsigned int PIPKNJPODEB_TypeDefinitionIndex = 53422;

	class PIPKNJPODEB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyCreatePrefab* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + PIPKNJPODEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPKNJPODEB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPKNJPODEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPKNJPODEB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPKNJPODEB_TICK_OFFSET))(this, a1);
		}

		::System::Void FPFPGLKNIGF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPKNJPODEB_FPFPGLKNIGF_OFFSET))(this, a1);
		}

	};
