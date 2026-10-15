#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Main_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define EGHMOKLNFNH_CTOR_OFFSET UNITYSDK_OFFSET(0x145196E0)
#define EGHMOKLNFNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145197A0)
#define EGHMOKLNFNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145197F0)
#define EGHMOKLNFNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14519B90)
#define EGHMOKLNFNH_TICK_OFFSET UNITYSDK_OFFSET(0x14519BE0)

inline static constexpr unsigned int EGHMOKLNFNH_TypeDefinitionIndex = 52217;

	class EGHMOKLNFNH
	{
	public:
		::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + EGHMOKLNFNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHMOKLNFNH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHMOKLNFNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHMOKLNFNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGHMOKLNFNH_TICK_OFFSET))(this, a1);
		}

	};
