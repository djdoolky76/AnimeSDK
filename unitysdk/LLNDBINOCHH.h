#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HONIFDCKPFM.h"

#define LLNDBINOCHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB774A30)
#define LLNDBINOCHH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB7749C0)
#define LLNDBINOCHH_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB7749D0)

	class LLNDBINOCHH : public ::HONIFDCKPFM
	{
	public:
		::System::Int32 ENMIPOPKOOL; // 0x18
		::System::Int32 PJKFLONMKED; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLNDBINOCHH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNDBINOCHH_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLNDBINOCHH_SET_VALUE_OFFSET))(this, a1);
		}

	};
