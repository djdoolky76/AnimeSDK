#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_895_D060EAFDECEBA9A2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149BF0D0)
#define CLASS_895_D060EAFDECEBA9A2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149BECD0)
#define CLASS_895_D060EAFDECEBA9A2_METHOD_OFFSET UNITYSDK_OFFSET(0x149BF320)

inline static constexpr unsigned int Class_895_D060EAFDECEBA9A2_TypeDefinitionIndex = 51230;

	class Class_895_D060EAFDECEBA9A2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_895_D060EAFDECEBA9A2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_895_D060EAFDECEBA9A2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_895_D060EAFDECEBA9A2_METHOD_2_OFFSET))(a1);
		}

	};
