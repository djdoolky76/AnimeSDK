#pragma once
#include "unitysdk/unitysdk.h"
class CLMMOEFOCNP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NKFNCKAGOJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC33880)
#define NKFNCKAGOJO_JJNLKPGLJHF_OFFSET UNITYSDK_OFFSET(0xBC33B00)
#define NKFNCKAGOJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC338B0)

	class NKFNCKAGOJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CLMMOEFOCNP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CLMMOEFOCNP*))((::PBYTE)hIl2Cpp + NKFNCKAGOJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFNCKAGOJO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* JJNLKPGLJHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFNCKAGOJO_JJNLKPGLJHF_OFFSET))(this);
		}

	};
