#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_601_82998C945EBB9B9D_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14956100)
#define CLASS_601_82998C945EBB9B9D_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14955D00)
#define CLASS_601_82998C945EBB9B9D_METHOD_OFFSET UNITYSDK_OFFSET(0x14956350)

	class Class_601_82998C945EBB9B9D : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_601_82998C945EBB9B9D_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_601_82998C945EBB9B9D_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_601_82998C945EBB9B9D_METHOD_2_OFFSET))(a1);
		}

	};
