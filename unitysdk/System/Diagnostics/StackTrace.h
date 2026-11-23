#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/StackTrace_FBABFC66754EB046.h"
#include "unitysdk/System/Object.h"

class BAD914528AA19877;
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Diagnostics { class StackFrame; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_STACKTRACE_B2ACB4020D9C4CEA_OFFSET UNITYSDK_OFFSET(0x3CF13F0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_B4D124708D632E18_OFFSET UNITYSDK_OFFSET(0x3CF2080)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_B7894D62358914DA_OFFSET UNITYSDK_OFFSET(0x3CF2070)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_E2045FE3CF841DB7_OFFSET UNITYSDK_OFFSET(0x3CF2050)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_E31774112A4E5756_OFFSET UNITYSDK_OFFSET(0x3CF1540)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_E80B9F472EEFDF74_1_OFFSET UNITYSDK_OFFSET(0x3CF1C20)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x3C428B0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_E91FFCF1C8A427A6_OFFSET UNITYSDK_OFFSET(0x3CF0C80)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_FDBBBE5B560DBC60_OFFSET UNITYSDK_OFFSET(0x3CF1100)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_FE462945FE7B92D9_OFFSET UNITYSDK_OFFSET(0x3CF14D0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CF1DD0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CF1E10)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CF1F70)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3CF2020)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x3CF1F30)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTrace_TypeDefinitionIndex = 10715;

	class StackTrace : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EBAB2348C83EE3FD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_A1A7C7953681DB1A()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::Il2CppArray<::System::Diagnostics::StackFrame*>* F2655AB8576C5DBE; // 0x10
		::Il2CppArray<::System::Diagnostics::StackTrace*>* FB7CFCADE6F4B560; // 0x18
		::System::Boolean BB0E1360D3DF37B8; // 0x20

		::System::Void B4D124708D632E18(::System::Int32 A213C344601F9034, ::System::Boolean F9E9DB66A647636E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_B4D124708D632E18_OFFSET))(this, A213C344601F9034, F9E9DB66A647636E);
		}

		static ::Il2CppArray<::System::Diagnostics::StackFrame*>* B7894D62358914DA(::System::Exception* A5FB7225DA5C5A9B, ::System::Int32 A213C344601F9034, ::System::Boolean F9E9DB66A647636E)
		{
			return ((::Il2CppArray<::System::Diagnostics::StackFrame*>*(*)(::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_B7894D62358914DA_OFFSET))(A5FB7225DA5C5A9B, A213C344601F9034, F9E9DB66A647636E);
		}

		::System::String* E80B9F472EEFDF74(::System::Diagnostics::StackTrace_FBABFC66754EB046 B1DB32918271152A)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::StackTrace_FBABFC66754EB046))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_E80B9F472EEFDF74_OFFSET))(this, B1DB32918271152A);
		}

		::System::Diagnostics::StackFrame* FE462945FE7B92D9(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Diagnostics::StackFrame*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_FE462945FE7B92D9_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void _ctor(::System::Int32 A213C344601F9034, ::System::Boolean F9E9DB66A647636E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET))(this, A213C344601F9034, F9E9DB66A647636E);
		}

		::System::String* E80B9F472EEFDF74_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_E80B9F472EEFDF74_1_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean F9E9DB66A647636E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET))(this, F9E9DB66A647636E);
		}

		::System::Void _ctor_2(::System::Exception* A5FB7225DA5C5A9B, ::System::Int32 A213C344601F9034, ::System::Boolean F9E9DB66A647636E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET))(this, A5FB7225DA5C5A9B, A213C344601F9034, F9E9DB66A647636E);
		}

		::System::Void _ctor_3(::System::Exception* A5FB7225DA5C5A9B, ::System::Boolean F9E9DB66A647636E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET))(this, A5FB7225DA5C5A9B, F9E9DB66A647636E);
		}

		::System::Boolean E91FFCF1C8A427A6(::System::Text::StringBuilder* A94D8812A3A79CC8, ::System::Boolean AB58FFF7077B1130, ::System::Boolean& B7068BE6520E4EB1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_E91FFCF1C8A427A6_OFFSET))(this, A94D8812A3A79CC8, AB58FFF7077B1130, B7068BE6520E4EB1);
		}

		::System::Void _ctor_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET))(this);
		}

		::System::Void E31774112A4E5756(::System::Text::StringBuilder* A94D8812A3A79CC8, ::BAD914528AA19877* B9E1297507ED0579, ::System::Boolean F0DD65CB96934845, ::System::Boolean& AEB7C7FBA60A3D50, ::System::Boolean& B7068BE6520E4EB1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::BAD914528AA19877*, ::System::Boolean, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_E31774112A4E5756_OFFSET))(this, A94D8812A3A79CC8, B9E1297507ED0579, F0DD65CB96934845, AEB7C7FBA60A3D50, B7068BE6520E4EB1);
		}

		static ::System::Void FDBBBE5B560DBC60(::BAD914528AA19877*& EA8FABEC6D125B33, ::System::Type*& ADDFB9BCCCFA0A66)
		{
			return ((::System::Void(*)(::BAD914528AA19877*&, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_FDBBBE5B560DBC60_OFFSET))(EA8FABEC6D125B33, ADDFB9BCCCFA0A66);
		}

		static ::System::String* B2ACB4020D9C4CEA()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_B2ACB4020D9C4CEA_OFFSET))();
		}

		::System::Int32 E2045FE3CF841DB7()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_E2045FE3CF841DB7_OFFSET))(this);
		}
	};
}
