#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace E6E92B21EB2C303F { class ACE54BDA151AE2DB_EB90367F00A12EDE; }
namespace System { class String; }
namespace System { class Type; }

#define E6E92B21EB2C303F_ACE54BDA151AE2DB_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x4115000)

namespace E6E92B21EB2C303F
{
	inline static constexpr unsigned int ACE54BDA151AE2DB_TypeDefinitionIndex = 16992;

	struct alignas(8) ACE54BDA151AE2DB
	{
		::System::Type* F90267B6A9827A79; // 0x10
		::Il2CppArray<::E6E92B21EB2C303F::ACE54BDA151AE2DB>* B978702B27C8E3D7; // 0x18
		::E6E92B21EB2C303F::ACE54BDA151AE2DB_EB90367F00A12EDE* ED4B1514B6E3D615; // 0x20
		::System::IntPtr E4645FB6C85160E1; // 0x28
		::System::IntPtr A277884BD5AABEBB; // 0x30

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E6E92B21EB2C303F_ACE54BDA151AE2DB_E80B9F472EEFDF74_OFFSET))(this);
		}
	};
}
