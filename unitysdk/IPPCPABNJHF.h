#pragma once
#include "unitysdk/unitysdk.h"
class FNALBBPNJNH;
namespace RPG::GameCore { class TaskContext; }

#define IPPCPABNJHF_CTOR_OFFSET UNITYSDK_OFFSET(0x19305FA0)
#define IPPCPABNJHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19305FD0)

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
