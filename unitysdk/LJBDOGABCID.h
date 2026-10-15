#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LJBDOGABCID_AFJLGKEHHJA_OFFSET UNITYSDK_OFFSET(0xB6E0960)
#define LJBDOGABCID_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E0370)
#define LJBDOGABCID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6E03A0)
#define LJBDOGABCID_FJPPFFKBLOI_OFFSET UNITYSDK_OFFSET(0xB6E0450)
#define LJBDOGABCID_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB6E03E0)
#define LJBDOGABCID_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB6E03F0)
#define LJBDOGABCID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6E0910)

	class LJBDOGABCID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyProp*))((::PBYTE)hIl2Cpp + LJBDOGABCID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBDOGABCID_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBDOGABCID_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBDOGABCID_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBDOGABCID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FJPPFFKBLOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBDOGABCID_FJPPFFKBLOI_OFFSET))(this);
		}

		::System::Void AFJLGKEHHJA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LJBDOGABCID_AFJLGKEHHJA_OFFSET))(this, a1);
		}

	};
