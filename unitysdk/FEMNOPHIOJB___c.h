#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FEMNOPHIOJB___C_CIDPFOFFNMG_OFFSET UNITYSDK_OFFSET(0x132089B0)
#define FEMNOPHIOJB___C_HDLDPKPIIGH_OFFSET UNITYSDK_OFFSET(0x132089E0)
#define FEMNOPHIOJB___C_NAJIDBGKMNB_OFFSET UNITYSDK_OFFSET(0x13208980)
#define FEMNOPHIOJB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13208930)
#define FEMNOPHIOJB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13208970)

inline static constexpr unsigned int FEMNOPHIOJB___c_TypeDefinitionIndex = 50218;

class FEMNOPHIOJB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FEMNOPHIOJB___c_TypeDefinitionIndex)->GetStaticField(0x31910);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Int64>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FEMNOPHIOJB___c_TypeDefinitionIndex)->GetStaticField(0x31918);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FEMNOPHIOJB___c_TypeDefinitionIndex)->GetStaticField(0x31920);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FEMNOPHIOJB___c_TypeDefinitionIndex)->GetStaticField(0x31928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMNOPHIOJB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMNOPHIOJB___C__CTOR_OFFSET))(this);
	}

	::System::Int64 NAJIDBGKMNB(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Int64(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + FEMNOPHIOJB___C_NAJIDBGKMNB_OFFSET))(this, DPGFPHIMDEL);
	}

	::System::Int32 CIDPFOFFNMG(::HGIDAMPAOGK* MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + FEMNOPHIOJB___C_CIDPFOFFNMG_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Boolean HDLDPKPIIGH(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + FEMNOPHIOJB___C_HDLDPKPIIGH_OFFSET))(this, DPGFPHIMDEL);
	}
};
