#pragma once
#include "unitysdk/unitysdk.h"
class EGAADKHGDJN;
namespace RPG::GameCore { class TaskContext; }

#define JBCPGCGGDPO_CTOR_OFFSET UNITYSDK_OFFSET(0x16558C40)
#define JBCPGCGGDPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16558C70)

inline static constexpr unsigned int JBCPGCGGDPO_TypeDefinitionIndex = 55052;

	class JBCPGCGGDPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGAADKHGDJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGAADKHGDJN*))((::PBYTE)hIl2Cpp + JBCPGCGGDPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCPGCGGDPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
