#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/FCA168118473D5EC.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class A5ADA49D23FB2F8E;
class B4CAF368C1122ABE;
class F6F2996B965FFA92;
class FABE496C050E9E23;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B93C8F10AE1DCB1C_B3FCF3E68D3CA980_OFFSET UNITYSDK_OFFSET(0x2248420)
#define B93C8F10AE1DCB1C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2248B80)
#define B93C8F10AE1DCB1C__CTOR_OFFSET UNITYSDK_OFFSET(0x2248AD0)

inline static constexpr unsigned int B93C8F10AE1DCB1C_TypeDefinitionIndex = 6906;

class B93C8F10AE1DCB1C : public ::System::Object
{
public:
	::E0B58AD87D1F143C::FCA168118473D5EC F115FA1EDA6D1617; // 0x10
	::System::UInt32 EDB42C4C835AAD90; // 0x14
	::FB15B066A5E7656D A81F7151FC46C7F0; // 0x18
	::System::Nullable_1<::System::UInt32> F8FB6A4E1ED518B8; // 0x20
	::System::Collections::Generic::List_1<::FABE496C050E9E23*>* AE51562306070623; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* BD38CFC3A450AFD3; // 0x30
	::System::Collections::Generic::List_1<::A5ADA49D23FB2F8E*>* A0B168C1E8B88E5D; // 0x38
	::System::Collections::Generic::List_1<::System::UInt64>* AF1255FBE7EAE8E7; // 0x40

	::System::Void _ctor(::B4CAF368C1122ABE* FEBD7420C0C06582)
	{
		return ((::System::Void(*)(::PVOID, ::B4CAF368C1122ABE*))((::PBYTE)hIl2Cpp + B93C8F10AE1DCB1C__CTOR_OFFSET))(this, FEBD7420C0C06582);
	}

	::System::Void _ctor_1(::F6F2996B965FFA92* FEBD7420C0C06582)
	{
		return ((::System::Void(*)(::PVOID, ::F6F2996B965FFA92*))((::PBYTE)hIl2Cpp + B93C8F10AE1DCB1C__CTOR_1_OFFSET))(this, FEBD7420C0C06582);
	}

	::System::Void B3FCF3E68D3CA980(::B93C8F10AE1DCB1C* FEBD7420C0C06582)
	{
		return ((::System::Void(*)(::PVOID, ::B93C8F10AE1DCB1C*))((::PBYTE)hIl2Cpp + B93C8F10AE1DCB1C_B3FCF3E68D3CA980_OFFSET))(this, FEBD7420C0C06582);
	}
};
