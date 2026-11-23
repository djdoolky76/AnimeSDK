#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class RSA; }

#define EBEE1244D3AA63BB_BEACCB0D98B80C21_OFFSET UNITYSDK_OFFSET(0x3E55C90)
#define EBEE1244D3AA63BB_EDECCC9180BF6096_OFFSET UNITYSDK_OFFSET(0x3E551A0)
#define EBEE1244D3AA63BB_F64BECD73CA17330_OFFSET UNITYSDK_OFFSET(0x3E55630)
#define EBEE1244D3AA63BB_F891F7FEEE69BD70_OFFSET UNITYSDK_OFFSET(0x3E55990)
#define EBEE1244D3AA63BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E55A40)
#define EBEE1244D3AA63BB__CTOR_OFFSET UNITYSDK_OFFSET(0x3E55AA0)

inline static constexpr unsigned int EBEE1244D3AA63BB_TypeDefinitionIndex = 14861;

class EBEE1244D3AA63BB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_BDC1E8E781853683()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(EBEE1244D3AA63BB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Security::Cryptography::AsnEncodedData* E4F7F412E95E58F4; // 0x10
	::System::Security::Cryptography::AsnEncodedData* FD43C5C9C14B662F; // 0x18
	::System::Security::Cryptography::Oid* FD9405E0BD8F3AE5; // 0x20

	::System::Security::Cryptography::AsymmetricAlgorithm* BEACCB0D98B80C21()
	{
		return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB_BEACCB0D98B80C21_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Byte>* F891F7FEEE69BD70(::Il2CppArray<::System::Byte>* F017CAF169EDD463)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB_F891F7FEEE69BD70_OFFSET))(F017CAF169EDD463);
	}

	static ::System::Security::Cryptography::RSA* F64BECD73CA17330(::Il2CppArray<::System::Byte>* B4FC8E16FB2B6CAC)
	{
		return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB_F64BECD73CA17330_OFFSET))(B4FC8E16FB2B6CAC);
	}

	::System::Void _ctor(::System::Security::Cryptography::Oid* E91257C7E44715B6, ::System::Security::Cryptography::AsnEncodedData* B652C74F012A9C5B, ::System::Security::Cryptography::AsnEncodedData* AEDC6238DC654783)
	{
		return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*, ::System::Security::Cryptography::AsnEncodedData*, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB__CTOR_OFFSET))(this, E91257C7E44715B6, B652C74F012A9C5B, AEDC6238DC654783);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB__CCTOR_OFFSET))();
	}

	static ::System::Security::Cryptography::DSA* EDECCC9180BF6096(::Il2CppArray<::System::Byte>* B4FC8E16FB2B6CAC, ::Il2CppArray<::System::Byte>* A39DF8F82CBAB26D)
	{
		return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBEE1244D3AA63BB_EDECCC9180BF6096_OFFSET))(B4FC8E16FB2B6CAC, A39DF8F82CBAB26D);
	}
};
