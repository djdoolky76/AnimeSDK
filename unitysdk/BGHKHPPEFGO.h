#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsHealCallBackStack; }
namespace RPG::GameCore { class TaskContext; }

#define BGHKHPPEFGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB187430)
#define BGHKHPPEFGO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB187460)

inline static constexpr unsigned int BGHKHPPEFGO_TypeDefinitionIndex = 54662;

	class BGHKHPPEFGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + BGHKHPPEFGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHKHPPEFGO_EVALUATE_OFFSET))(this);
		}

	};
