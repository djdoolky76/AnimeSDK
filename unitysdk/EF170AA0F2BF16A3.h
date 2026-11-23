#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class A45A5DE709317DE4;
class EA7C4DC66B71CFF9;
class EF170AA0F2BF16A3_EB16FAA5A8E36E47;
namespace System { class String; }
namespace System::Collections { class F2375D706F5829C9; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define EF170AA0F2BF16A3_AE3703ECBF79D433_OFFSET UNITYSDK_OFFSET(0x3B2C070)
#define EF170AA0F2BF16A3_B0B7BABB96BB8E30_OFFSET UNITYSDK_OFFSET(0x3B2B0D0)
#define EF170AA0F2BF16A3_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3B2AD80)
#define EF170AA0F2BF16A3_EBE9973CD3C6A156_1_OFFSET UNITYSDK_OFFSET(0x3B2AEA0)
#define EF170AA0F2BF16A3_EBE9973CD3C6A156_OFFSET UNITYSDK_OFFSET(0x3B2AE10)
#define EF170AA0F2BF16A3_F8FDC04AE1B568E0_1_OFFSET UNITYSDK_OFFSET(0x3B2B8E0)
#define EF170AA0F2BF16A3_F8FDC04AE1B568E0_2_OFFSET UNITYSDK_OFFSET(0x3B2BB90)
#define EF170AA0F2BF16A3_F8FDC04AE1B568E0_OFFSET UNITYSDK_OFFSET(0x3B2BC70)
#define EF170AA0F2BF16A3__CTOR_OFFSET UNITYSDK_OFFSET(0x3B2BF50)

inline static constexpr unsigned int EF170AA0F2BF16A3_TypeDefinitionIndex = 19287;

class EF170AA0F2BF16A3 : public ::System::Object
{
public:
	::System::String* FBC5404D5C3FCFD3; // 0x10
	::System::Byte EBDD08B044E6BE63; // 0x18
	::System::Byte _padding0[0x7];
	::System::DateTime EDCECC65B65C46BF; // 0x20
	::System::DateTime F8765168FE7CBDDE; // 0x28
	::System::Collections::F2375D706F5829C9* E396F0188B0F3F8C; // 0x30
	::System::String* E07FFFCF20E05ECC; // 0x38
	::Il2CppArray<::System::Byte>* ADA902CFC22F5C58; // 0x40
	::EA7C4DC66B71CFF9* FED13341E46244FB; // 0x48
	::Il2CppArray<::System::Byte>* E44D3DD97EC357BC; // 0x50
	::Il2CppArray<::System::Byte>* E2953912B83C9A6D; // 0x58

	::System::Boolean F8FDC04AE1B568E0(::System::Security::Cryptography::DSA* F5B6A6069EF2F419)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_F8FDC04AE1B568E0_OFFSET))(this, F5B6A6069EF2F419);
	}

	::System::Boolean BCB0A4DD6EA3B4C9(::Il2CppArray<::System::Byte>* A4F1E8AE2EAC885C, ::Il2CppArray<::System::Byte>* F0DD69B27EFAB788)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_BCB0A4DD6EA3B4C9_OFFSET))(this, A4F1E8AE2EAC885C, F0DD69B27EFAB788);
	}

	::System::Void _ctor(::Il2CppArray<::System::Byte>* B592A83762265474)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3__CTOR_OFFSET))(this, B592A83762265474);
	}

	::EF170AA0F2BF16A3_EB16FAA5A8E36E47* EBE9973CD3C6A156(::A45A5DE709317DE4* BA091C1F38805C34)
	{
		return ((::EF170AA0F2BF16A3_EB16FAA5A8E36E47*(*)(::PVOID, ::A45A5DE709317DE4*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_EBE9973CD3C6A156_OFFSET))(this, BA091C1F38805C34);
	}

	::System::Boolean F8FDC04AE1B568E0_1(::System::Security::Cryptography::AsymmetricAlgorithm* FEC68050E227BB2C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_F8FDC04AE1B568E0_1_OFFSET))(this, FEC68050E227BB2C);
	}

	::EF170AA0F2BF16A3_EB16FAA5A8E36E47* EBE9973CD3C6A156_1(::Il2CppArray<::System::Byte>* B12A82B79CAA68B7)
	{
		return ((::EF170AA0F2BF16A3_EB16FAA5A8E36E47*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_EBE9973CD3C6A156_1_OFFSET))(this, B12A82B79CAA68B7);
	}

	::Il2CppArray<::System::Byte>* AE3703ECBF79D433()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_AE3703ECBF79D433_OFFSET))(this);
	}

	::System::Boolean F8FDC04AE1B568E0_2(::System::Security::Cryptography::RSA* FC17E705F01EA4DC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_F8FDC04AE1B568E0_2_OFFSET))(this, FC17E705F01EA4DC);
	}

	::System::Void B0B7BABB96BB8E30(::Il2CppArray<::System::Byte>* B592A83762265474)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EF170AA0F2BF16A3_B0B7BABB96BB8E30_OFFSET))(this, B592A83762265474);
	}
};
