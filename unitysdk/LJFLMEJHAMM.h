#pragma once
#include "unitysdk/unitysdk.h"
class AKOHMMLBOOM;
namespace RPG::GameCore { class TaskContext; }

#define LJFLMEJHAMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7177E0)
#define LJFLMEJHAMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB717810)
#define LJFLMEJHAMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB717850)

inline static constexpr unsigned int LJFLMEJHAMM_TypeDefinitionIndex = 53906;

	class LJFLMEJHAMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AKOHMMLBOOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AKOHMMLBOOM*))((::PBYTE)hIl2Cpp + LJFLMEJHAMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFLMEJHAMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFLMEJHAMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
