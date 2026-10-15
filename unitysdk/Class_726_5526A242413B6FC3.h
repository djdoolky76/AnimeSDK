#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_726_5526A242413B6FC3_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149879F0)
#define CLASS_726_5526A242413B6FC3_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149875F0)
#define CLASS_726_5526A242413B6FC3_METHOD_OFFSET UNITYSDK_OFFSET(0x14987C40)

	class Class_726_5526A242413B6FC3 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_726_5526A242413B6FC3_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_726_5526A242413B6FC3_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_726_5526A242413B6FC3_METHOD_2_OFFSET))(a1);
		}

	};
