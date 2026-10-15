#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenSetEntityPositionByAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define PKBBOBOFLCI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AA650)
#define PKBBOBOFLCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2AA680)

	class PKBBOBOFLCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*))((::PBYTE)hIl2Cpp + PKBBOBOFLCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBBOBOFLCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
