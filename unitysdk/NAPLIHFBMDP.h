#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EndUseSharedSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define NAPLIHFBMDP_CTOR_OFFSET UNITYSDK_OFFSET(0xC33DEC0)
#define NAPLIHFBMDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC33DED0)
#define NAPLIHFBMDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC33DF10)
#define NAPLIHFBMDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC33E180)
#define NAPLIHFBMDP_TICK_OFFSET UNITYSDK_OFFSET(0xC33E1D0)

inline static constexpr unsigned int NAPLIHFBMDP_TypeDefinitionIndex = 59357;

	class NAPLIHFBMDP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EndUseSharedSummonUnit* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + NAPLIHFBMDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLIHFBMDP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLIHFBMDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLIHFBMDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLIHFBMDP_TICK_OFFSET))(this, a1);
		}

	};
