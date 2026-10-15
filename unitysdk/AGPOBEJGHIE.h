#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetPhainonActionCount; }
namespace RPG::GameCore { class TaskContext; }

#define AGPOBEJGHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xEB73170)
#define AGPOBEJGHIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB73180)
#define AGPOBEJGHIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB731C0)
#define AGPOBEJGHIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB733B0)
#define AGPOBEJGHIE_TICK_OFFSET UNITYSDK_OFFSET(0xEB73400)

inline static constexpr unsigned int AGPOBEJGHIE_TypeDefinitionIndex = 56417;

	class AGPOBEJGHIE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetPhainonActionCount* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + AGPOBEJGHIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPOBEJGHIE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPOBEJGHIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPOBEJGHIE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGPOBEJGHIE_TICK_OFFSET))(this, a1);
		}

	};
