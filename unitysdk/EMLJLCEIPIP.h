#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDNLGHNHLAA.h"
#include "unitysdk/PONEGOPCLPF.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EMLJLCEIPIP_EBLIFADEDEI_OFFSET UNITYSDK_OFFSET(0x16160B30)
#define EMLJLCEIPIP_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x16161940)
#define EMLJLCEIPIP_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x16160B80)
#define EMLJLCEIPIP_KFIOLEPJEGK_OFFSET UNITYSDK_OFFSET(0x16161980)
#define EMLJLCEIPIP_LOINNFILFCA_OFFSET UNITYSDK_OFFSET(0x161618C0)
#define EMLJLCEIPIP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16160AC0)
#define EMLJLCEIPIP_NKLKPJGEELL_OFFSET UNITYSDK_OFFSET(0x16160A60)
#define EMLJLCEIPIP_PIOHNFNNDDL_OFFSET UNITYSDK_OFFSET(0x16161A10)
#define EMLJLCEIPIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16160F00)
#define EMLJLCEIPIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16160E80)

inline static constexpr unsigned int EMLJLCEIPIP_TypeDefinitionIndex = 92973;

class EMLJLCEIPIP : public ::CDNLGHNHLAA
{
public:
	static ::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>*>** StaticGet_FPHIOFOOJIH()
	{
		return (::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>*>**)Il2CppClass::FromTypeDefinitionIndex(EMLJLCEIPIP_TypeDefinitionIndex)->GetStaticField(0x49AD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>** StaticGet_KOMIALLPJCK()
	{
		return (::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EMLJLCEIPIP_TypeDefinitionIndex)->GetStaticField(0x49AD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>*>** StaticGet_DCKJFPJFGMM()
	{
		return (::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Collections::Generic::HashSet_1<::PONEGOPCLPF>*>**)Il2CppClass::FromTypeDefinitionIndex(EMLJLCEIPIP_TypeDefinitionIndex)->GetStaticField(0x49AE0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLJLCEIPIP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLJLCEIPIP__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>* NKLKPJGEELL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_NKLKPJGEELL_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::PONEGOPCLPF FFKBEGIHIGG, ::PONEGOPCLPF CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::PONEGOPCLPF EBLIFADEDEI()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_EBLIFADEDEI_OFFSET))(this);
	}

	::System::Boolean JINCFIGEAKM(::PONEGOPCLPF JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_JINCFIGEAKM_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void LOINNFILFCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_LOINNFILFCA_OFFSET))(this);
	}

	::System::Boolean GFFPMEMNPDJ(::PONEGOPCLPF MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}

	::PONEGOPCLPF KFIOLEPJEGK()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_KFIOLEPJEGK_OFFSET))(this);
	}

	::System::Int32 PIOHNFNNDDL(::PONEGOPCLPF MIALFKCCCPI, ::PONEGOPCLPF KMGKAIDEIBA)
	{
		return ((::System::Int32(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + EMLJLCEIPIP_PIOHNFNNDDL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
