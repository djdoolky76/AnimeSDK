#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_720_BB172F255FD6519A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB46720)
#define CLASS_720_BB172F255FD6519A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB46320)
#define CLASS_720_BB172F255FD6519A_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB46950)

inline static constexpr unsigned int Class_720_BB172F255FD6519A_TypeDefinitionIndex = 52106;

	class Class_720_BB172F255FD6519A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_720_BB172F255FD6519A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_720_BB172F255FD6519A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_720_BB172F255FD6519A_METHOD_2_OFFSET))(a1);
		}

	};
