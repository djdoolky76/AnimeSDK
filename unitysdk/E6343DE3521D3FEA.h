#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E6343DE3521D3FEA_A7E6129F74208110_OFFSET UNITYSDK_OFFSET(0x3A86AD0)
#define E6343DE3521D3FEA_BD2AC80363749FF7_OFFSET UNITYSDK_OFFSET(0x3A86B90)
#define E6343DE3521D3FEA_BFDF9EABD1418663_OFFSET UNITYSDK_OFFSET(0x3A86A20)
#define E6343DE3521D3FEA_E45CCC3FA4EB6460_OFFSET UNITYSDK_OFFSET(0x3A86840)
#define E6343DE3521D3FEA_E99CAD39DA1C6050_OFFSET UNITYSDK_OFFSET(0x3A864F0)
#define E6343DE3521D3FEA_EA5D77904C19ADEF_OFFSET UNITYSDK_OFFSET(0x3A86250)
#define E6343DE3521D3FEA_EADA9BEE77CA95CB_OFFSET UNITYSDK_OFFSET(0x3A86570)
#define E6343DE3521D3FEA_F549FA15A0CAB6B3_OFFSET UNITYSDK_OFFSET(0x3A868F0)
#define E6343DE3521D3FEA_F67D844E2D214631_OFFSET UNITYSDK_OFFSET(0x3A86980)
#define E6343DE3521D3FEA_FC3CD515BDE5872E_OFFSET UNITYSDK_OFFSET(0x3A86610)
#define E6343DE3521D3FEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A86C00)
#define E6343DE3521D3FEA__CTOR_OFFSET UNITYSDK_OFFSET(0x3A86D10)

inline static constexpr unsigned int E6343DE3521D3FEA_TypeDefinitionIndex = 12034;

class E6343DE3521D3FEA : public ::System::Object
{
public:
	static ::E6343DE3521D3FEA** StaticGet_EE999965A1D2099B()
	{
		return (::E6343DE3521D3FEA**)Il2CppClass::FromTypeDefinitionIndex(E6343DE3521D3FEA_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BD36BD5629DEF5A9; // 0x10
	::Il2CppArray<::System::Byte>* F3541016C7525CAC; // 0x18

	::System::Void BD2AC80363749FF7(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8, ::System::Boolean EB3785681799D310)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_BD2AC80363749FF7_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8, EB3785681799D310);
	}

	::System::Void EADA9BEE77CA95CB(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_EADA9BEE77CA95CB_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::String* E45CCC3FA4EB6460(::System::String* ECB8C0B7E13A9BD6)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_E45CCC3FA4EB6460_OFFSET))(this, ECB8C0B7E13A9BD6);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA__CTOR_OFFSET))(this);
	}

	::System::String* F549FA15A0CAB6B3(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_F549FA15A0CAB6B3_OFFSET))(this, A5C299C395D3E1B2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E6343DE3521D3FEA__CCTOR_OFFSET))();
	}

	::System::Void E99CAD39DA1C6050(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_E99CAD39DA1C6050_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::String* EA5D77904C19ADEF(::System::String* E711D31754970A1B, ::System::String* B78757F477152878)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_EA5D77904C19ADEF_OFFSET))(this, E711D31754970A1B, B78757F477152878);
	}

	::System::String* FC3CD515BDE5872E(::System::String* A476BC5369AAE935, ::System::String* B78757F477152878)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_FC3CD515BDE5872E_OFFSET))(this, A476BC5369AAE935, B78757F477152878);
	}

	::System::String* BFDF9EABD1418663(::System::String* A5C299C395D3E1B2, ::System::Boolean ADCCE91B5E92D402)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_BFDF9EABD1418663_OFFSET))(this, A5C299C395D3E1B2, ADCCE91B5E92D402);
	}

	::System::Void A7E6129F74208110(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_A7E6129F74208110_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	::System::String* F67D844E2D214631(::System::String* A5C299C395D3E1B2, ::System::String* B664CED9F1723827)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E6343DE3521D3FEA_F67D844E2D214631_OFFSET))(this, A5C299C395D3E1B2, B664CED9F1723827);
	}
};
