#pragma once
#include "unitysdk/unitysdk.h"
class MBIADGFPAGK;
namespace RPG::GameCore { class TaskContext; }

#define DGPMOACDAHD_CTOR_OFFSET UNITYSDK_OFFSET(0xE851EB0)
#define DGPMOACDAHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE851EE0)

inline static constexpr unsigned int DGPMOACDAHD_TypeDefinitionIndex = 56391;

	class DGPMOACDAHD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MBIADGFPAGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MBIADGFPAGK*))((::PBYTE)hIl2Cpp + DGPMOACDAHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPMOACDAHD_ONTASKBEGIN_OFFSET))(this);
		}

	};
