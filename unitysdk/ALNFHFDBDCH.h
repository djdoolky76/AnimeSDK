#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGMDJBCHFO;

#define ALNFHFDBDCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0C2F0)
#define ALNFHFDBDCH_GDNFNCJPDKD_OFFSET UNITYSDK_OFFSET(0x1DD0C2D0)
#define ALNFHFDBDCH_ILJANLIPIKB_OFFSET UNITYSDK_OFFSET(0x1DD0C2E0)

	class ALNFHFDBDCH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* CDGOENMGNNH; // 0x10
		::JBGMDJBCHFO* FGJCDIODHML; // 0x18
		::System::Int32 FFJHGDOLECF; // 0x20
		::System::Single CLPOMLADGFD; // 0x24
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::JBGMDJBCHFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::JBGMDJBCHFO*))((::PBYTE)hIl2Cpp + ALNFHFDBDCH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GDNFNCJPDKD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFHFDBDCH_GDNFNCJPDKD_OFFSET))(this);
		}

		::System::Void ILJANLIPIKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALNFHFDBDCH_ILJANLIPIKB_OFFSET))(this, a1);
		}

	};
