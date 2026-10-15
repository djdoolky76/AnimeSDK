#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RoundCountCheck; }
namespace RPG::GameCore { class TaskContext; }

#define LKCKKKCBNLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB726670)
#define LKCKKKCBNLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB726680)
#define LKCKKKCBNLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7266C0)
#define LKCKKKCBNLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB726710)
#define LKCKKKCBNLI_TICK_OFFSET UNITYSDK_OFFSET(0xB726760)

inline static constexpr unsigned int LKCKKKCBNLI_TypeDefinitionIndex = 58502;

	class LKCKKKCBNLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RoundCountCheck* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RoundCountCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RoundCountCheck*))((::PBYTE)hIl2Cpp + LKCKKKCBNLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKKKCBNLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKKKCBNLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKKKCBNLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKCKKKCBNLI_TICK_OFFSET))(this, a1);
		}

	};
