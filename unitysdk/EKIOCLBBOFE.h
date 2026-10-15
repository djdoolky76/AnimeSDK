#pragma once
#include "unitysdk/unitysdk.h"
class AMODLAOOHCO;
namespace RPG::GameCore { class TaskContext; }

#define EKIOCLBBOFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15506490)
#define EKIOCLBBOFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155064C0)

	class EKIOCLBBOFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AMODLAOOHCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AMODLAOOHCO*))((::PBYTE)hIl2Cpp + EKIOCLBBOFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIOCLBBOFE_ONTASKBEGIN_OFFSET))(this);
		}

	};
