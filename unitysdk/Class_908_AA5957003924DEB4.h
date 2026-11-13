#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_908_AA5957003924DEB4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE18320)
#define CLASS_908_AA5957003924DEB4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE17F20)
#define CLASS_908_AA5957003924DEB4_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE18570)

inline static constexpr unsigned int Class_908_AA5957003924DEB4_TypeDefinitionIndex = 52294;

	class Class_908_AA5957003924DEB4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_908_AA5957003924DEB4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_908_AA5957003924DEB4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_908_AA5957003924DEB4_METHOD_2_OFFSET))(a1);
		}

	};
