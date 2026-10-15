#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClosePage; }
namespace RPG::GameCore { class TaskContext; }

#define BLNOOFPHDBD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7B880)
#define BLNOOFPHDBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA7B890)
#define BLNOOFPHDBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA7B8D0)
#define BLNOOFPHDBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA7BBC0)
#define BLNOOFPHDBD_TICK_OFFSET UNITYSDK_OFFSET(0xBA7BC10)

inline static constexpr unsigned int BLNOOFPHDBD_TypeDefinitionIndex = 56352;

	class BLNOOFPHDBD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ClosePage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClosePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + BLNOOFPHDBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOOFPHDBD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOOFPHDBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOOFPHDBD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNOOFPHDBD_TICK_OFFSET))(this, a1);
		}

	};
