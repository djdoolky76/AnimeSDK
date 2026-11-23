#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/BAFEFC2D2E9FC700.h"
#include "unitysdk/System/Runtime/InteropServices/F638271E45D4485F.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Reflection { class BDBE9A312148D1B6; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB_BB16E8F5602F7B15_OFFSET UNITYSDK_OFFSET(0x3B489B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B48C40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int F0A4754007106FAB_TypeDefinitionIndex = 10285;

	class F0A4754007106FAB : public ::System::Attribute
	{
	public:
		::System::String* F1E538EBA2CBA0B6; // 0x10
		::System::String* EE5312E626911951; // 0x18
		::System::Runtime::InteropServices::BAFEFC2D2E9FC700 BAFEFC2D2E9FC700; // 0x20
		::System::Boolean F375BB54DDDB427A; // 0x24
		::System::Boolean E5286DD17400F5A7; // 0x25
		::System::Boolean B4E39E9A72F7962C; // 0x26
		::System::Byte _padding0[0x1];
		::System::Runtime::InteropServices::F638271E45D4485F F638271E45D4485F; // 0x28
		::System::Boolean FEBC30ADDF5D8343; // 0x2C
		::System::Boolean A9EDF37022632F28; // 0x2D

		static ::System::Attribute* BB16E8F5602F7B15(::System::Reflection::BDBE9A312148D1B6* EA8FABEC6D125B33)
		{
			return ((::System::Attribute*(*)(::System::Reflection::BDBE9A312148D1B6*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB_BB16E8F5602F7B15_OFFSET))(EA8FABEC6D125B33);
		}

		::System::Void _ctor(::System::String* A240B256E473D11F)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB__CTOR_OFFSET))(this, A240B256E473D11F);
		}

		::System::Void _ctor_1(::System::String* A240B256E473D11F, ::System::String* A075A6E55BAF31B2, ::System::Runtime::InteropServices::BAFEFC2D2E9FC700 A37ECF9BA09CD89C, ::System::Boolean B34643440F8FAFF8, ::System::Boolean F94A82E8C62718A2, ::System::Boolean FE1990B17B89CCFA, ::System::Runtime::InteropServices::F638271E45D4485F EE0C5F97234DEE1A, ::System::Boolean B30BB56D11C4EE9F, ::System::Boolean E5FE194AD4C55B71)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Runtime::InteropServices::BAFEFC2D2E9FC700, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Runtime::InteropServices::F638271E45D4485F, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_F0A4754007106FAB__CTOR_1_OFFSET))(this, A240B256E473D11F, A075A6E55BAF31B2, A37ECF9BA09CD89C, B34643440F8FAFF8, F94A82E8C62718A2, FE1990B17B89CCFA, EE0C5F97234DEE1A, B30BB56D11C4EE9F, E5FE194AD4C55B71);
		}
	};
}
