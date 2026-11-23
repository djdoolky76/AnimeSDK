#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0CC2F7BD6262918.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class OidCollection; }

#define E1EB0CCD24235103_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x3EB6A70)
#define E1EB0CCD24235103_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3EB6D20)
#define E1EB0CCD24235103_F82C37C83B3A764B_OFFSET UNITYSDK_OFFSET(0x3EB6890)
#define E1EB0CCD24235103_F88336941B1981EF_OFFSET UNITYSDK_OFFSET(0x3EB6C50)
#define E1EB0CCD24235103__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EB7070)
#define E1EB0CCD24235103__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3EB7150)
#define E1EB0CCD24235103__CTOR_OFFSET UNITYSDK_OFFSET(0x3EB6FE0)

inline static constexpr unsigned int E1EB0CCD24235103_TypeDefinitionIndex = 15024;

class E1EB0CCD24235103 : public ::A0CC2F7BD6262918
{
public:
	::System::Security::Cryptography::OidCollection* AAD84B498394E4E0; // 0x28
	::System::Security::Cryptography::AsnDecodeStatus BED1BA6EBD6FBA27; // 0x30

	::Il2CppArray<::System::Byte>* F88336941B1981EF()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E1EB0CCD24235103_F88336941B1981EF_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931(::System::Boolean F3C1D602A03EEC41)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E1EB0CCD24235103_EA28CF291EBB2931_OFFSET))(this, F3C1D602A03EEC41);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1EB0CCD24235103__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* B48648ABECE7F5B2, ::System::Boolean FE062328BA83AAE1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + E1EB0CCD24235103__CTOR_1_OFFSET))(this, B48648ABECE7F5B2, FE062328BA83AAE1);
	}

	::System::Security::Cryptography::AsnDecodeStatus B59079FDA370300B(::Il2CppArray<::System::Byte>* B3E827B54E76CC52)
	{
		return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + E1EB0CCD24235103_B59079FDA370300B_OFFSET))(this, B3E827B54E76CC52);
	}

	::System::Void _ctor_2(::System::Security::Cryptography::OidCollection* B130FC78A16A7B01, ::System::Boolean FE062328BA83AAE1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::OidCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + E1EB0CCD24235103__CTOR_2_OFFSET))(this, B130FC78A16A7B01, FE062328BA83AAE1);
	}

	::System::Void F82C37C83B3A764B(::System::Security::Cryptography::AsnEncodedData* ED7389D5D388B08C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + E1EB0CCD24235103_F82C37C83B3A764B_OFFSET))(this, ED7389D5D388B08C);
	}
};
