#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetDieImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define MAGAFGDHLKC_CTOR_OFFSET UNITYSDK_OFFSET(0xC0ADDD0)
#define MAGAFGDHLKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0ADDE0)
#define MAGAFGDHLKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0ADE20)
#define MAGAFGDHLKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0AE060)
#define MAGAFGDHLKC_TICK_OFFSET UNITYSDK_OFFSET(0xC0AE0B0)

inline static constexpr unsigned int MAGAFGDHLKC_TypeDefinitionIndex = 56581;

	class MAGAFGDHLKC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetDieImmediately* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDieImmediately* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDieImmediately*))((::PBYTE)hIl2Cpp + MAGAFGDHLKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGAFGDHLKC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGAFGDHLKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGAFGDHLKC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAGAFGDHLKC_TICK_OFFSET))(this, a1);
		}

	};
