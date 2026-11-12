#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetDitherGroup; }
namespace RPG::GameCore { class TaskContext; }

#define IKPMGLGMOCB_CTOR_OFFSET UNITYSDK_OFFSET(0x17474AC0)
#define IKPMGLGMOCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17474AD0)
#define IKPMGLGMOCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17474B10)
#define IKPMGLGMOCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17474CD0)
#define IKPMGLGMOCB_TICK_OFFSET UNITYSDK_OFFSET(0x17474D20)

inline static constexpr unsigned int IKPMGLGMOCB_TypeDefinitionIndex = 55045;

	class IKPMGLGMOCB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDitherGroup* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDitherGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + IKPMGLGMOCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPMGLGMOCB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPMGLGMOCB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPMGLGMOCB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKPMGLGMOCB_TICK_OFFSET))(this, a1);
		}

	};
