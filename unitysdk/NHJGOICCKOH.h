#pragma once
#include "unitysdk/unitysdk.h"
class HCBPOFFBEOH;
namespace RPG::GameCore { class TaskContext; }

#define NHJGOICCKOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A4680)
#define NHJGOICCKOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4A46B0)

inline static constexpr unsigned int NHJGOICCKOH_TypeDefinitionIndex = 56882;

	class NHJGOICCKOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCBPOFFBEOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCBPOFFBEOH*))((::PBYTE)hIl2Cpp + NHJGOICCKOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJGOICCKOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
