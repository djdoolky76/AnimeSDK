#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityDamageText; }
namespace RPG::GameCore { class TaskContext; }

#define IIGNODLLBLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1642E7A0)
#define IIGNODLLBLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1642E7D0)

inline static constexpr unsigned int IIGNODLLBLI_TypeDefinitionIndex = 54960;

	class IIGNODLLBLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityDamageText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityDamageText*))((::PBYTE)hIl2Cpp + IIGNODLLBLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGNODLLBLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
