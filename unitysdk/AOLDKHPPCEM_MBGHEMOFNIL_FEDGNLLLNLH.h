#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E78340)
#define AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E78400)
#define AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E78330)

	struct alignas(8) AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH
	{
		::System::String* OPOJHKBPMHB; // 0x10
		::System::String* APEBFNLKOCN; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDKHPPCEM_MBGHEMOFNIL_FEDGNLLLNLH_GETHASHCODE_OFFSET))(this);
		}

	};
