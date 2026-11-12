#pragma once
#include "unitysdk/unitysdk.h"
class HAACGHDLFOK;
namespace RPG::GameCore { class TaskContext; }

#define HLFHEENBEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB7DE0)
#define HLFHEENBEPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CB7E10)

inline static constexpr unsigned int HLFHEENBEPJ_TypeDefinitionIndex = 53972;

	class HLFHEENBEPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HAACGHDLFOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HAACGHDLFOK*))((::PBYTE)hIl2Cpp + HLFHEENBEPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFHEENBEPJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
