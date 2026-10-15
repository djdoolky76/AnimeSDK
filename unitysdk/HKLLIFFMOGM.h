#pragma once
#include "unitysdk/unitysdk.h"
class ELFFAEOGFJK;
namespace RPG::GameCore { class TaskContext; }

#define HKLLIFFMOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3EA10)
#define HKLLIFFMOGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D3EA40)
#define HKLLIFFMOGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D3EA80)
#define HKLLIFFMOGM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D3ED30)
#define HKLLIFFMOGM_TICK_OFFSET UNITYSDK_OFFSET(0x15D3ED80)

inline static constexpr unsigned int HKLLIFFMOGM_TypeDefinitionIndex = 52871;

	class HKLLIFFMOGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELFFAEOGFJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELFFAEOGFJK*))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKLLIFFMOGM_TICK_OFFSET))(this, a1);
		}

	};
