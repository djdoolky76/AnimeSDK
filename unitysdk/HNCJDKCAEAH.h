#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableNPCMonsterAI; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HNCJDKCAEAH_ADCIFAOGENH_OFFSET UNITYSDK_OFFSET(0x15D80C20)
#define HNCJDKCAEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D80620)
#define HNCJDKCAEAH_FJMAFKJAJED_OFFSET UNITYSDK_OFFSET(0x15D806A0)
#define HNCJDKCAEAH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15D80BC0)
#define HNCJDKCAEAH_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15D80BD0)
#define HNCJDKCAEAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D80650)

inline static constexpr unsigned int HNCJDKCAEAH_TypeDefinitionIndex = 58109;

	class HNCJDKCAEAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableNPCMonsterAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableNPCMonsterAI*))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_ONSKIP_OFFSET))(this);
		}

		::System::Void FJMAFKJAJED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_FJMAFKJAJED_OFFSET))(this);
		}

		::System::Void ADCIFAOGENH(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNCJDKCAEAH_ADCIFAOGENH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
