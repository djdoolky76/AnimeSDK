#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_742_FB5D20B114065592_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14982590)
#define CLASS_742_FB5D20B114065592_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14982190)
#define CLASS_742_FB5D20B114065592_METHOD_OFFSET UNITYSDK_OFFSET(0x149827E0)

inline static constexpr unsigned int Class_742_FB5D20B114065592_TypeDefinitionIndex = 51077;

	class Class_742_FB5D20B114065592 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_742_FB5D20B114065592_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_742_FB5D20B114065592_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_742_FB5D20B114065592_METHOD_2_OFFSET))(a1);
		}

	};
