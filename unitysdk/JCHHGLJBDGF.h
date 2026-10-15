#pragma once
#include "unitysdk/unitysdk.h"
class HCKGHEOLECJ;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JCHHGLJBDGF_CTOR_OFFSET UNITYSDK_OFFSET(0x16592DB0)
#define JCHHGLJBDGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16592DE0)

	class JCHHGLJBDGF
	{
	public:
		::Il2CppArray<::System::String*>* BFNJPDOPJLE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCKGHEOLECJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCKGHEOLECJ*))((::PBYTE)hIl2Cpp + JCHHGLJBDGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHHGLJBDGF_ONTASKBEGIN_OFFSET))(this);
		}

	};
