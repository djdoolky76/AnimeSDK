#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityDamageText; }
namespace RPG::GameCore { class TaskContext; }

#define IIGNODLLBLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1643BB70)
#define IIGNODLLBLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1643BBA0)

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
