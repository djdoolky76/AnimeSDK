#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitActivityTelevisionBuffInfo; }
namespace RPG::GameCore { class TaskContext; }

#define GKHMAGBGPIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A97B90)
#define GKHMAGBGPIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A97BC0)

	class GKHMAGBGPIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + GKHMAGBGPIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHMAGBGPIP_ONTASKBEGIN_OFFSET))(this);
		}

	};
