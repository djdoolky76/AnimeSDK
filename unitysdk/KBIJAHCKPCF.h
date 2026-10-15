#pragma once
#include "unitysdk/unitysdk.h"
class EOKEPOEOCBJ;
namespace RPG::GameCore { class TaskContext; }

#define KBIJAHCKPCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB301570)
#define KBIJAHCKPCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3015A0)

inline static constexpr unsigned int KBIJAHCKPCF_TypeDefinitionIndex = 54167;

	class KBIJAHCKPCF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOKEPOEOCBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOKEPOEOCBJ*))((::PBYTE)hIl2Cpp + KBIJAHCKPCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIJAHCKPCF_ONTASKBEGIN_OFFSET))(this);
		}

	};
