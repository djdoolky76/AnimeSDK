#pragma once
#include "unitysdk/unitysdk.h"
class BKEOMHKCMKK;
namespace RPG::GameCore { class TaskContext; }

#define KOPKNJLHDOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A3B20)
#define KOPKNJLHDOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A3B50)

	class KOPKNJLHDOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BKEOMHKCMKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BKEOMHKCMKK*))((::PBYTE)hIl2Cpp + KOPKNJLHDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPKNJLHDOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
