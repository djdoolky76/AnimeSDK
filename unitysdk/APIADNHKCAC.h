#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnableInput; }
namespace RPG::GameCore { class TaskContext; }

#define APIADNHKCAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F530)
#define APIADNHKCAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9F540)
#define APIADNHKCAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B9F580)
#define APIADNHKCAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9F770)
#define APIADNHKCAC_TICK_OFFSET UNITYSDK_OFFSET(0x15B9F7C0)

inline static constexpr unsigned int APIADNHKCAC_TypeDefinitionIndex = 58107;

	class APIADNHKCAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnableInput* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableInput*))((::PBYTE)hIl2Cpp + APIADNHKCAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIADNHKCAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIADNHKCAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIADNHKCAC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APIADNHKCAC_TICK_OFFSET))(this, a1);
		}

	};
