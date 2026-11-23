#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class String; }

#define A418C49FA6A8C1F7_A92BE81B29732678_A6FEECD7E6E4FE67_OFFSET UNITYSDK_OFFSET(0x42CC990)
#define A418C49FA6A8C1F7_A92BE81B29732678__CCTOR_OFFSET UNITYSDK_OFFSET(0x42CD160)
#define A418C49FA6A8C1F7_A92BE81B29732678__CTOR_1_OFFSET UNITYSDK_OFFSET(0x42CD260)
#define A418C49FA6A8C1F7_A92BE81B29732678__CTOR_OFFSET UNITYSDK_OFFSET(0x42CD390)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int A92BE81B29732678_TypeDefinitionIndex = 14143;

	class A92BE81B29732678
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A92BE81B29732678_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_ACB80A9F3534E9E2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A92BE81B29732678_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::String** StaticGet_E8B9DE1F82FF1EDC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A92BE81B29732678_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		::System::Void _ctor(::System::String* F0C60DB62AA3F5E0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A92BE81B29732678__CTOR_OFFSET))(this, F0C60DB62AA3F5E0);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A92BE81B29732678__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A92BE81B29732678__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Object*>* A6FEECD7E6E4FE67()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A92BE81B29732678_A6FEECD7E6E4FE67_OFFSET))(this);
		}
	};
}
