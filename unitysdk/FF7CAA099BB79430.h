#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/EEA6BC2D505C8C69.h"
#include "unitysdk/System/Object.h"

class A815C2B9B84A4D13;
namespace ABC::UI { class MonoUIAutoView; }
namespace ABC::UI { class MonoUIBlur; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FF7CAA099BB79430_F64738F09E80F40B_OFFSET UNITYSDK_OFFSET(0x2243880)
#define FF7CAA099BB79430_FBC9D168C3B009B5_OFFSET UNITYSDK_OFFSET(0x22431D0)
#define FF7CAA099BB79430_FE4C9E0A96E1FEAA_OFFSET UNITYSDK_OFFSET(0x2243550)
#define FF7CAA099BB79430__CCTOR_OFFSET UNITYSDK_OFFSET(0x2243C20)

inline static constexpr unsigned int FF7CAA099BB79430_TypeDefinitionIndex = 9188;

class FF7CAA099BB79430 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_F18D29A117ED5CEC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_B65EA3E41BBAB249()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Int32* StaticGet_AA7FC20E9D8841E4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet_B98CD675D913DD74()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	static ::System::Int32* StaticGet_FF2F50073186696E()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Int32* StaticGet_B835F4F952B6497C()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF7CAA099BB79430_TypeDefinitionIndex)->GetStaticField(0x14);
	}

	static ::System::Collections::Generic::List_1<::A815C2B9B84A4D13*>* F64738F09E80F40B(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Collections::Generic::List_1<::A815C2B9B84A4D13*>*(*)(::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FF7CAA099BB79430_F64738F09E80F40B_OFFSET))(E32DFA894DBD320D);
	}

	static ::B39AAAD1233537D7::EEA6BC2D505C8C69 FE4C9E0A96E1FEAA(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D, ::System::Int32& A97F131114B087FF)
	{
		return ((::B39AAAD1233537D7::EEA6BC2D505C8C69(*)(::ABC::UI::MonoUIAutoView*, ::System::Int32&))((::PBYTE)hIl2Cpp + FF7CAA099BB79430_FE4C9E0A96E1FEAA_OFFSET))(E32DFA894DBD320D, A97F131114B087FF);
	}

	static ::System::Boolean FBC9D168C3B009B5(::ABC::UI::MonoUIBlur* F59ED3CFF1A08FC3, ::System::Int32& FDB9A340669921E0)
	{
		return ((::System::Boolean(*)(::ABC::UI::MonoUIBlur*, ::System::Int32&))((::PBYTE)hIl2Cpp + FF7CAA099BB79430_FBC9D168C3B009B5_OFFSET))(F59ED3CFF1A08FC3, FDB9A340669921E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FF7CAA099BB79430__CCTOR_OFFSET))();
	}
};
