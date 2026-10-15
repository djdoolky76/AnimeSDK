#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRandomSecond; }

#define JOOANBMLDMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A7D20)
#define JOOANBMLDMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A7D30)
#define JOOANBMLDMO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB2A7D70)
#define JOOANBMLDMO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB2A7EC0)
#define JOOANBMLDMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2A7D80)
#define JOOANBMLDMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2A7DF0)
#define JOOANBMLDMO_TICK_OFFSET UNITYSDK_OFFSET(0xB2A7E40)

inline static constexpr unsigned int JOOANBMLDMO_TypeDefinitionIndex = 58919;

	class JOOANBMLDMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitRandomSecond* OFKGLJOAMLD; // 0x18
		::System::Single DKOFFPPGEFI; // 0x20
		::System::Single BOBKAKEJPEI; // 0x24
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRandomSecond* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRandomSecond*))((::PBYTE)hIl2Cpp + JOOANBMLDMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOANBMLDMO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOANBMLDMO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOANBMLDMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOANBMLDMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOOANBMLDMO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOANBMLDMO_ONSKIP_OFFSET))(this);
		}

	};
