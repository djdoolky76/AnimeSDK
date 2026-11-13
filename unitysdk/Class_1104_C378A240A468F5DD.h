#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1104_C378A240A468F5DD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BD9CA20)
#define CLASS_1104_C378A240A468F5DD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BD9C620)
#define CLASS_1104_C378A240A468F5DD_METHOD_OFFSET UNITYSDK_OFFSET(0x1BD9CC70)

inline static constexpr unsigned int Class_1104_C378A240A468F5DD_TypeDefinitionIndex = 52490;

	class Class_1104_C378A240A468F5DD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1104_C378A240A468F5DD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1104_C378A240A468F5DD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1104_C378A240A468F5DD_METHOD_2_OFFSET))(a1);
		}

	};
