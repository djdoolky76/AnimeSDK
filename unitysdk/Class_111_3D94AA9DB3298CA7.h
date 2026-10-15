#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_111_3D94AA9DB3298CA7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15ACF6B0)
#define CLASS_111_3D94AA9DB3298CA7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15ACF280)
#define CLASS_111_3D94AA9DB3298CA7_METHOD_OFFSET UNITYSDK_OFFSET(0x15ACF940)

inline static constexpr unsigned int Class_111_3D94AA9DB3298CA7_TypeDefinitionIndex = 50412;

	class Class_111_3D94AA9DB3298CA7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_111_3D94AA9DB3298CA7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_111_3D94AA9DB3298CA7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_111_3D94AA9DB3298CA7_METHOD_2_OFFSET))(a1);
		}

	};
