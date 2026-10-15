#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PELKNPKGJJN;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KDLFNKMKONM_CTOR_OFFSET UNITYSDK_OFFSET(0xB35ED70)
#define KDLFNKMKONM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB35EDC0)
#define KDLFNKMKONM_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB35ED80)
#define KDLFNKMKONM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB35EE10)
#define KDLFNKMKONM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB35F020)
#define KDLFNKMKONM_TICK_OFFSET UNITYSDK_OFFSET(0xB35F070)

inline static constexpr unsigned int KDLFNKMKONM_TypeDefinitionIndex = 53091;

	class KDLFNKMKONM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::PELKNPKGJJN* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PELKNPKGJJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PELKNPKGJJN*))((::PBYTE)hIl2Cpp + KDLFNKMKONM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNKMKONM_GETCONFIG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNKMKONM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNKMKONM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLFNKMKONM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDLFNKMKONM_TICK_OFFSET))(this, a1);
		}

	};
