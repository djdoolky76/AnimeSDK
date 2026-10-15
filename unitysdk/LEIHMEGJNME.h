#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define LEIHMEGJNME_CTOR_OFFSET UNITYSDK_OFFSET(0xB6540C0)
#define LEIHMEGJNME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB654160)

	class LEIHMEGJNME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddWeakness*))((::PBYTE)hIl2Cpp + LEIHMEGJNME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIHMEGJNME_ONTASKBEGIN_OFFSET))(this);
		}

	};
