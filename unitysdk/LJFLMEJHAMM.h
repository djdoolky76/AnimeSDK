#pragma once
#include "unitysdk/unitysdk.h"
class AKOHMMLBOOM;
namespace RPG::GameCore { class TaskContext; }

#define LJFLMEJHAMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3A90)
#define LJFLMEJHAMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFB3AC0)
#define LJFLMEJHAMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFB3B00)

inline static constexpr unsigned int LJFLMEJHAMM_TypeDefinitionIndex = 55070;

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
