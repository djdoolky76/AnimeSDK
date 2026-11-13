#pragma once
#include "unitysdk/unitysdk.h"
class JLBEBAMLGPB;
namespace RPG::GameCore { class TaskContext; }

#define BOPIHNCNNOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F7380)
#define BOPIHNCNNOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5F73B0)

inline static constexpr unsigned int BOPIHNCNNOH_TypeDefinitionIndex = 59890;

	class BOPIHNCNNOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JLBEBAMLGPB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JLBEBAMLGPB*))((::PBYTE)hIl2Cpp + BOPIHNCNNOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPIHNCNNOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
