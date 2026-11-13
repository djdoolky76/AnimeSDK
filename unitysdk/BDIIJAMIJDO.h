#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class PPPHANEJBAC;
namespace RPG::GameCore { class TaskContext; }

#define BDIIJAMIJDO_CTOR_OFFSET UNITYSDK_OFFSET(0x19D98D50)
#define BDIIJAMIJDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D98E10)
#define BDIIJAMIJDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D98EE0)

inline static constexpr unsigned int BDIIJAMIJDO_TypeDefinitionIndex = 56469;

	class BDIIJAMIJDO
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PPPHANEJBAC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PPPHANEJBAC*))((::PBYTE)hIl2Cpp + BDIIJAMIJDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIIJAMIJDO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIIJAMIJDO_ONTASKBEGIN_OFFSET))(this);
		}

	};
