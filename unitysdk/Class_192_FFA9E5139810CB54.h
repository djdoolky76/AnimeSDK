#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_192_FFA9E5139810CB54_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157C5150)
#define CLASS_192_FFA9E5139810CB54_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157C4D20)
#define CLASS_192_FFA9E5139810CB54_METHOD_OFFSET UNITYSDK_OFFSET(0x157C53E0)

inline static constexpr unsigned int Class_192_FFA9E5139810CB54_TypeDefinitionIndex = 50493;

	class Class_192_FFA9E5139810CB54 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_192_FFA9E5139810CB54_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_192_FFA9E5139810CB54_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_192_FFA9E5139810CB54_METHOD_2_OFFSET))(a1);
		}

	};
