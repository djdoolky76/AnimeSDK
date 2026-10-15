#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ApplyOperation; }
namespace RPG::GameCore { class TaskContext; }

#define MLJPEHPBHIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1DC0)
#define MLJPEHPBHIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B1DD0)
#define MLJPEHPBHIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B1E70)
#define MLJPEHPBHIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9B1F10)
#define MLJPEHPBHIC_TICK_OFFSET UNITYSDK_OFFSET(0xB9B1E10)

inline static constexpr unsigned int MLJPEHPBHIC_TypeDefinitionIndex = 54836;

	class MLJPEHPBHIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ApplyOperation* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplyOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + MLJPEHPBHIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPEHPBHIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLJPEHPBHIC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPEHPBHIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPEHPBHIC_ONTASKRESET_OFFSET))(this);
		}

	};
