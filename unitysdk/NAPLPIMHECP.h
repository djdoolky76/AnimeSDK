#pragma once
#include "unitysdk/unitysdk.h"
class CBAGOLHBJJH;
namespace RPG::GameCore { class TaskContext; }

#define NAPLPIMHECP_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB9310)
#define NAPLPIMHECP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB9340)

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
