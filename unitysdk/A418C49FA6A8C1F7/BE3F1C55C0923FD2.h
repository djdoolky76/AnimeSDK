#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace System { class String; }

#define A418C49FA6A8C1F7_BE3F1C55C0923FD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x42CE7F0)
#define A418C49FA6A8C1F7_BE3F1C55C0923FD2__CTOR_OFFSET UNITYSDK_OFFSET(0x42CE850)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int BE3F1C55C0923FD2_TypeDefinitionIndex = 13252;

	class BE3F1C55C0923FD2 : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BE3F1C55C0923FD2_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BE3F1C55C0923FD2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BE3F1C55C0923FD2__CCTOR_OFFSET))();
		}
	};
}
