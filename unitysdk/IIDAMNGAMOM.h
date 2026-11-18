#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class CEIGLAMCELC;
class GEIHCPAOKKK;
class GJOGLDHJJNP;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIDAMNGAMOM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x160AB000)
#define IIDAMNGAMOM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x160AA4E0)
#define IIDAMNGAMOM_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x160AAFB0)
#define IIDAMNGAMOM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x160AAF20)
#define IIDAMNGAMOM_OFOJMBBHNCF_OFFSET UNITYSDK_OFFSET(0x160AA7B0)
#define IIDAMNGAMOM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x160AB090)
#define IIDAMNGAMOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x160AA6F0)
#define IIDAMNGAMOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x160AAEB0)
#define IIDAMNGAMOM__CTOR_OFFSET UNITYSDK_OFFSET(0x160AAE60)

inline static constexpr unsigned int IIDAMNGAMOM_TypeDefinitionIndex = 85726;

class IIDAMNGAMOM : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GKOCPGIFHLJ()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IIDAMNGAMOM_TypeDefinitionIndex)->GetStaticField(0x4E590);
	}
	static ::System::Action_3<::GJOGLDHJJNP*, ::CEIGLAMCELC*, ::GEIHCPAOKKK*>** StaticGet_LFJDAMIGHDA()
	{
		return (::System::Action_3<::GJOGLDHJJNP*, ::CEIGLAMCELC*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(IIDAMNGAMOM_TypeDefinitionIndex)->GetStaticField(0x4E598);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDAMNGAMOM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIDAMNGAMOM__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_UPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void PLPONJAKNEB(::GJOGLDHJJNP* MLIENFCPCHN, ::CEIGLAMCELC* OJCMELAIFJE, ::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::GJOGLDHJJNP*, ::CEIGLAMCELC*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + IIDAMNGAMOM_PLPONJAKNEB_OFFSET))(MLIENFCPCHN, OJCMELAIFJE, PFDGHBCJCNP);
	}

	static ::System::Void OFOJMBBHNCF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIDAMNGAMOM_OFOJMBBHNCF_OFFSET))();
	}
};
