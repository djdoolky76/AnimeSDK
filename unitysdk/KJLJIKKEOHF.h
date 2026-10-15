#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitInline; }
namespace RPG::GameCore { class TaskContext; }

#define KJLJIKKEOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB453CB0)
#define KJLJIKKEOHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB453CE0)
#define KJLJIKKEOHF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB453E60)
#define KJLJIKKEOHF_TICK_OFFSET UNITYSDK_OFFSET(0xB453DC0)

inline static constexpr unsigned int KJLJIKKEOHF_TypeDefinitionIndex = 52161;

	class KJLJIKKEOHF
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*))((::PBYTE)hIl2Cpp + KJLJIKKEOHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLJIKKEOHF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJLJIKKEOHF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLJIKKEOHF_ONTASKRESET_OFFSET))(this);
		}

	};
