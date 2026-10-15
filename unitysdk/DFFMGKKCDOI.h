#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetAdvAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define DFFMGKKCDOI_CTOR_OFFSET UNITYSDK_OFFSET(0xE827D40)
#define DFFMGKKCDOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE827D50)
#define DFFMGKKCDOI_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE828020)
#define DFFMGKKCDOI_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE828030)
#define DFFMGKKCDOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE827DF0)
#define DFFMGKKCDOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE827DA0)
#define DFFMGKKCDOI_TICK_OFFSET UNITYSDK_OFFSET(0xE827FC0)

inline static constexpr unsigned int DFFMGKKCDOI_TypeDefinitionIndex = 53217;

	class DFFMGKKCDOI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetAdvAchievement* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvAchievement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvAchievement*))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMGKKCDOI_ONSKIP_OFFSET))(this);
		}

	};
