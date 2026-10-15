#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySwitchMascotCanShootTarget; }
namespace RPG::GameCore { class TaskContext; }

#define EAJGCKMEOMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1267C3D0)
#define EAJGCKMEOMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1267C400)

inline static constexpr unsigned int EAJGCKMEOMN_TypeDefinitionIndex = 57994;

	class EAJGCKMEOMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + EAJGCKMEOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJGCKMEOMN_EVALUATE_OFFSET))(this);
		}

	};
