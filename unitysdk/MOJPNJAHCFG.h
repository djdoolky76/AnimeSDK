#pragma once
#include "unitysdk/unitysdk.h"
class OHHKKDLHIAN;
namespace RPG::GameCore { class TaskContext; }

#define MOJPNJAHCFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA32990)
#define MOJPNJAHCFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA329C0)

	class MOJPNJAHCFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHHKKDLHIAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHHKKDLHIAN*))((::PBYTE)hIl2Cpp + MOJPNJAHCFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJPNJAHCFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
