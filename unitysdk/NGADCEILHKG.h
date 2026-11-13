#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkillOneMore; }

#define NGADCEILHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x18E7F2F0)
#define NGADCEILHKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E7F320)

inline static constexpr unsigned int NGADCEILHKG_TypeDefinitionIndex = 56998;

	class NGADCEILHKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkillOneMore* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + NGADCEILHKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGADCEILHKG_ONTASKBEGIN_OFFSET))(this);
		}

	};
