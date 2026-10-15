#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectProgress; }
namespace RPG::GameCore { class TaskContext; }

#define FCEPBBDGFKD_CTOR_OFFSET UNITYSDK_OFFSET(0x156B7E30)
#define FCEPBBDGFKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B7E60)
#define FCEPBBDGFKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156B7EA0)

	class FCEPBBDGFKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + FCEPBBDGFKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEPBBDGFKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEPBBDGFKD_ONTASKBEGIN_OFFSET))(this);
		}

	};
