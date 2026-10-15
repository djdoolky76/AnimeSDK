#pragma once
#include "unitysdk/unitysdk.h"
class IALHIKGIPOB;
namespace RPG::GameCore { class TaskContext; }

#define ICKIKLGOLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E51430)
#define ICKIKLGOLKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E51460)
#define ICKIKLGOLKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E514A0)

	class ICKIKLGOLKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IALHIKGIPOB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IALHIKGIPOB*))((::PBYTE)hIl2Cpp + ICKIKLGOLKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKIKLGOLKM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKIKLGOLKM_ONTASKBEGIN_OFFSET))(this);
		}

	};
