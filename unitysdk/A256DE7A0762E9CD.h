#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/F4E164DE63E7AD99.h"

class BA764B4A67FFE28D;
namespace ABC::View { class MonoView; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class E3021CCD72F165E3;

#define A256DE7A0762E9CD_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x241EE10)
#define A256DE7A0762E9CD_B970F1A168A49F23_OFFSET UNITYSDK_OFFSET(0x241E6A0)
#define A256DE7A0762E9CD_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x241F1B0)
#define A256DE7A0762E9CD_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x241F240)
#define A256DE7A0762E9CD_F7879A34D1F0F9E1_OFFSET UNITYSDK_OFFSET(0x241F320)
#define A256DE7A0762E9CD_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x241DF00)
#define A256DE7A0762E9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x241F2D0)

inline static constexpr unsigned int A256DE7A0762E9CD_TypeDefinitionIndex = 4192;

class A256DE7A0762E9CD : public ::F4E164DE63E7AD99
{
public:
	static ::A256DE7A0762E9CD** StaticGet_F2EC524D6D748B5F()
	{
		return (::A256DE7A0762E9CD**)Il2CppClass::FromTypeDefinitionIndex(A256DE7A0762E9CD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::E3021CCD72F165E3<::BA764B4A67FFE28D*>* BDD438F81C55331C; // 0x50
	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Collections::Generic::Dictionary_2<::ABC::View::MonoView*, ::BA764B4A67FFE28D*>*>* E4645DD27BAE18D0; // 0x58
	::System::Collections::Generic::List_1<::BA764B4A67FFE28D*>* A35A26DF923B6A52; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_FCC7443573DD0222_OFFSET))(this);
	}

	static ::A256DE7A0762E9CD* F7879A34D1F0F9E1()
	{
		return ((::A256DE7A0762E9CD*(*)())((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_F7879A34D1F0F9E1_OFFSET))();
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_F148CB80B7853B2B_OFFSET))(this);
	}

	::System::Void B970F1A168A49F23(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_B970F1A168A49F23_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_E721874F8CEF553A_OFFSET))(this);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A256DE7A0762E9CD_A1E97155B145443C_OFFSET))(this);
	}
};
