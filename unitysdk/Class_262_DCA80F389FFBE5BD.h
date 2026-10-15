#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_262_DCA80F389FFBE5BD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x165C4250)
#define CLASS_262_DCA80F389FFBE5BD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x165C3E20)
#define CLASS_262_DCA80F389FFBE5BD_METHOD_OFFSET UNITYSDK_OFFSET(0x165C44E0)

inline static constexpr unsigned int Class_262_DCA80F389FFBE5BD_TypeDefinitionIndex = 50575;

	class Class_262_DCA80F389FFBE5BD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_262_DCA80F389FFBE5BD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_262_DCA80F389FFBE5BD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_262_DCA80F389FFBE5BD_METHOD_2_OFFSET))(a1);
		}

	};
