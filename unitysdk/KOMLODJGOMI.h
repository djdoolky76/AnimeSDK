#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class RtOwnerEntityAddAbility; }
namespace RPG::GameCore { class TaskContext; }

#define KOMLODJGOMI_BHPIFFHAPHB_OFFSET UNITYSDK_OFFSET(0xB5A27E0)
#define KOMLODJGOMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A2610)
#define KOMLODJGOMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5A2AE0)
#define KOMLODJGOMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A2640)

	class KOMLODJGOMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtOwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtOwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + KOMLODJGOMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMLODJGOMI_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* BHPIFFHAPHB()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMLODJGOMI_BHPIFFHAPHB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMLODJGOMI_DISPOSE_OFFSET))(this);
		}

	};
