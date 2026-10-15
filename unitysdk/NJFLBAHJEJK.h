#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetSimulationSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define NJFLBAHJEJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0F6D0)
#define NJFLBAHJEJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC0F870)
#define NJFLBAHJEJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC0F6E0)
#define NJFLBAHJEJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC0F7C0)
#define NJFLBAHJEJK_TICK_OFFSET UNITYSDK_OFFSET(0xBC0F810)

inline static constexpr unsigned int NJFLBAHJEJK_TypeDefinitionIndex = 56420;

	class NJFLBAHJEJK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetSimulationSpeedEnable* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSimulationSpeedEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSimulationSpeedEnable*))((::PBYTE)hIl2Cpp + NJFLBAHJEJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLBAHJEJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLBAHJEJK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJFLBAHJEJK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFLBAHJEJK_DISPOSE_OFFSET))(this);
		}

	};
