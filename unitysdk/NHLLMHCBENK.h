#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterTriggerFreeStyleGraph; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHLLMHCBENK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBCE680)
#define NHLLMHCBENK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBCE730)
#define NHLLMHCBENK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBBCE7A0)
#define NHLLMHCBENK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBBCEEC0)
#define NHLLMHCBENK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBBCEE70)
#define NHLLMHCBENK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBCE7B0)
#define NHLLMHCBENK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBCEB30)
#define NHLLMHCBENK_TICK_OFFSET UNITYSDK_OFFSET(0xBBCEBA0)

inline static constexpr unsigned int NHLLMHCBENK_TypeDefinitionIndex = 58011;

	class NHLLMHCBENK : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* FOAKPHLEJFG; // 0x18
		::RPG::GameCore::GameEntityList* FPEOFLNHOOL; // 0x20
		::RPG::GameCore::CharacterTriggerFreeStyleGraph* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*))((::PBYTE)hIl2Cpp + NHLLMHCBENK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLLMHCBENK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLLMHCBENK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLLMHCBENK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLLMHCBENK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLLMHCBENK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLLMHCBENK_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLLMHCBENK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
