#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnEncodedData.h"

namespace System { class String; }

#define A0CC2F7BD6262918_BFECC05AF528B91C_OFFSET UNITYSDK_OFFSET(0x3E80D90)
#define A0CC2F7BD6262918_F82C37C83B3A764B_OFFSET UNITYSDK_OFFSET(0x3E80C70)
#define A0CC2F7BD6262918__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define A0CC2F7BD6262918__CTOR_OFFSET UNITYSDK_OFFSET(0x3E80EA0)

inline static constexpr unsigned int A0CC2F7BD6262918_TypeDefinitionIndex = 14892;

class A0CC2F7BD6262918 : public ::System::Security::Cryptography::AsnEncodedData
{
public:
	::System::Boolean E3616931E8CD06F5; // 0x20

	::System::Void F82C37C83B3A764B(::System::Security::Cryptography::AsnEncodedData* ED7389D5D388B08C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + A0CC2F7BD6262918_F82C37C83B3A764B_OFFSET))(this, ED7389D5D388B08C);
	}

	::System::Void _ctor(::System::String* E91257C7E44715B6, ::Il2CppArray<::System::Byte>* FA0E11C463ABE811, ::System::Boolean FE062328BA83AAE1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0CC2F7BD6262918__CTOR_OFFSET))(this, E91257C7E44715B6, FA0E11C463ABE811, FE062328BA83AAE1);
	}

	::System::String* BFECC05AF528B91C(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A0CC2F7BD6262918_BFECC05AF528B91C_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0CC2F7BD6262918__CTOR_1_OFFSET))(this);
	}
};
