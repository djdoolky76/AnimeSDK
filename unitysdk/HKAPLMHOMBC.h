#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }

#define HKAPLMHOMBC_BDMNOAMFOPH_OFFSET UNITYSDK_OFFSET(0x14704A80)
#define HKAPLMHOMBC_CBDKICJBFAC_OFFSET UNITYSDK_OFFSET(0x14704400)
#define HKAPLMHOMBC_CCFELEMMHCA_OFFSET UNITYSDK_OFFSET(0x147051C0)
#define HKAPLMHOMBC_CLNJCOJFFGH_OFFSET UNITYSDK_OFFSET(0x14703ED0)
#define HKAPLMHOMBC_CNADAGAGMIL_OFFSET UNITYSDK_OFFSET(0x147050B0)
#define HKAPLMHOMBC_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x14704AC0)
#define HKAPLMHOMBC_HPLALFBKMJH_OFFSET UNITYSDK_OFFSET(0x147044A0)
#define HKAPLMHOMBC_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x14705100)
#define HKAPLMHOMBC_NJJGGNHMMHG_OFFSET UNITYSDK_OFFSET(0x14705300)
#define HKAPLMHOMBC_OAFDEHPDLMH_OFFSET UNITYSDK_OFFSET(0x147042B0)
#define HKAPLMHOMBC_PPICIKHBDAA_1_OFFSET UNITYSDK_OFFSET(0x14703D50)
#define HKAPLMHOMBC_PPICIKHBDAA_OFFSET UNITYSDK_OFFSET(0x14703CC0)
#define HKAPLMHOMBC__CTOR_OFFSET UNITYSDK_OFFSET(0x14703CB0)

inline static constexpr unsigned int HKAPLMHOMBC_TypeDefinitionIndex = 45491;

class HKAPLMHOMBC : public ::System::Object
{
public:
	static ::System::Diagnostics::Stopwatch** StaticGet_HLJGABJINFM()
	{
		return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(HKAPLMHOMBC_TypeDefinitionIndex)->GetStaticField(0x4E560);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Diagnostics::Stopwatch*>** StaticGet_HOCHEOBEPGI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Diagnostics::Stopwatch*>**)Il2CppClass::FromTypeDefinitionIndex(HKAPLMHOMBC_TypeDefinitionIndex)->GetStaticField(0x4E568);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAPLMHOMBC__CTOR_OFFSET))(this);
	}

	static ::System::Void PPICIKHBDAA(::System::Action* GJBHEJGENMI, ::System::Int32 JHFKDGBCOBA, ::System::String* LDLEKIBMKON, ::System::Boolean FJKFODJDPCE)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_PPICIKHBDAA_OFFSET))(GJBHEJGENMI, JHFKDGBCOBA, LDLEKIBMKON, FJKFODJDPCE);
	}

	static ::System::Void OAFDEHPDLMH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_OAFDEHPDLMH_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void CLNJCOJFFGH(::System::String* LDLEKIBMKON)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_CLNJCOJFFGH_OFFSET))(LDLEKIBMKON);
	}

	static ::System::Void EDEFLFIKNFK(::System::String* HIAIKHDFCLN, ::System::Boolean FJKFODJDPCE)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_EDEFLFIKNFK_OFFSET))(HIAIKHDFCLN, FJKFODJDPCE);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKAPLMHOMBC_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void CCFELEMMHCA(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_CCFELEMMHCA_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void HPLALFBKMJH(::System::String* HIAIKHDFCLN, ::System::String* LDLEKIBMKON, ::System::Boolean PNFMLAAKJHI)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_HPLALFBKMJH_OFFSET))(HIAIKHDFCLN, LDLEKIBMKON, PNFMLAAKJHI);
	}

	static ::System::Void PPICIKHBDAA_1(::System::Boolean FJKFODJDPCE)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_PPICIKHBDAA_1_OFFSET))(FJKFODJDPCE);
	}

	static ::System::String* CBDKICJBFAC(::System::String* HIAIKHDFCLN)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_CBDKICJBFAC_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void CNADAGAGMIL(::System::String* INPMBOAGOCP, ::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_CNADAGAGMIL_OFFSET))(INPMBOAGOCP, KOIBHLHLMFC);
	}

	static ::System::Void NJJGGNHMMHG(::System::String* AELLPLBJELA, ::System::Action* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_NJJGGNHMMHG_OFFSET))(AELLPLBJELA, DMPEOJCCCLO);
	}

	static ::System::Void BDMNOAMFOPH(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKAPLMHOMBC_BDMNOAMFOPH_OFFSET))(NAPFALLANDL);
	}
};
