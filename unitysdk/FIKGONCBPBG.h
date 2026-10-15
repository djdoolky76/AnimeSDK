#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetDefaultDamageDisplayData; }
namespace RPG::GameCore { class TaskContext; }

#define FIKGONCBPBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1579FBD0)
#define FIKGONCBPBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1579FC00)

inline static constexpr unsigned int FIKGONCBPBG_TypeDefinitionIndex = 55580;

	class FIKGONCBPBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*))((::PBYTE)hIl2Cpp + FIKGONCBPBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKGONCBPBG_ONTASKBEGIN_OFFSET))(this);
		}

	};
