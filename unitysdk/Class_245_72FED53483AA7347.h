#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_245_72FED53483AA7347_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC01E070)
#define CLASS_245_72FED53483AA7347_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC01DC40)
#define CLASS_245_72FED53483AA7347_METHOD_OFFSET UNITYSDK_OFFSET(0xC01E300)

inline static constexpr unsigned int Class_245_72FED53483AA7347_TypeDefinitionIndex = 51607;

	class Class_245_72FED53483AA7347 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_245_72FED53483AA7347_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_245_72FED53483AA7347_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_245_72FED53483AA7347_METHOD_2_OFFSET))(a1);
		}

	};
