#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E00BCE280C0DEACF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A35813048CD710CD_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x23247C0)
#define A35813048CD710CD_AE8CC1B6FAF5F401_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define A35813048CD710CD_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A35813048CD710CD_BD2224CC7690F9E1_OFFSET UNITYSDK_OFFSET(0x2324710)
#define A35813048CD710CD_E2A00B4825318766_OFFSET UNITYSDK_OFFSET(0x2324AB0)
#define A35813048CD710CD_F3620DAEC2F930B4_OFFSET UNITYSDK_OFFSET(0x2324A10)
#define A35813048CD710CD_FE03C1837036B414_OFFSET UNITYSDK_OFFSET(0x23249B0)
#define A35813048CD710CD_FEEBF324E07696AB_OFFSET UNITYSDK_OFFSET(0x2324C20)
#define A35813048CD710CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x2324B50)
#define A35813048CD710CD__CTOR_OFFSET UNITYSDK_OFFSET(0x2324BD0)

inline static constexpr unsigned int A35813048CD710CD_TypeDefinitionIndex = 2356;

class A35813048CD710CD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A35813048CD710CD*>** StaticGet_FFB79864A01172D0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A35813048CD710CD*>**)Il2CppClass::FromTypeDefinitionIndex(A35813048CD710CD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* F7B218B1D52B68EE; // 0x10
	::System::UInt32 FB3AE06BB11D760F; // 0x18

	::System::String* BA0AFB830600D2A9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A35813048CD710CD_BA0AFB830600D2A9_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A35813048CD710CD__CCTOR_OFFSET))();
	}

	static ::System::UInt32 BD2224CC7690F9E1(::System::String* E937D4885DAA1AE8, ::System::UInt32 EAE5C1E2483CA606)
	{
		return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + A35813048CD710CD_BD2224CC7690F9E1_OFFSET))(E937D4885DAA1AE8, EAE5C1E2483CA606);
	}

	::System::UInt32 F3620DAEC2F930B4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A35813048CD710CD_F3620DAEC2F930B4_OFFSET))(this);
	}

	::System::UInt32 AE8CC1B6FAF5F401()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A35813048CD710CD_AE8CC1B6FAF5F401_OFFSET))(this);
	}

	::System::String* E2A00B4825318766()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A35813048CD710CD_E2A00B4825318766_OFFSET))(this);
	}

	::System::Boolean FE03C1837036B414(::E00BCE280C0DEACF* BE2BD4C36127234B)
	{
		return ((::System::Boolean(*)(::PVOID, ::E00BCE280C0DEACF*))((::PBYTE)hIl2Cpp + A35813048CD710CD_FE03C1837036B414_OFFSET))(this, BE2BD4C36127234B);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A35813048CD710CD*>* FEEBF324E07696AB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A35813048CD710CD*>*(*)())((::PBYTE)hIl2Cpp + A35813048CD710CD_FEEBF324E07696AB_OFFSET))();
	}

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::UInt32 EAE5C1E2483CA606)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + A35813048CD710CD__CTOR_OFFSET))(this, F79B4D487F303AB2, EAE5C1E2483CA606);
	}

	static ::A35813048CD710CD* A66245FDD0182C57(::System::String* F79B4D487F303AB2, ::System::UInt32 EAE5C1E2483CA606)
	{
		return ((::A35813048CD710CD*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + A35813048CD710CD_A66245FDD0182C57_OFFSET))(F79B4D487F303AB2, EAE5C1E2483CA606);
	}
};
