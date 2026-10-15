#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChangeMechanismBarValue; }
namespace RPG::GameCore { class TaskContext; }

#define FOOEEFJMCDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15900020)
#define FOOEEFJMCDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15900030)
#define FOOEEFJMCDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15900070)
#define FOOEEFJMCDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159000C0)
#define FOOEEFJMCDA_TICK_OFFSET UNITYSDK_OFFSET(0x15900110)

inline static constexpr unsigned int FOOEEFJMCDA_TypeDefinitionIndex = 54923;

	class FOOEEFJMCDA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ChangeMechanismBarValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMechanismBarValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMechanismBarValue*))((::PBYTE)hIl2Cpp + FOOEEFJMCDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEEFJMCDA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEEFJMCDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEEFJMCDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOOEEFJMCDA_TICK_OFFSET))(this, a1);
		}

	};
