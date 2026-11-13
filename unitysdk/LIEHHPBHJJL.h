#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockTargetHP; }
namespace RPG::GameCore { class TaskContext; }

#define LIEHHPBHJJL_CTOR_OFFSET UNITYSDK_OFFSET(0x172DBF30)
#define LIEHHPBHJJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172DBF60)

inline static constexpr unsigned int LIEHHPBHJJL_TypeDefinitionIndex = 56333;

	class LIEHHPBHJJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetHP*))((::PBYTE)hIl2Cpp + LIEHHPBHJJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEHHPBHJJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
