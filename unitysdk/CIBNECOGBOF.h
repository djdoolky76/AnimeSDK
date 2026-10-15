#pragma once
#include "unitysdk/unitysdk.h"
class NGAIHLKLKCH;
namespace RPG::GameCore { class TaskContext; }

#define CIBNECOGBOF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF651D0)
#define CIBNECOGBOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF65200)

inline static constexpr unsigned int CIBNECOGBOF_TypeDefinitionIndex = 58437;

	class CIBNECOGBOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGAIHLKLKCH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGAIHLKLKCH*))((::PBYTE)hIl2Cpp + CIBNECOGBOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBNECOGBOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
