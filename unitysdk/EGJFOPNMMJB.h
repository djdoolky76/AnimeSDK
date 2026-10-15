#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMiniGameFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define EGJFOPNMMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1451B770)
#define EGJFOPNMMJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1451B780)
#define EGJFOPNMMJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1451B7D0)
#define EGJFOPNMMJB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1451B880)
#define EGJFOPNMMJB_TICK_OFFSET UNITYSDK_OFFSET(0x1451B8D0)

inline static constexpr unsigned int EGJFOPNMMJB_TypeDefinitionIndex = 53278;

	class EGJFOPNMMJB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowMiniGameFuncBtnEffect* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + EGJFOPNMMJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJFOPNMMJB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJFOPNMMJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJFOPNMMJB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGJFOPNMMJB_TICK_OFFSET))(this, a1);
		}

	};
