#pragma once
#include "unitysdk/unitysdk.h"
class CBAGOLHBJJH;
namespace RPG::GameCore { class TaskContext; }

#define NAPLPIMHECP_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0C710)
#define NAPLPIMHECP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BB0C740)

inline static constexpr unsigned int NAPLPIMHECP_TypeDefinitionIndex = 54391;

	class NAPLPIMHECP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CBAGOLHBJJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CBAGOLHBJJH*))((::PBYTE)hIl2Cpp + NAPLPIMHECP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLPIMHECP_ONTASKBEGIN_OFFSET))(this);
		}

	};
