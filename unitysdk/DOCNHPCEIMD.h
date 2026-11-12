#pragma once
#include "unitysdk/unitysdk.h"
class AFONHNBABGO;
namespace RPG::GameCore { class TaskContext; }

#define DOCNHPCEIMD_CTOR_OFFSET UNITYSDK_OFFSET(0x12DD90F0)
#define DOCNHPCEIMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12DD9120)

inline static constexpr unsigned int DOCNHPCEIMD_TypeDefinitionIndex = 59759;

	class DOCNHPCEIMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AFONHNBABGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AFONHNBABGO*))((::PBYTE)hIl2Cpp + DOCNHPCEIMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCNHPCEIMD_ONTASKBEGIN_OFFSET))(this);
		}

	};
