#pragma once
#include "unitysdk/unitysdk.h"
class NIDNKHHNCDD;
namespace RPG::GameCore { class TaskContext; }

#define GJFFPJNNPLH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A59B60)
#define GJFFPJNNPLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A59B90)

inline static constexpr unsigned int GJFFPJNNPLH_TypeDefinitionIndex = 55691;

	class GJFFPJNNPLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NIDNKHHNCDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NIDNKHHNCDD*))((::PBYTE)hIl2Cpp + GJFFPJNNPLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFFPJNNPLH_ONTASKBEGIN_OFFSET))(this);
		}

	};
