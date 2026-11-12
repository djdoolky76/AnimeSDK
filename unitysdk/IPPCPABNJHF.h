#pragma once
#include "unitysdk/unitysdk.h"
class FNALBBPNJNH;
namespace RPG::GameCore { class TaskContext; }

#define IPPCPABNJHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB85B630)
#define IPPCPABNJHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB85B660)

inline static constexpr unsigned int IPPCPABNJHF_TypeDefinitionIndex = 53810;

	class IPPCPABNJHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FNALBBPNJNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FNALBBPNJNH*))((::PBYTE)hIl2Cpp + IPPCPABNJHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPCPABNJHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
