#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAnimatorTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define EDOCBJOMKKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1332D910)
#define EDOCBJOMKKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1332D940)

inline static constexpr unsigned int EDOCBJOMKKP_TypeDefinitionIndex = 55490;

	class EDOCBJOMKKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + EDOCBJOMKKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOCBJOMKKP_ONTASKBEGIN_OFFSET))(this);
		}

	};
