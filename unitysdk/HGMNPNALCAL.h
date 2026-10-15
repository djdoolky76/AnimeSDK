#pragma once
#include "unitysdk/unitysdk.h"
class FFMONJGCKDI;
namespace RPG::GameCore { class TaskContext; }

#define HGMNPNALCAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB24E0)
#define HGMNPNALCAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB2510)

	class HGMNPNALCAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFMONJGCKDI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFMONJGCKDI*))((::PBYTE)hIl2Cpp + HGMNPNALCAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNPNALCAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
