#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKEGEPFOPO.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskA; }

#define LFPPJPFFNPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB684860)
#define LFPPJPFFNPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6849E0)
#define LFPPJPFFNPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6848E0)
#define LFPPJPFFNPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB684990)
#define LFPPJPFFNPP_TICK_OFFSET UNITYSDK_OFFSET(0xB684930)

inline static constexpr unsigned int LFPPJPFFNPP_TypeDefinitionIndex = 55787;

	class LFPPJPFFNPP : public ::HCKEGEPFOPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskA*))((::PBYTE)hIl2Cpp + LFPPJPFFNPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPJPFFNPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPPJPFFNPP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPJPFFNPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPJPFFNPP_DISPOSE_OFFSET))(this);
		}

	};
