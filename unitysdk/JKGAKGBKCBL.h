#pragma once
#include "unitysdk/unitysdk.h"
class BFGMNHOONGJ;
namespace RPG::GameCore { class TaskContext; }

#define JKGAKGBKCBL_CTOR_OFFSET UNITYSDK_OFFSET(0x17B21E90)
#define JKGAKGBKCBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B21EC0)

inline static constexpr unsigned int JKGAKGBKCBL_TypeDefinitionIndex = 56214;

	class JKGAKGBKCBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BFGMNHOONGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BFGMNHOONGJ*))((::PBYTE)hIl2Cpp + JKGAKGBKCBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGAKGBKCBL_ONTASKBEGIN_OFFSET))(this);
		}

	};
