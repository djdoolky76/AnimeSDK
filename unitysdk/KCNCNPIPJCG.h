#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define KCNCNPIPJCG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15152C10)
#define KCNCNPIPJCG_CBOBHFBKJPL_OFFSET UNITYSDK_OFFSET(0x15151910)
#define KCNCNPIPJCG_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15150C20)
#define KCNCNPIPJCG_METHOD_2_1_OFFSET UNITYSDK_OFFSET(0x15151070)
#define KCNCNPIPJCG_METHOD_3_2_OFFSET UNITYSDK_OFFSET(0x151514C0)
#define KCNCNPIPJCG_METHOD_6_3_OFFSET UNITYSDK_OFFSET(0x15151AD0)
#define KCNCNPIPJCG_METHOD_7_4_OFFSET UNITYSDK_OFFSET(0x15151F20)
#define KCNCNPIPJCG_METHOD_8_5_OFFSET UNITYSDK_OFFSET(0x15152370)
#define KCNCNPIPJCG_METHOD_9_6_OFFSET UNITYSDK_OFFSET(0x151527C0)
#define KCNCNPIPJCG_PMKPBHBCDPP_OFFSET UNITYSDK_OFFSET(0x15151970)
#define KCNCNPIPJCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15150C10)

inline static constexpr unsigned int KCNCNPIPJCG_TypeDefinitionIndex = 86012;

class KCNCNPIPJCG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_NJOAOOPNFPM()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(KCNCNPIPJCG_TypeDefinitionIndex)->GetStaticField(0x4E670);
	}
	static ::System::UInt32* StaticGet_MAMDFIADHHP()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(KCNCNPIPJCG_TypeDefinitionIndex)->GetStaticField(0x12750);
	}
	static ::System::UInt32* StaticGet_HMKLJLHGBJJ()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(KCNCNPIPJCG_TypeDefinitionIndex)->GetStaticField(0x12754);
	}
	static ::System::Random** StaticGet_AAIMPPBEKPF()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(KCNCNPIPJCG_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_1_OFFSET))();
	}

	static ::System::Void Method_2_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_2_1_OFFSET))();
	}

	static ::System::Void Method_3_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_3_2_OFFSET))();
	}

	static ::System::UInt32 CBOBHFBKJPL()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_CBOBHFBKJPL_OFFSET))();
	}

	static ::System::Random* PMKPBHBCDPP()
	{
		return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_PMKPBHBCDPP_OFFSET))();
	}

	static ::System::Void Method_6_3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_6_3_OFFSET))();
	}

	static ::System::Void Method_7_4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_7_4_OFFSET))();
	}

	static ::System::Void Method_8_5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_8_5_OFFSET))();
	}

	static ::System::Void Method_9_6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_METHOD_9_6_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCNCNPIPJCG_BBOMJDBNHIC_OFFSET))();
	}
};
