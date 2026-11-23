#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/F804F995A42B7A78.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace System { class String; }

#define A418C49FA6A8C1F7_ECF4F9A13AE0E256_BF9B8D5023AD8C7C_OFFSET UNITYSDK_OFFSET(0x429E250)
#define A418C49FA6A8C1F7_ECF4F9A13AE0E256__CCTOR_OFFSET UNITYSDK_OFFSET(0x429E060)
#define A418C49FA6A8C1F7_ECF4F9A13AE0E256__CTOR_OFFSET UNITYSDK_OFFSET(0x429E110)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int ECF4F9A13AE0E256_TypeDefinitionIndex = 13975;

	class ECF4F9A13AE0E256 : public ::A418C49FA6A8C1F7::F804F995A42B7A78
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ECF4F9A13AE0E256_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_B461A326D552EA62()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ECF4F9A13AE0E256_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::A418C49FA6A8C1F7::B9A8F16A870DE44E* B7F1491A62D925DE; // 0x4B0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_ECF4F9A13AE0E256__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_ECF4F9A13AE0E256__CTOR_OFFSET))(this);
		}

		::A418C49FA6A8C1F7::B9A8F16A870DE44E* BF9B8D5023AD8C7C()
		{
			return ((::A418C49FA6A8C1F7::B9A8F16A870DE44E*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_ECF4F9A13AE0E256_BF9B8D5023AD8C7C_OFFSET))(this);
		}
	};
}
