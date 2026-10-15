#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowExpandElationItem; }
namespace RPG::GameCore { class TaskContext; }

#define ODGDMFOKLDH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD92B40)
#define ODGDMFOKLDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD92B70)

	class ODGDMFOKLDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowExpandElationItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowExpandElationItem*))((::PBYTE)hIl2Cpp + ODGDMFOKLDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGDMFOKLDH_ONTASKBEGIN_OFFSET))(this);
		}

	};
