#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class OwnerEntityAddAbility; }
namespace RPG::GameCore { class TaskContext; }

#define JJPGMCPMHGL_BHPIFFHAPHB_OFFSET UNITYSDK_OFFSET(0xB20C0A0)
#define JJPGMCPMHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB20BE90)
#define JJPGMCPMHGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB20BEA0)
#define JJPGMCPMHGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB20BEE0)
#define JJPGMCPMHGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB20C3A0)
#define JJPGMCPMHGL_TICK_OFFSET UNITYSDK_OFFSET(0xB20C3F0)

inline static constexpr unsigned int JJPGMCPMHGL_TypeDefinitionIndex = 55250;

	class JJPGMCPMHGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OwnerEntityAddAbility* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_TICK_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* BHPIFFHAPHB()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPGMCPMHGL_BHPIFFHAPHB_OFFSET))(this);
		}

	};
