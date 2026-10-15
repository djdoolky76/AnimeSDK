#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_324_98117E524582C14F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148D6600)
#define CLASS_324_98117E524582C14F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148D6200)
#define CLASS_324_98117E524582C14F_METHOD_OFFSET UNITYSDK_OFFSET(0x148D6850)

inline static constexpr unsigned int Class_324_98117E524582C14F_TypeDefinitionIndex = 50653;

	class Class_324_98117E524582C14F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_324_98117E524582C14F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_324_98117E524582C14F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_324_98117E524582C14F_METHOD_2_OFFSET))(a1);
		}

	};
