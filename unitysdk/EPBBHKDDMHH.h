#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalSetBillboardShowType; }
namespace RPG::GameCore { class TaskContext; }

#define EPBBHKDDMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x155CE8F0)
#define EPBBHKDDMHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CE920)

	class EPBBHKDDMHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalSetBillboardShowType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalSetBillboardShowType*))((::PBYTE)hIl2Cpp + EPBBHKDDMHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBBHKDDMHH_ONTASKBEGIN_OFFSET))(this);
		}

	};
