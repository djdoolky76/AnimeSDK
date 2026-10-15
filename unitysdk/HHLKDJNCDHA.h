#pragma once
#include "unitysdk/unitysdk.h"
class CCCOIPHHAPN;
namespace RPG::GameCore { class TaskContext; }

#define HHLKDJNCDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD1D60)
#define HHLKDJNCDHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD1D90)

	class HHLKDJNCDHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CCCOIPHHAPN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CCCOIPHHAPN*))((::PBYTE)hIl2Cpp + HHLKDJNCDHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKDJNCDHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
