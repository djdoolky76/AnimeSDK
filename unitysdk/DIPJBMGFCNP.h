#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class StackCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define DIPJBMGFCNP_CTOR_OFFSET UNITYSDK_OFFSET(0xF221680)
#define DIPJBMGFCNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF221740)
#define DIPJBMGFCNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF221810)
#define DIPJBMGFCNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF221A80)
#define DIPJBMGFCNP_TICK_OFFSET UNITYSDK_OFFSET(0xF221AD0)

inline static constexpr unsigned int DIPJBMGFCNP_TypeDefinitionIndex = 55641;

	class DIPJBMGFCNP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackCustomUnselectable* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + DIPJBMGFCNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJBMGFCNP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJBMGFCNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJBMGFCNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIPJBMGFCNP_TICK_OFFSET))(this, a1);
		}

	};
