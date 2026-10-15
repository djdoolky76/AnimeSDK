#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define NNCENMHNDKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9DE40)
#define NNCENMHNDKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC9DE50)
#define NNCENMHNDKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC9DE90)
#define NNCENMHNDKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC9E140)
#define NNCENMHNDKG_TICK_OFFSET UNITYSDK_OFFSET(0xBC9E190)

inline static constexpr unsigned int NNCENMHNDKG_TypeDefinitionIndex = 55272;

	class NNCENMHNDKG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RPGColorGradingCurveEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RPGColorGradingCurveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + NNCENMHNDKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCENMHNDKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCENMHNDKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCENMHNDKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNCENMHNDKG_TICK_OFFSET))(this, a1);
		}

	};
