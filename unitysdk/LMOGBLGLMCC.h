#pragma once
#include "unitysdk/unitysdk.h"
class BPFKBEICDAK;
namespace RPG::GameCore { class TaskContext; }

#define LMOGBLGLMCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CBDC0)
#define LMOGBLGLMCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7CBDF0)

inline static constexpr unsigned int LMOGBLGLMCC_TypeDefinitionIndex = 55356;

	class LMOGBLGLMCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BPFKBEICDAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BPFKBEICDAK*))((::PBYTE)hIl2Cpp + LMOGBLGLMCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOGBLGLMCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
