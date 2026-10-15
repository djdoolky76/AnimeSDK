#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventurePlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define HJAAAHMEHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF48B0)
#define HJAAAHMEHAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CF48C0)
#define HJAAAHMEHAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CF4900)
#define HJAAAHMEHAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CF4B90)
#define HJAAAHMEHAG_TICK_OFFSET UNITYSDK_OFFSET(0x15CF4BE0)

inline static constexpr unsigned int HJAAAHMEHAG_TypeDefinitionIndex = 57909;

	class HJAAAHMEHAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AdventurePlayVO* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePlayVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_TICK_OFFSET))(this, a1);
		}

	};
