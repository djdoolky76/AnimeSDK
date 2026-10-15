#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUITabOpen; }
namespace UnityEngine { class Transform; }

#define PKMKLFONNGB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E6F50)
#define PKMKLFONNGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2E6F60)
#define PKMKLFONNGB_ONIFMMMONIE_OFFSET UNITYSDK_OFFSET(0xC2E71E0)
#define PKMKLFONNGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2E6FA0)
#define PKMKLFONNGB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2E6FF0)
#define PKMKLFONNGB_TICK_OFFSET UNITYSDK_OFFSET(0xC2E7040)

	class PKMKLFONNGB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitUITabOpen* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUITabOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUITabOpen*))((::PBYTE)hIl2Cpp + PKMKLFONNGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMKLFONNGB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMKLFONNGB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMKLFONNGB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKMKLFONNGB_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ONIFMMMONIE(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PKMKLFONNGB_ONIFMMMONIE_OFFSET))(this, a1);
		}

	};
