#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class FEBPGLCAPDN_HMAOHABICJK;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPBOOOMBDPP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17217590)
#define DPBOOOMBDPP_EOPJGJGLMCP_OFFSET UNITYSDK_OFFSET(0x17217A90)
#define DPBOOOMBDPP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17217720)
#define DPBOOOMBDPP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17217A00)
#define DPBOOOMBDPP_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x17217970)
#define DPBOOOMBDPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x172178E0)
#define DPBOOOMBDPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17217890)

inline static constexpr unsigned int DPBOOOMBDPP_TypeDefinitionIndex = 57476;

class DPBOOOMBDPP : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_PMGIDGEIIKH()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DPBOOOMBDPP_TypeDefinitionIndex)->GetStaticField(0x43220);
	}
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBOOOMBDPP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBOOOMBDPP__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPBOOOMBDPP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBOOOMBDPP_LATEUPDATE_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBOOOMBDPP_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPBOOOMBDPP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void EOPJGJGLMCP(::FEBPGLCAPDN_HMAOHABICJK* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::FEBPGLCAPDN_HMAOHABICJK*))((::PBYTE)hIl2Cpp + DPBOOOMBDPP_EOPJGJGLMCP_OFFSET))(KPNIHKEKDOC);
	}
};
