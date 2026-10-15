#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace System { class Action; }
namespace System { class String; }

#define ABBNDLOOJJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EBCE0)
#define ABBNDLOOJJB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0EBCF0)
#define ABBNDLOOJJB_TICK_OFFSET UNITYSDK_OFFSET(0xB0EBD70)

	class ABBNDLOOJJB : public ::System::Object
	{
	public:
		::System::String* HCDLECMKDJM; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABBNDLOOJJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + ABBNDLOOJJB_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABBNDLOOJJB_TICK_OFFSET))(this, a1);
		}

	};
