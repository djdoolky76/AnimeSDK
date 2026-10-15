#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_922_7BD46B8AFF45B2AA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D5650)
#define CLASS_922_7BD46B8AFF45B2AA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D5250)
#define CLASS_922_7BD46B8AFF45B2AA_METHOD_OFFSET UNITYSDK_OFFSET(0x149D58A0)

	class Class_922_7BD46B8AFF45B2AA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_922_7BD46B8AFF45B2AA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_922_7BD46B8AFF45B2AA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_922_7BD46B8AFF45B2AA_METHOD_2_OFFSET))(a1);
		}

	};
