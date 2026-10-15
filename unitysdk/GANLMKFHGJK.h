#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReleaseCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define GANLMKFHGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x15937B10)
#define GANLMKFHGJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15937B20)
#define GANLMKFHGJK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15937D50)
#define GANLMKFHGJK_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15937D60)
#define GANLMKFHGJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15937B60)
#define GANLMKFHGJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15937CA0)
#define GANLMKFHGJK_TICK_OFFSET UNITYSDK_OFFSET(0x15937CF0)

inline static constexpr unsigned int GANLMKFHGJK_TypeDefinitionIndex = 58379;

	class GANLMKFHGJK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ReleaseCharacter* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCharacter*))((::PBYTE)hIl2Cpp + GANLMKFHGJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLMKFHGJK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLMKFHGJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLMKFHGJK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GANLMKFHGJK_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLMKFHGJK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLMKFHGJK_ONSKIP_OFFSET))(this);
		}

	};
