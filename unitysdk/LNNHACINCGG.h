#pragma once
#include "unitysdk/unitysdk.h"
class IEICGPPGDAO;
namespace RPG::GameCore { class TaskContext; }

#define LNNHACINCGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9880)
#define LNNHACINCGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E98B0)

inline static constexpr unsigned int LNNHACINCGG_TypeDefinitionIndex = 56394;

	class LNNHACINCGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IEICGPPGDAO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IEICGPPGDAO*))((::PBYTE)hIl2Cpp + LNNHACINCGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNHACINCGG_ONTASKBEGIN_OFFSET))(this);
		}

	};
