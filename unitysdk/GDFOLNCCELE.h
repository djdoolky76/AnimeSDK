#pragma once
#include "unitysdk/unitysdk.h"
class LMKKFPJBAFD;
namespace RPG::GameCore { class TaskContext; }

#define GDFOLNCCELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1599B8A0)
#define GDFOLNCCELE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1599B8D0)

	class GDFOLNCCELE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LMKKFPJBAFD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LMKKFPJBAFD*))((::PBYTE)hIl2Cpp + GDFOLNCCELE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFOLNCCELE_ONTASKBEGIN_OFFSET))(this);
		}

	};
