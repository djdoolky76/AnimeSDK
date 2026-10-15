#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OverrideFinishActionAutoTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define LPDKDLDGBCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB818420)
#define LPDKDLDGBCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB818430)
#define LPDKDLDGBCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB818470)
#define LPDKDLDGBCD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB818510)
#define LPDKDLDGBCD_TICK_OFFSET UNITYSDK_OFFSET(0xB818560)

inline static constexpr unsigned int LPDKDLDGBCD_TypeDefinitionIndex = 53051;

	class LPDKDLDGBCD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OverrideFinishActionAutoTransfer* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_TICK_OFFSET))(this, a1);
		}

	};
