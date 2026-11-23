#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0714AE33BB464DD.h"
#include "unitysdk/AD1DCA62AA4A4312.h"
#include "unitysdk/BA90DFC92B3EFC5F.h"
#include "unitysdk/System/ValueType.h"

class EC4DE502D90A864B;
namespace System::Security::Cryptography { class CryptoStream; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B58DE8ACD288C2BD_A24002EAA8F1539A_OFFSET UNITYSDK_OFFSET(0x3CA6420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B58DE8ACD288C2BD_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3CA4FE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_B58DE8ACD288C2BD_TypeDefinitionIndex = 11698;

	struct alignas(8) CryptoStream_B58DE8ACD288C2BD
	{
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::A0714AE33BB464DD A1CA1C79468DC000; // 0x18
		::System::Int32 A70E5C58B2C7A692; // 0x30
		::System::Int32 BE9B161B3F3C2937; // 0x34
		::System::Security::Cryptography::CryptoStream* A544919C800E2923; // 0x38
		::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915; // 0x40
		::System::Boolean F53508307F9EE22F; // 0x48
		::System::Byte _padding1[0x7];
		::BA90DFC92B3EFC5F B22B108A2E686F3C; // 0x50
		::System::Int32 BE8DFB9078443B53; // 0x58
		::System::Int32 BE9A74E8B299432E; // 0x5C
		::System::Int32 E72861A1FBE2701A; // 0x60
		::System::Byte _padding2[0x4];
		::AD1DCA62AA4A4312 A109FC4638F13DC1; // 0x68
		::System::Int32 B05D49F45090CA68; // 0x78
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Byte>* E66C2E5D7F9D228E; // 0x80

		::System::Void E6CAD58306FCDCB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B58DE8ACD288C2BD_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Void A24002EAA8F1539A(::EC4DE502D90A864B* FF331EB1F030063C)
		{
			return ((::System::Void(*)(::PVOID, ::EC4DE502D90A864B*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B58DE8ACD288C2BD_A24002EAA8F1539A_OFFSET))(this, FF331EB1F030063C);
		}
	};
}
