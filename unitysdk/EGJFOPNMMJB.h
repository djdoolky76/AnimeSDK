#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMiniGameFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define EGJFOPNMMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x152F1EA0)
#define EGJFOPNMMJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152F1EB0)
#define EGJFOPNMMJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152F1F00)
#define EGJFOPNMMJB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152F1F90)
#define EGJFOPNMMJB_TICK_OFFSET UNITYSDK_OFFSET(0x152F1FE0)

inline static constexpr unsigned int EGJFOPNMMJB_TypeDefinitionIndex = 54440;

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
