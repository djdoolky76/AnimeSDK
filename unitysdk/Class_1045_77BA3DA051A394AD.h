#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1045_77BA3DA051A394AD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x158ABDE0)
#define CLASS_1045_77BA3DA051A394AD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x158AB9E0)
#define CLASS_1045_77BA3DA051A394AD_METHOD_OFFSET UNITYSDK_OFFSET(0x158AC030)

inline static constexpr unsigned int Class_1045_77BA3DA051A394AD_TypeDefinitionIndex = 52431;

	class Class_1045_77BA3DA051A394AD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1045_77BA3DA051A394AD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1045_77BA3DA051A394AD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1045_77BA3DA051A394AD_METHOD_2_OFFSET))(a1);
		}

	};
