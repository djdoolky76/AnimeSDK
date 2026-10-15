#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_830_51B1DA8D58860D96_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149B0DD0)
#define CLASS_830_51B1DA8D58860D96_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149B09D0)
#define CLASS_830_51B1DA8D58860D96_METHOD_OFFSET UNITYSDK_OFFSET(0x149B1020)

	class Class_830_51B1DA8D58860D96 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_830_51B1DA8D58860D96_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_830_51B1DA8D58860D96_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_830_51B1DA8D58860D96_METHOD_2_OFFSET))(a1);
		}

	};
