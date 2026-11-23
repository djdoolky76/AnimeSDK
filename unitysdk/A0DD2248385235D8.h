#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8B11FF5D1DF1B0F;
class FF1237522147A967;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A0DD2248385235D8_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3AD1CC0)
#define A0DD2248385235D8_ACF1EA5462DF35A5_OFFSET UNITYSDK_OFFSET(0x3AD10D0)
#define A0DD2248385235D8_B22E5F28F9C1E70B_OFFSET UNITYSDK_OFFSET(0x3AD2BB0)
#define A0DD2248385235D8_B32E343981193E2B_OFFSET UNITYSDK_OFFSET(0x3AD14B0)
#define A0DD2248385235D8_B5D074C4B2E8F24C_OFFSET UNITYSDK_OFFSET(0x3AD0400)
#define A0DD2248385235D8_BD67E5EEEA2E6081_OFFSET UNITYSDK_OFFSET(0x3AD2D70)
#define A0DD2248385235D8_BECB37FFD2751B44_1_OFFSET UNITYSDK_OFFSET(0x3AD2F00)
#define A0DD2248385235D8_BECB37FFD2751B44_OFFSET UNITYSDK_OFFSET(0x3AD3020)
#define A0DD2248385235D8_E2EE0F577915B884_OFFSET UNITYSDK_OFFSET(0x3AD2A20)
#define A0DD2248385235D8_E86190870AA641FA_OFFSET UNITYSDK_OFFSET(0x3AD08C0)
#define A0DD2248385235D8_EAB7D3F8C25A1113_OFFSET UNITYSDK_OFFSET(0x3AD2740)
#define A0DD2248385235D8_EB57AEDF25AEF07A_OFFSET UNITYSDK_OFFSET(0x3AD1540)
#define A0DD2248385235D8_F16AE44A42E8D608_OFFSET UNITYSDK_OFFSET(0x3AD0470)
#define A0DD2248385235D8_F46CF9CB5F038285_OFFSET UNITYSDK_OFFSET(0x3AD0320)
#define A0DD2248385235D8_F53A2FD804EF82FB_OFFSET UNITYSDK_OFFSET(0x3AD0990)
#define A0DD2248385235D8_FBFEDBD787806278_OFFSET UNITYSDK_OFFSET(0x3AD06C0)
#define A0DD2248385235D8_FCFAF096E66E38FF_OFFSET UNITYSDK_OFFSET(0x3AD22E0)
#define A0DD2248385235D8_FFA3B0E977A50AAE_OFFSET UNITYSDK_OFFSET(0x3AD2490)
#define A0DD2248385235D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AD3440)
#define A0DD2248385235D8__CTOR_OFFSET UNITYSDK_OFFSET(0x3AD3550)

inline static constexpr unsigned int A0DD2248385235D8_TypeDefinitionIndex = 12199;

class A0DD2248385235D8 : public ::System::Object
{
public:
	static ::A0DD2248385235D8** StaticGet_EE999965A1D2099B()
	{
		return (::A0DD2248385235D8**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_A99F9B719E600480()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::F8B11FF5D1DF1B0F* B4C3FD29B21CB43E; // 0x10
	::System::Boolean E013CDD6D8B977EF; // 0x18

	::System::Void FBFEDBD787806278(::System::String* B818DC27A4B3B150)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_FBFEDBD787806278_OFFSET))(this, B818DC27A4B3B150);
	}

	::System::Boolean B32E343981193E2B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_B32E343981193E2B_OFFSET))(this);
	}

	::System::Void ACF1EA5462DF35A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_ACF1EA5462DF35A5_OFFSET))(this);
	}

	::System::Boolean F16AE44A42E8D608()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F16AE44A42E8D608_OFFSET))(this);
	}

	::System::Void EAB7D3F8C25A1113(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* B6018BB9F7294B44, ::System::String* F4678C67D6347E6C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_EAB7D3F8C25A1113_OFFSET))(this, E04D2BE64FCE9814, B6018BB9F7294B44, F4678C67D6347E6C);
	}

	static ::System::Void FCFAF096E66E38FF(::System::Int32 FEC8DC0392823C8D, ::System::String* B6018BB9F7294B44, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::FF1237522147A967* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_FCFAF096E66E38FF_OFFSET))(FEC8DC0392823C8D, B6018BB9F7294B44, E04D2BE64FCE9814, F220A2D27F7C6B6C);
	}

	::System::Void BD67E5EEEA2E6081(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* F937AFADF857C1DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BD67E5EEEA2E6081_OFFSET))(this, E04D2BE64FCE9814, F937AFADF857C1DB);
	}

	::System::Void FFA3B0E977A50AAE(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* F4678C67D6347E6C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_FFA3B0E977A50AAE_OFFSET))(this, E04D2BE64FCE9814, F4678C67D6347E6C);
	}

	static ::System::Boolean B5D074C4B2E8F24C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A0DD2248385235D8_B5D074C4B2E8F24C_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DD2248385235D8__CCTOR_OFFSET))();
	}

	::System::Void B22E5F28F9C1E70B(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* B6018BB9F7294B44, ::System::String* F937AFADF857C1DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_B22E5F28F9C1E70B_OFFSET))(this, E04D2BE64FCE9814, B6018BB9F7294B44, F937AFADF857C1DB);
	}

	::System::Void F46CF9CB5F038285()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F46CF9CB5F038285_OFFSET))(this);
	}

	::System::Void BECB37FFD2751B44(::FF1237522147A967* F423C01E632FCED3, ::System::String* F937AFADF857C1DB, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::FF1237522147A967*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BECB37FFD2751B44_OFFSET))(this, F423C01E632FCED3, F937AFADF857C1DB, E04D2BE64FCE9814);
	}

	::System::Void BECB37FFD2751B44_1(::System::String* F1BF0FE85E9DD584, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BECB37FFD2751B44_1_OFFSET))(this, F1BF0FE85E9DD584, E04D2BE64FCE9814);
	}

	::System::Boolean E86190870AA641FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_E86190870AA641FA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8__CTOR_OFFSET))(this);
	}

	::System::Boolean A1E97155B145443C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_A1E97155B145443C_OFFSET))(this);
	}

	static ::System::Void F53A2FD804EF82FB(::System::String* BF71E8A841DD560B, ::System::String* BD2C65BCCC92F212, ::System::String* B47E50E86770E6E4, ::System::String* EF21F7C0AC4F879F, ::System::String* EAE5C1E2483CA606, ::System::String* B9AD68262157E9E0, ::System::String* BC99EBC195ABD9A0, ::System::String* A69C27F49F5C2559, ::System::String* BA377D5FD52A8051, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F53A2FD804EF82FB_OFFSET))(BF71E8A841DD560B, BD2C65BCCC92F212, B47E50E86770E6E4, EF21F7C0AC4F879F, EAE5C1E2483CA606, B9AD68262157E9E0, BC99EBC195ABD9A0, A69C27F49F5C2559, BA377D5FD52A8051, E04D2BE64FCE9814);
	}

	::System::Void EB57AEDF25AEF07A(::System::String* F1BF0FE85E9DD584, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_EB57AEDF25AEF07A_OFFSET))(this, F1BF0FE85E9DD584, E04D2BE64FCE9814);
	}

	::System::Void E2EE0F577915B884(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* F937AFADF857C1DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_E2EE0F577915B884_OFFSET))(this, E04D2BE64FCE9814, F937AFADF857C1DB);
	}
};
