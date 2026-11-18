#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
class KEDDFGBJBPF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DIHLNIPOIFP___C_BLHGMFPFGLD_OFFSET UNITYSDK_OFFSET(0x15A47D60)
#define DIHLNIPOIFP___C_CCNPHFPONKL_OFFSET UNITYSDK_OFFSET(0x15A47D10)
#define DIHLNIPOIFP___C_GLECLFMHPAG_OFFSET UNITYSDK_OFFSET(0x15A47D30)
#define DIHLNIPOIFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A47CC0)
#define DIHLNIPOIFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47D00)

inline static constexpr unsigned int DIHLNIPOIFP___c_TypeDefinitionIndex = 90229;

class DIHLNIPOIFP___c : public ::System::Object
{
public:
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DIHLNIPOIFP___c_TypeDefinitionIndex)->GetStaticField(0x31470);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DIHLNIPOIFP___c_TypeDefinitionIndex)->GetStaticField(0x31478);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIHLNIPOIFP___c_TypeDefinitionIndex)->GetStaticField(0x31480);
	}
	static ::System::Func_2<::KEDDFGBJBPF*, ::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::KEDDFGBJBPF*, ::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*>**)Il2CppClass::FromTypeDefinitionIndex(DIHLNIPOIFP___c_TypeDefinitionIndex)->GetStaticField(0x31488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIHLNIPOIFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHLNIPOIFP___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>* CCNPHFPONKL(::KEDDFGBJBPF* KPNIHKEKDOC)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::HGIDAMPAOGK*>*(*)(::PVOID, ::KEDDFGBJBPF*))((::PBYTE)hIl2Cpp + DIHLNIPOIFP___C_CCNPHFPONKL_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Int32 GLECLFMHPAG(::HGIDAMPAOGK* MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + DIHLNIPOIFP___C_GLECLFMHPAG_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Boolean BLHGMFPFGLD(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + DIHLNIPOIFP___C_BLHGMFPFGLD_OFFSET))(this, DPGFPHIMDEL);
	}
};
