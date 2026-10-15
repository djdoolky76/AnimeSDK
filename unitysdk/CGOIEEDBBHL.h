#pragma once
#include "unitysdk/unitysdk.h"
class MFDGMNBPMLI;
namespace RPG::GameCore { class TaskContext; }

#define CGOIEEDBBHL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC87460)
#define CGOIEEDBBHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC87490)

inline static constexpr unsigned int CGOIEEDBBHL_TypeDefinitionIndex = 52864;

	class CGOIEEDBBHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MFDGMNBPMLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MFDGMNBPMLI*))((::PBYTE)hIl2Cpp + CGOIEEDBBHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIEEDBBHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
