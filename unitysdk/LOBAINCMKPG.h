#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnLockCamera; }

#define LOBAINCMKPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EB850)
#define LOBAINCMKPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7EB890)
#define LOBAINCMKPG_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB7EB880)
#define LOBAINCMKPG_NHKABELGLJI_OFFSET UNITYSDK_OFFSET(0xB7EB930)
#define LOBAINCMKPG_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB7EB8D0)
#define LOBAINCMKPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7EB9D0)

inline static constexpr unsigned int LOBAINCMKPG_TypeDefinitionIndex = 53458;

	class LOBAINCMKPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + LOBAINCMKPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBAINCMKPG_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBAINCMKPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBAINCMKPG_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBAINCMKPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NHKABELGLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBAINCMKPG_NHKABELGLJI_OFFSET))(this);
		}

	};
