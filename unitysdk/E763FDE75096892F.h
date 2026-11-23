#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBBFDED653AEA9FB;
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E763FDE75096892F_A1619D0072235802_OFFSET UNITYSDK_OFFSET(0x426F910)
#define E763FDE75096892F_B7A30BFAD6EF66A4_OFFSET UNITYSDK_OFFSET(0x426F440)
#define E763FDE75096892F_E4F4829B5F68BA64_OFFSET UNITYSDK_OFFSET(0x426FBA0)
#define E763FDE75096892F_E967E1874CADB092_OFFSET UNITYSDK_OFFSET(0x426F7B0)
#define E763FDE75096892F_F4B87C43BAA2E2EF_OFFSET UNITYSDK_OFFSET(0x426FB20)
#define E763FDE75096892F_F8C884ECB28B2DCE_OFFSET UNITYSDK_OFFSET(0x426FD00)
#define E763FDE75096892F_FC627579B81659CF_OFFSET UNITYSDK_OFFSET(0x426F5A0)
#define E763FDE75096892F__CCTOR_OFFSET UNITYSDK_OFFSET(0x426FE60)

inline static constexpr unsigned int E763FDE75096892F_TypeDefinitionIndex = 13785;

class E763FDE75096892F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::BBBFDED653AEA9FB*>** StaticGet_BC39FBE80224B523()
	{
		return (::System::Collections::Generic::List_1<::BBBFDED653AEA9FB*>**)Il2CppClass::FromTypeDefinitionIndex(E763FDE75096892F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B7A30BFAD6EF66A4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E763FDE75096892F_B7A30BFAD6EF66A4_OFFSET))();
	}

	static ::System::Void F8C884ECB28B2DCE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E763FDE75096892F_F8C884ECB28B2DCE_OFFSET))();
	}

	static ::System::Boolean A1619D0072235802(::System::Int32 FE9CAAA41DBEC223, ::System::IntPtr B68931CEC0111E6B)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + E763FDE75096892F_A1619D0072235802_OFFSET))(FE9CAAA41DBEC223, B68931CEC0111E6B);
	}

	static ::System::Boolean FC627579B81659CF(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + E763FDE75096892F_FC627579B81659CF_OFFSET))(E2B6D81F69EA0D9B);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E763FDE75096892F__CCTOR_OFFSET))();
	}

	static ::System::Void E967E1874CADB092()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E763FDE75096892F_E967E1874CADB092_OFFSET))();
	}

	static ::System::Void E4F4829B5F68BA64()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E763FDE75096892F_E4F4829B5F68BA64_OFFSET))();
	}

	static ::System::Void F4B87C43BAA2E2EF(::BBBFDED653AEA9FB* B1CF19542F266763)
	{
		return ((::System::Void(*)(::BBBFDED653AEA9FB*))((::PBYTE)hIl2Cpp + E763FDE75096892F_F4B87C43BAA2E2EF_OFFSET))(B1CF19542F266763);
	}
};
