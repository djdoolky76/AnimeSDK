#pragma once
#include "unitysdk/unitysdk.h"
class DJFPJDODLMB;
namespace RPG::GameCore { class TaskContext; }

#define HEDJOBLELCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C41750)
#define HEDJOBLELCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C41780)

inline static constexpr unsigned int HEDJOBLELCC_TypeDefinitionIndex = 52854;

	class HEDJOBLELCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DJFPJDODLMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DJFPJDODLMB*))((::PBYTE)hIl2Cpp + HEDJOBLELCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDJOBLELCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
