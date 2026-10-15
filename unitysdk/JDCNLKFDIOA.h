#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropUnloadHitBox; }
namespace RPG::GameCore { class TaskContext; }

#define JDCNLKFDIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x165BF5A0)
#define JDCNLKFDIOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BF5D0)

	class JDCNLKFDIOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + JDCNLKFDIOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCNLKFDIOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
