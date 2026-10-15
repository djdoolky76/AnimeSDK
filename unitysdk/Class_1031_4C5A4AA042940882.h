#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1031_4C5A4AA042940882_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A00AC0)
#define CLASS_1031_4C5A4AA042940882_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A006C0)
#define CLASS_1031_4C5A4AA042940882_METHOD_OFFSET UNITYSDK_OFFSET(0x14A00D10)

inline static constexpr unsigned int Class_1031_4C5A4AA042940882_TypeDefinitionIndex = 51366;

	class Class_1031_4C5A4AA042940882 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1031_4C5A4AA042940882_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1031_4C5A4AA042940882_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1031_4C5A4AA042940882_METHOD_2_OFFSET))(a1);
		}

	};
