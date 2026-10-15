#pragma once
#include "unitysdk/unitysdk.h"
class MJNAGKGOMKA;
namespace RPG::GameCore { class TaskContext; }

#define IJLELNGIFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1646BFC0)
#define IJLELNGIFNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1646BFF0)

	class IJLELNGIFNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJNAGKGOMKA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJNAGKGOMKA*))((::PBYTE)hIl2Cpp + IJLELNGIFNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLELNGIFNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
