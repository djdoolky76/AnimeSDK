#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACD7ABE6EE7E4675_A7E6129F74208110_OFFSET UNITYSDK_OFFSET(0x3F04D20)
#define ACD7ABE6EE7E4675_B412F1CD4AF93929_OFFSET UNITYSDK_OFFSET(0x3F04830)
#define ACD7ABE6EE7E4675_BD2AC80363749FF7_OFFSET UNITYSDK_OFFSET(0x3F04EE0)
#define ACD7ABE6EE7E4675_BFDF9EABD1418663_OFFSET UNITYSDK_OFFSET(0x3F04AF0)
#define ACD7ABE6EE7E4675_EA5D77904C19ADEF_OFFSET UNITYSDK_OFFSET(0x3F04350)
#define ACD7ABE6EE7E4675_F549FA15A0CAB6B3_OFFSET UNITYSDK_OFFSET(0x3F04980)
#define ACD7ABE6EE7E4675_FC3CD515BDE5872E_OFFSET UNITYSDK_OFFSET(0x3F045C0)
#define ACD7ABE6EE7E4675__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F04F60)

inline static constexpr unsigned int ACD7ABE6EE7E4675_TypeDefinitionIndex = 20893;

class ACD7ABE6EE7E4675 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_BD36BD5629DEF5A9()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ACD7ABE6EE7E4675_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_F3541016C7525CAC()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ACD7ABE6EE7E4675_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void A7E6129F74208110(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_A7E6129F74208110_OFFSET))(A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675__CCTOR_OFFSET))();
	}

	static ::System::String* F549FA15A0CAB6B3(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_F549FA15A0CAB6B3_OFFSET))(A5C299C395D3E1B2);
	}

	static ::System::String* BFDF9EABD1418663(::System::String* A5C299C395D3E1B2)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_BFDF9EABD1418663_OFFSET))(A5C299C395D3E1B2);
	}

	static ::System::Void BD2AC80363749FF7(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_BD2AC80363749FF7_OFFSET))(A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	static ::System::String* B412F1CD4AF93929()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_B412F1CD4AF93929_OFFSET))();
	}

	static ::System::String* FC3CD515BDE5872E(::System::String* A476BC5369AAE935)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_FC3CD515BDE5872E_OFFSET))(A476BC5369AAE935);
	}

	static ::System::String* EA5D77904C19ADEF(::System::String* E711D31754970A1B)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ACD7ABE6EE7E4675_EA5D77904C19ADEF_OFFSET))(E711D31754970A1B);
	}
};
