#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE399E8C446747BE_BA359093BD202C6D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A0DED0BBB9766DB2_A706ACAAFCAA5CC8_OFFSET UNITYSDK_OFFSET(0x28F45D0)
#define A0DED0BBB9766DB2_AF39FF5BFBABD991_OFFSET UNITYSDK_OFFSET(0x28F4A70)
#define A0DED0BBB9766DB2_AF9E9C8EBC01ADB0_OFFSET UNITYSDK_OFFSET(0x28F4160)
#define A0DED0BBB9766DB2_EFA33BC76CB45ADE_OFFSET UNITYSDK_OFFSET(0x28F4010)
#define A0DED0BBB9766DB2_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x28F4750)
#define A0DED0BBB9766DB2_F2546B2A7BF9CA33_OFFSET UNITYSDK_OFFSET(0x28F48C0)
#define A0DED0BBB9766DB2_F5F7109A2D4D8D63_OFFSET UNITYSDK_OFFSET(0x28F4380)
#define A0DED0BBB9766DB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x28F4B40)

inline static constexpr unsigned int A0DED0BBB9766DB2_TypeDefinitionIndex = 19795;

class A0DED0BBB9766DB2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_B69C1EE3F03A40DC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A0DED0BBB9766DB2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_B01C9199C63CCEC3()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A0DED0BBB9766DB2_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void AF39FF5BFBABD991()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_AF39FF5BFBABD991_OFFSET))();
	}

	static ::System::Void A706ACAAFCAA5CC8(::System::Boolean A3C14B6CB8BAE8B1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_A706ACAAFCAA5CC8_OFFSET))(A3C14B6CB8BAE8B1);
	}

	static ::System::Void F2546B2A7BF9CA33(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_F2546B2A7BF9CA33_OFFSET))(F79B4D487F303AB2);
	}

	static ::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_F0D2AFBD3CAE7F65_OFFSET))();
	}

	static ::System::Void EFA33BC76CB45ADE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_EFA33BC76CB45ADE_OFFSET))();
	}

	static ::System::Void F5F7109A2D4D8D63(::System::String* F79B4D487F303AB2, ::System::Boolean A8E6F06B0E7FAAFF, ::System::Boolean E98D33F03E1DC1F0)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_F5F7109A2D4D8D63_OFFSET))(F79B4D487F303AB2, A8E6F06B0E7FAAFF, E98D33F03E1DC1F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2__CCTOR_OFFSET))();
	}

	static ::System::Void AF9E9C8EBC01ADB0(::System::String* F79B4D487F303AB2, ::FE399E8C446747BE_BA359093BD202C6D* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::System::String*, ::FE399E8C446747BE_BA359093BD202C6D*))((::PBYTE)hIl2Cpp + A0DED0BBB9766DB2_AF9E9C8EBC01ADB0_OFFSET))(F79B4D487F303AB2, E04D2BE64FCE9814);
	}
};
