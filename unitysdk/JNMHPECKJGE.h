#pragma once
#include "unitysdk/unitysdk.h"
class CKODFHCLJAG;
namespace RPG::GameCore { class TaskContext; }

#define JNMHPECKJGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C8B70)
#define JNMHPECKJGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B4C8BA0)

inline static constexpr unsigned int JNMHPECKJGE_TypeDefinitionIndex = 54021;

	class JNMHPECKJGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CKODFHCLJAG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CKODFHCLJAG*))((::PBYTE)hIl2Cpp + JNMHPECKJGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMHPECKJGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
