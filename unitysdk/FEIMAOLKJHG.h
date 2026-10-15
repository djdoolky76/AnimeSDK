#pragma once
#include "unitysdk/unitysdk.h"
class AFGOLNPFJIF;
namespace RPG::GameCore { class TaskContext; }

#define FEIMAOLKJHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15722D70)
#define FEIMAOLKJHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15722DA0)

inline static constexpr unsigned int FEIMAOLKJHG_TypeDefinitionIndex = 55238;

	class FEIMAOLKJHG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AFGOLNPFJIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AFGOLNPFJIF*))((::PBYTE)hIl2Cpp + FEIMAOLKJHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIMAOLKJHG_ONTASKBEGIN_OFFSET))(this);
		}

	};
