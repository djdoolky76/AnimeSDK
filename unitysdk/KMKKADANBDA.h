#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueAvatarPick; }

#define KMKKADANBDA_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xB556D20)
#define KMKKADANBDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB556B40)
#define KMKKADANBDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB556B50)
#define KMKKADANBDA_OKNANLNIEGL_OFFSET UNITYSDK_OFFSET(0xB556F60)
#define KMKKADANBDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB556BF0)
#define KMKKADANBDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB556F10)
#define KMKKADANBDA_TICK_OFFSET UNITYSDK_OFFSET(0xB556B90)
#define KMKKADANBDA__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xB557080)

inline static constexpr unsigned int KMKKADANBDA_TypeDefinitionIndex = 58794;

	class KMKKADANBDA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerRogueAvatarPick* OFKGLJOAMLD; // 0x18
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + KMKKADANBDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMKKADANBDA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA_ONTASKRESET_OFFSET))(this);
		}

		::RPG::Client::UIController* AIEGALJHOFE()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA_AIEGALJHOFE_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* OKNANLNIEGL()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA_OKNANLNIEGL_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKADANBDA__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
