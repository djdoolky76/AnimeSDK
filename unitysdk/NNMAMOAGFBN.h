#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MEALFBJIJGC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitParallelTimeStamp; }

#define NNMAMOAGFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC3BC0)
#define NNMAMOAGFBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC3BE0)
#define NNMAMOAGFBN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBCC3C30)
#define NNMAMOAGFBN_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBCC4910)
#define NNMAMOAGFBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC3C40)
#define NNMAMOAGFBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCC43F0)
#define NNMAMOAGFBN_TICK_OFFSET UNITYSDK_OFFSET(0xBCC4440)

inline static constexpr unsigned int NNMAMOAGFBN_TypeDefinitionIndex = 58907;

	class NNMAMOAGFBN : public ::GELIALJDFBL
	{
	public:
		::MEALFBJIJGC* KDALILADJAE; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitParallelTimeStamp* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitParallelTimeStamp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitParallelTimeStamp*))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMAMOAGFBN_ONSKIP_OFFSET))(this);
		}

	};
