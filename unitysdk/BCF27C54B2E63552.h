#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FCC2F8EABCD6F945.h"

namespace System { class String; }

#define BCF27C54B2E63552_B14052D9C5504FE9_OFFSET UNITYSDK_OFFSET(0x3C82830)
#define BCF27C54B2E63552_BE4D2C436F2A7B14_OFFSET UNITYSDK_OFFSET(0x3C827A0)
#define BCF27C54B2E63552_EF1254BB83916179_OFFSET UNITYSDK_OFFSET(0x3C81E20)
#define BCF27C54B2E63552_FFCAEB5B098FCB13_OFFSET UNITYSDK_OFFSET(0x3C828C0)
#define BCF27C54B2E63552__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C82BB0)

inline static constexpr unsigned int BCF27C54B2E63552_TypeDefinitionIndex = 10413;

class BCF27C54B2E63552 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_E7A81D12F3B5AF74()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(BCF27C54B2E63552_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_B5BC47F6A454BCFE()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(BCF27C54B2E63552_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean BE4D2C436F2A7B14(::FCC2F8EABCD6F945<::System::Char> A16A4F19B08E04BF, ::FCC2F8EABCD6F945<::System::Char> F79B4D487F303AB2, ::System::Boolean ACBE55281F187CE7)
	{
		return ((::System::Boolean(*)(::FCC2F8EABCD6F945<::System::Char>, ::FCC2F8EABCD6F945<::System::Char>, ::System::Boolean))((::PBYTE)hIl2Cpp + BCF27C54B2E63552_BE4D2C436F2A7B14_OFFSET))(A16A4F19B08E04BF, F79B4D487F303AB2, ACBE55281F187CE7);
	}

	static ::System::Boolean EF1254BB83916179(::FCC2F8EABCD6F945<::System::Char> A16A4F19B08E04BF, ::FCC2F8EABCD6F945<::System::Char> F79B4D487F303AB2, ::System::Boolean ACBE55281F187CE7, ::System::Boolean EA10B8A135321421)
	{
		return ((::System::Boolean(*)(::FCC2F8EABCD6F945<::System::Char>, ::FCC2F8EABCD6F945<::System::Char>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCF27C54B2E63552_EF1254BB83916179_OFFSET))(A16A4F19B08E04BF, F79B4D487F303AB2, ACBE55281F187CE7, EA10B8A135321421);
	}

	static ::System::String* FFCAEB5B098FCB13(::System::String* A16A4F19B08E04BF)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCF27C54B2E63552_FFCAEB5B098FCB13_OFFSET))(A16A4F19B08E04BF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCF27C54B2E63552__CCTOR_OFFSET))();
	}

	static ::System::Boolean B14052D9C5504FE9(::FCC2F8EABCD6F945<::System::Char> A16A4F19B08E04BF, ::FCC2F8EABCD6F945<::System::Char> F79B4D487F303AB2, ::System::Boolean ACBE55281F187CE7)
	{
		return ((::System::Boolean(*)(::FCC2F8EABCD6F945<::System::Char>, ::FCC2F8EABCD6F945<::System::Char>, ::System::Boolean))((::PBYTE)hIl2Cpp + BCF27C54B2E63552_B14052D9C5504FE9_OFFSET))(A16A4F19B08E04BF, F79B4D487F303AB2, ACBE55281F187CE7);
	}
};
