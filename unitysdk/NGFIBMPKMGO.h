#pragma once
#include "unitysdk/unitysdk.h"
class ILPFGMCKLMH;
namespace RPG::GameCore { class TaskContext; }

#define NGFIBMPKMGO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA48D0)
#define NGFIBMPKMGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBA4900)

	class NGFIBMPKMGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ILPFGMCKLMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ILPFGMCKLMH*))((::PBYTE)hIl2Cpp + NGFIBMPKMGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFIBMPKMGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
