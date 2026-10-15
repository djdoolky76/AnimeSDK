#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_882_2974B62E265D74DE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149C57F0)
#define CLASS_882_2974B62E265D74DE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149C53F0)
#define CLASS_882_2974B62E265D74DE_METHOD_OFFSET UNITYSDK_OFFSET(0x149C5A40)

	class Class_882_2974B62E265D74DE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_882_2974B62E265D74DE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_882_2974B62E265D74DE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_882_2974B62E265D74DE_METHOD_2_OFFSET))(a1);
		}

	};
