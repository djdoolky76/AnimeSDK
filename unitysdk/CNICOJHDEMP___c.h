#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
class KEDDFGBJBPF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CNICOJHDEMP___C_CPLBELFIMEL_OFFSET UNITYSDK_OFFSET(0x16974350)
#define CNICOJHDEMP___C_DLCOLBOBLOC_OFFSET UNITYSDK_OFFSET(0x16974330)
#define CNICOJHDEMP___C_NBOIALLOHNE_OFFSET UNITYSDK_OFFSET(0x16974380)
#define CNICOJHDEMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169742E0)
#define CNICOJHDEMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16974320)

inline static constexpr unsigned int CNICOJHDEMP___c_TypeDefinitionIndex = 68327;

class CNICOJHDEMP___c : public ::System::Object
{
public:
	static ::System::Func_2<::KEDDFGBJBPF*, ::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::KEDDFGBJBPF*, ::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*>**)Il2CppClass::FromTypeDefinitionIndex(CNICOJHDEMP___c_TypeDefinitionIndex)->GetStaticField(0x45DA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CNICOJHDEMP___c_TypeDefinitionIndex)->GetStaticField(0x45DA8);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::UInt32>** StaticGet___9__42_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CNICOJHDEMP___c_TypeDefinitionIndex)->GetStaticField(0x45DB0);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>** StaticGet___9__41_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CNICOJHDEMP___c_TypeDefinitionIndex)->GetStaticField(0x45DB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNICOJHDEMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNICOJHDEMP___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>* DLCOLBOBLOC(::KEDDFGBJBPF* KPNIHKEKDOC)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*(*)(::PVOID, ::KEDDFGBJBPF*))((::PBYTE)hIl2Cpp + CNICOJHDEMP___C_DLCOLBOBLOC_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::UInt32 CPLBELFIMEL(::HGIDAMPAOGK* MOBNMDEDJIP)
	{
		return ((::System::UInt32(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + CNICOJHDEMP___C_CPLBELFIMEL_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 NBOIALLOHNE(::HGIDAMPAOGK* MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + CNICOJHDEMP___C_NBOIALLOHNE_OFFSET))(this, MOBNMDEDJIP);
	}
};
