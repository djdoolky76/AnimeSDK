#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define IBKDKKCOMCL_ALLAIGKBCEB_OFFSET UNITYSDK_OFFSET(0x16098D80)
#define IBKDKKCOMCL_BOLCLGDEEJJ_OFFSET UNITYSDK_OFFSET(0x16099350)
#define IBKDKKCOMCL_DDNILFHNMMA_OFFSET UNITYSDK_OFFSET(0x16098470)
#define IBKDKKCOMCL_DNKNPFIIAMN_OFFSET UNITYSDK_OFFSET(0x160982E0)
#define IBKDKKCOMCL_EJNEAJAAHHK_OFFSET UNITYSDK_OFFSET(0x160991B0)
#define IBKDKKCOMCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16097C30)
#define IBKDKKCOMCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16097BA0)
#define IBKDKKCOMCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160995D0)
#define IBKDKKCOMCL_GNMGKGLONBL_OFFSET UNITYSDK_OFFSET(0x16098970)
#define IBKDKKCOMCL_OIFDDNHCBDC_OFFSET UNITYSDK_OFFSET(0x16098FC0)
#define IBKDKKCOMCL__CTOR_OFFSET UNITYSDK_OFFSET(0x16098F20)

inline static constexpr unsigned int IBKDKKCOMCL_TypeDefinitionIndex = 77657;

class IBKDKKCOMCL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* HIBMBIEJKMJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDKKCOMCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void OIFDDNHCBDC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::System::String*>* NIAFEHMEANN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_OIFDDNHCBDC_OFFSET))(KECKGDFIALJ, NIAFEHMEANN);
	}

	::System::Void GNMGKGLONBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_GNMGKGLONBL_OFFSET))(this);
	}

	static ::System::Void EJNEAJAAHHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKDKKCOMCL_EJNEAJAAHHK_OFFSET))();
	}

	static ::System::Void ALLAIGKBCEB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKDKKCOMCL_ALLAIGKBCEB_OFFSET))();
	}

	static ::System::Void DNKNPFIIAMN(::System::Collections::Generic::List_1<::System::String*>* NIAFEHMEANN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_DNKNPFIIAMN_OFFSET))(NIAFEHMEANN);
	}

	static ::System::Void BOLCLGDEEJJ(::System::Collections::Generic::List_1<::System::Int32>* MEHCADFPJFP)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_BOLCLGDEEJJ_OFFSET))(MEHCADFPJFP);
	}

	static ::System::Void DDNILFHNMMA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKDKKCOMCL_DDNILFHNMMA_OFFSET))();
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_GDEOPIBNOIN_OFFSET))(this);
	}
};
