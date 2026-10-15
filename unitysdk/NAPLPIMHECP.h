#pragma once
#include "unitysdk/unitysdk.h"
class CBAGOLHBJJH;
namespace RPG::GameCore { class TaskContext; }

#define NAPLPIMHECP_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB3120)
#define NAPLPIMHECP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB3150)

inline static constexpr unsigned int NAPLPIMHECP_TypeDefinitionIndex = 53229;

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
