#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/B04B724027C75F91.h"
#include "unitysdk/System/Object.h"

class A02C529E4F26A97B;
namespace System::Threading { class AD3C66B368BBC67E; }
namespace System::Threading { class ECC1454E822BC9F0; }
namespace System::Threading { class ThreadAbortException; }

#define E987655CC91A759D_A4452C7B8A0CA23A_OFFSET UNITYSDK_OFFSET(0x3C02E40)
#define E987655CC91A759D_A8E4FC41623F962E_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define E987655CC91A759D_ADA3FC776FE2F77A_OFFSET UNITYSDK_OFFSET(0x3C02D50)
#define E987655CC91A759D__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C02EC0)
#define E987655CC91A759D__CTOR_OFFSET UNITYSDK_OFFSET(0x3C02F50)

inline static constexpr unsigned int E987655CC91A759D_TypeDefinitionIndex = 11385;

class E987655CC91A759D : public ::System::Object
{
public:
	static ::System::Threading::AD3C66B368BBC67E** StaticGet_A50BAF7CA61A0AD5()
	{
		return (::System::Threading::AD3C66B368BBC67E**)Il2CppClass::FromTypeDefinitionIndex(E987655CC91A759D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Threading::ECC1454E822BC9F0* E04D2BE64FCE9814; // 0x10
	::A02C529E4F26A97B* E6CE7391633EEC68; // 0x18
	::System::Object* E5EB06E4FD2C32F7; // 0x20

	static ::System::Void A4452C7B8A0CA23A(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + E987655CC91A759D_A4452C7B8A0CA23A_OFFSET))(E5EB06E4FD2C32F7);
	}

	::System::Void ADA3FC776FE2F77A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E987655CC91A759D_ADA3FC776FE2F77A_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E987655CC91A759D__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::System::Threading::ECC1454E822BC9F0* F32843A1BF8FA5D2, ::System::Object* B08B3D0DD3A87D53, ::System::Boolean ABF442A6A4EE5C1D, ::System::Threading::B04B724027C75F91& B18E190AA66E48C0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::ECC1454E822BC9F0*, ::System::Object*, ::System::Boolean, ::System::Threading::B04B724027C75F91&))((::PBYTE)hIl2Cpp + E987655CC91A759D__CTOR_OFFSET))(this, F32843A1BF8FA5D2, B08B3D0DD3A87D53, ABF442A6A4EE5C1D, B18E190AA66E48C0);
	}

	::System::Void A8E4FC41623F962E(::System::Threading::ThreadAbortException* E1634F0E50977F5D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + E987655CC91A759D_A8E4FC41623F962E_OFFSET))(this, E1634F0E50977F5D);
	}
};
