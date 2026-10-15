#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPropCablelineVisible; }
namespace RPG::GameCore { class TaskContext; }

#define MKNKALNOKEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB99AB00)
#define MKNKALNOKEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB99AB30)

inline static constexpr unsigned int MKNKALNOKEM_TypeDefinitionIndex = 58568;

	class MKNKALNOKEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropCablelineVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropCablelineVisible*))((::PBYTE)hIl2Cpp + MKNKALNOKEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKALNOKEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
