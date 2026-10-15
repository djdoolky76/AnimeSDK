#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandChangeUICoinCntActive; }
namespace RPG::GameCore { class TaskContext; }

#define KDPLOGLJHAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB368230)
#define KDPLOGLJHAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB368240)
#define KDPLOGLJHAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB368280)
#define KDPLOGLJHAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB368300)
#define KDPLOGLJHAD_TICK_OFFSET UNITYSDK_OFFSET(0xB368350)

inline static constexpr unsigned int KDPLOGLJHAD_TypeDefinitionIndex = 53310;

	class KDPLOGLJHAD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::SwitchHandChangeUICoinCntActive* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandChangeUICoinCntActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*))((::PBYTE)hIl2Cpp + KDPLOGLJHAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPLOGLJHAD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPLOGLJHAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPLOGLJHAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDPLOGLJHAD_TICK_OFFSET))(this, a1);
		}

	};
