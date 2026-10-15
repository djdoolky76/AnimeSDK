#pragma once
#include "unitysdk/unitysdk.h"
class CFEONGLOPGE;
namespace RPG::GameCore { class TaskContext; }

#define OIMJBGGAHIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA1370)
#define OIMJBGGAHIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA13A0)

	class OIMJBGGAHIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CFEONGLOPGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CFEONGLOPGE*))((::PBYTE)hIl2Cpp + OIMJBGGAHIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMJBGGAHIM_ONTASKBEGIN_OFFSET))(this);
		}

	};
