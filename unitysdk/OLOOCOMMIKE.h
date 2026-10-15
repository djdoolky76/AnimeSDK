#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetColliderGroupState; }
namespace RPG::GameCore { class TaskContext; }

#define OLOOCOMMIKE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17220)
#define OLOOCOMMIKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF17250)

	class OLOOCOMMIKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetColliderGroupState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetColliderGroupState*))((::PBYTE)hIl2Cpp + OLOOCOMMIKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOOCOMMIKE_ONTASKBEGIN_OFFSET))(this);
		}

	};
