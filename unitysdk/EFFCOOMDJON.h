#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LockCurrentEnvProfile; }
namespace RPG::GameCore { class TaskContext; }

#define EFFCOOMDJON_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4B080)
#define EFFCOOMDJON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4B090)
#define EFFCOOMDJON_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A4B0D0)
#define EFFCOOMDJON_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A4B9A0)
#define EFFCOOMDJON_TICK_OFFSET UNITYSDK_OFFSET(0x13A4B9F0)

inline static constexpr unsigned int EFFCOOMDJON_TypeDefinitionIndex = 58202;

	class EFFCOOMDJON : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LockCurrentEnvProfile* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCurrentEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCurrentEnvProfile*))((::PBYTE)hIl2Cpp + EFFCOOMDJON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFCOOMDJON_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFCOOMDJON_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFCOOMDJON_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFFCOOMDJON_TICK_OFFSET))(this, a1);
		}

	};
