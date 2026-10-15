#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEnterSafeUI; }

#define MNJNNCEEIMP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0FC10)
#define MNJNNCEEIMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0FC20)
#define MNJNNCEEIMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0FDB0)
#define MNJNNCEEIMP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0FE30)
#define MNJNNCEEIMP_TICK_OFFSET UNITYSDK_OFFSET(0xBA0FEC0)

inline static constexpr unsigned int MNJNNCEEIMP_TypeDefinitionIndex = 53446;

	class MNJNNCEEIMP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerEnterSafeUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + MNJNNCEEIMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNNCEEIMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNNCEEIMP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNNCEEIMP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNJNNCEEIMP_TICK_OFFSET))(this, a1);
		}

	};
