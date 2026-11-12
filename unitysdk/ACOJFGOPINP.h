#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveLevelAreas; }
namespace RPG::GameCore { class TaskContext; }

#define ACOJFGOPINP_CTOR_OFFSET UNITYSDK_OFFSET(0xB790B10)
#define ACOJFGOPINP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB790B20)
#define ACOJFGOPINP_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB790D20)
#define ACOJFGOPINP_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB790D30)
#define ACOJFGOPINP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB790B60)
#define ACOJFGOPINP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB790C70)
#define ACOJFGOPINP_TICK_OFFSET UNITYSDK_OFFSET(0xB790CC0)

inline static constexpr unsigned int ACOJFGOPINP_TypeDefinitionIndex = 59643;

	class ACOJFGOPINP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveLevelAreas* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveLevelAreas* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveLevelAreas*))((::PBYTE)hIl2Cpp + ACOJFGOPINP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOJFGOPINP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOJFGOPINP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOJFGOPINP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACOJFGOPINP_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOJFGOPINP_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOJFGOPINP_ONSKIP_OFFSET))(this);
		}

	};
