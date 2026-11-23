#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA90DFC92B3EFC5F.h"
#include "unitysdk/BFB1791D3A615944.h"
#include "unitysdk/FBD2892000366FFC.h"
#include "unitysdk/System/ValueType.h"

class EC4DE502D90A864B;
namespace System::Security::Cryptography { class CryptoStream; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B0298B0DD1EDA37B_A24002EAA8F1539A_OFFSET UNITYSDK_OFFSET(0x3CA4870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B0298B0DD1EDA37B_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3CA38B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_B0298B0DD1EDA37B_TypeDefinitionIndex = 11696;

	struct alignas(8) CryptoStream_B0298B0DD1EDA37B
	{
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::FBD2892000366FFC<::System::Int32> A1CA1C79468DC000; // 0x18
		::System::Byte _padding1[0x10];
		::System::Int32 A70E5C58B2C7A692; // 0x30
		::System::Int32 BE9B161B3F3C2937; // 0x34
		::System::Security::Cryptography::CryptoStream* A544919C800E2923; // 0x38
		::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915; // 0x40
		::System::Boolean F53508307F9EE22F; // 0x48
		::System::Byte _padding2[0x7];
		::BA90DFC92B3EFC5F B22B108A2E686F3C; // 0x50
		::System::Int32 A16C1ADB019445B4; // 0x58
		::System::Int32 B6EFDED2E602920F; // 0x5C
		::System::Int32 BA8CB0CE3C59FAC7; // 0x60
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Byte>* E897201362457A45; // 0x68
		::Il2CppArray<::System::Byte>* E66C2E5D7F9D228E; // 0x70
		::BFB1791D3A615944<::System::Int32> A109FC4638F13DC1; // 0x78

		::System::Void E6CAD58306FCDCB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B0298B0DD1EDA37B_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Void A24002EAA8F1539A(::EC4DE502D90A864B* FF331EB1F030063C)
		{
			return ((::System::Void(*)(::PVOID, ::EC4DE502D90A864B*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B0298B0DD1EDA37B_A24002EAA8F1539A_OFFSET))(this, FF331EB1F030063C);
		}
	};
}
