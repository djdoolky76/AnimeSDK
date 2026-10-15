#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyFMChannelSourceSignal; }
namespace RPG::GameCore { class TaskContext; }

#define CCJBEFNAFMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC73ACF0)
#define CCJBEFNAFMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC73AD20)

inline static constexpr unsigned int CCJBEFNAFMP_TypeDefinitionIndex = 53026;

	class CCJBEFNAFMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + CCJBEFNAFMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJBEFNAFMP_ONTASKBEGIN_OFFSET))(this);
		}

	};
