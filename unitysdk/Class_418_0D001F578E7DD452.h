#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_418_0D001F578E7DD452_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FBB60)
#define CLASS_418_0D001F578E7DD452_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FB760)
#define CLASS_418_0D001F578E7DD452_METHOD_OFFSET UNITYSDK_OFFSET(0x148FBDB0)

	class Class_418_0D001F578E7DD452 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_418_0D001F578E7DD452_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_418_0D001F578E7DD452_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_418_0D001F578E7DD452_METHOD_2_OFFSET))(a1);
		}

	};
