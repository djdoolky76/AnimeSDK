#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_A89746C9A15BE127_OFFSET UNITYSDK_OFFSET(0x3C3CF10)
#define SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_B657F235362FBFD2_OFFSET UNITYSDK_OFFSET(0x3C3CCF0)
#define SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_F4F912C10847DEEC_OFFSET UNITYSDK_OFFSET(0x3C3CFF0)
#define SYSTEM_GLOBALIZATION_A5682E6D5708E9FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C3CDB0)
#define SYSTEM_GLOBALIZATION_A5682E6D5708E9FF__CTOR_OFFSET UNITYSDK_OFFSET(0x3C3CE40)

namespace System::Globalization
{
	inline static constexpr unsigned int A5682E6D5708E9FF_TypeDefinitionIndex = 11563;

	class A5682E6D5708E9FF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_AEF9E5C62246A486()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(A5682E6D5708E9FF_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 A63D6EB0EBEF9786; // 0x10
		::System::Int32 A380CD5FEB19D16A; // 0x14
		::System::String* EC977578C34793FC; // 0x18
		::System::String* A0EC621575B07E98; // 0x20
		::System::String* F79DF62A9494CCBE; // 0x28
		::System::UInt32 F5A567A7D5F45B5D; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A5682E6D5708E9FF__CCTOR_OFFSET))();
		}

		::System::String* A89746C9A15BE127()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_A89746C9A15BE127_OFFSET))(this);
		}

		::System::String* F4F912C10847DEEC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_F4F912C10847DEEC_OFFSET))(this);
		}

		static ::System::String* B657F235362FBFD2(::System::String* A8D653D3062006C5, ::System::UInt32 B48C66E5FB2449C6)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A5682E6D5708E9FF_B657F235362FBFD2_OFFSET))(A8D653D3062006C5, B48C66E5FB2449C6);
		}

		::System::Void _ctor(::System::Int32 AF11BA78EF1A0475)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A5682E6D5708E9FF__CTOR_OFFSET))(this, AF11BA78EF1A0475);
		}
	};
}
