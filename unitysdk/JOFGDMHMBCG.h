#pragma once
#include "unitysdk/unitysdk.h"
class PHJFJAOILHD;
namespace RPG::GameCore { class TaskContext; }

#define JOFGDMHMBCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A01A0)
#define JOFGDMHMBCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2A01D0)

	class JOFGDMHMBCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PHJFJAOILHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PHJFJAOILHD*))((::PBYTE)hIl2Cpp + JOFGDMHMBCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFGDMHMBCG_ONTASKBEGIN_OFFSET))(this);
		}

	};
