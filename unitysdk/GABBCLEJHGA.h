#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchByCommandType; }
namespace RPG::GameCore { class TaskContext; }

#define GABBCLEJHGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15936410)
#define GABBCLEJHGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15936420)
#define GABBCLEJHGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15936460)
#define GABBCLEJHGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15936620)
#define GABBCLEJHGA_TICK_OFFSET UNITYSDK_OFFSET(0x15936670)

	class GABBCLEJHGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SwitchByCommandType* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchByCommandType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchByCommandType*))((::PBYTE)hIl2Cpp + GABBCLEJHGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBCLEJHGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBCLEJHGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABBCLEJHGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GABBCLEJHGA_TICK_OFFSET))(this, a1);
		}

	};
