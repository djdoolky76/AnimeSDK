#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SO_Wait; }
namespace RPG::GameCore { class TaskContext; }

#define BFDAGMPJJIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB15EDC0)
#define BFDAGMPJJIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB15EE10)
#define BFDAGMPJJIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB15EE60)
#define BFDAGMPJJIM_TICK_OFFSET UNITYSDK_OFFSET(0xB15EEB0)

inline static constexpr unsigned int BFDAGMPJJIM_TypeDefinitionIndex = 52127;

	class BFDAGMPJJIM
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Wait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + BFDAGMPJJIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDAGMPJJIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDAGMPJJIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFDAGMPJJIM_TICK_OFFSET))(this, a1);
		}

	};
