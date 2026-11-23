#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0CC2F7BD6262918.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }

#define AA545B07A8ADF585_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x3EB2B40)
#define AA545B07A8ADF585_E40460366CCCB68F_OFFSET UNITYSDK_OFFSET(0x3EB3570)
#define AA545B07A8ADF585_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3EB2E40)
#define AA545B07A8ADF585_EAC8229B49063178_OFFSET UNITYSDK_OFFSET(0x3EB3500)
#define AA545B07A8ADF585_F82C37C83B3A764B_OFFSET UNITYSDK_OFFSET(0x3EB2960)
#define AA545B07A8ADF585_F88336941B1981EF_OFFSET UNITYSDK_OFFSET(0x3EB2CC0)
#define AA545B07A8ADF585_F924ADB00D7FE923_OFFSET UNITYSDK_OFFSET(0x3EB3490)
#define AA545B07A8ADF585__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EB33B0)
#define AA545B07A8ADF585__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3EB30A0)
#define AA545B07A8ADF585__CTOR_OFFSET UNITYSDK_OFFSET(0x3EB3320)

inline static constexpr unsigned int AA545B07A8ADF585_TypeDefinitionIndex = 15008;

class AA545B07A8ADF585 : public ::A0CC2F7BD6262918
{
public:
	::System::Boolean B96342EA69267DF3; // 0x28
	::System::Boolean EC065DE657FD708C; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 FAE0A9F88A9E5D82; // 0x2C
	::System::Security::Cryptography::AsnDecodeStatus BED1BA6EBD6FBA27; // 0x30

	::System::Int32 E40460366CCCB68F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_E40460366CCCB68F_OFFSET))(this);
	}

	::System::Boolean EAC8229B49063178()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_EAC8229B49063178_OFFSET))(this);
	}

	::System::Security::Cryptography::AsnDecodeStatus B59079FDA370300B(::Il2CppArray<::System::Byte>* B3E827B54E76CC52)
	{
		return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_B59079FDA370300B_OFFSET))(this, B3E827B54E76CC52);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA545B07A8ADF585__CTOR_OFFSET))(this);
	}

	::System::Boolean F924ADB00D7FE923()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_F924ADB00D7FE923_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* BE01219F580E90E9, ::System::Boolean FE062328BA83AAE1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + AA545B07A8ADF585__CTOR_1_OFFSET))(this, BE01219F580E90E9, FE062328BA83AAE1);
	}

	::System::Void F82C37C83B3A764B(::System::Security::Cryptography::AsnEncodedData* ED7389D5D388B08C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_F82C37C83B3A764B_OFFSET))(this, ED7389D5D388B08C);
	}

	::System::String* EA28CF291EBB2931(::System::Boolean F3C1D602A03EEC41)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_EA28CF291EBB2931_OFFSET))(this, F3C1D602A03EEC41);
	}

	::System::Void _ctor_2(::System::Boolean B0DA7593BC3F89A3, ::System::Boolean E43BE4A758E09E6D, ::System::Int32 EA5FFA625C50B9F0, ::System::Boolean FE062328BA83AAE1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AA545B07A8ADF585__CTOR_2_OFFSET))(this, B0DA7593BC3F89A3, E43BE4A758E09E6D, EA5FFA625C50B9F0, FE062328BA83AAE1);
	}

	::Il2CppArray<::System::Byte>* F88336941B1981EF()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AA545B07A8ADF585_F88336941B1981EF_OFFSET))(this);
	}
};
