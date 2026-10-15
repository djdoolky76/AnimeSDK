#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddRegardAsSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define LBNKIJHDBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB60D5E0)
#define LBNKIJHDBHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB60D610)

	class LBNKIJHDBHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddRegardAsSkillType*))((::PBYTE)hIl2Cpp + LBNKIJHDBHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKIJHDBHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
