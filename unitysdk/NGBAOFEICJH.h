#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AdventureGameplayLock; }
namespace RPG::GameCore { class TaskContext; }

#define NGBAOFEICJH_CTOR_OFFSET UNITYSDK_OFFSET(0x18E84D40)
#define NGBAOFEICJH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x18E84ED0)
#define NGBAOFEICJH_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18E84EE0)
#define NGBAOFEICJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E84D70)

inline static constexpr unsigned int NGBAOFEICJH_TypeDefinitionIndex = 53866;

	class NGBAOFEICJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::AdventureGameplayLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::AdventureGameplayLock*))((::PBYTE)hIl2Cpp + NGBAOFEICJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAOFEICJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAOFEICJH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAOFEICJH_ONSKIP_OFFSET))(this);
		}

	};
