#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AJIPNPMOPCO;
class GEIHCPAOKKK;
namespace MoleMole { class LaserSegments; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBKDEKHMLFF_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x15701890)
#define GBKDEKHMLFF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x156FFED0)
#define GBKDEKHMLFF_DOFIJHBHHOK_OFFSET UNITYSDK_OFFSET(0x15700150)
#define GBKDEKHMLFF_EPBJOODDHDG_OFFSET UNITYSDK_OFFSET(0x15700CE0)
#define GBKDEKHMLFF_HAFPFGLCCCE_OFFSET UNITYSDK_OFFSET(0x157008C0)
#define GBKDEKHMLFF_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x15700550)
#define GBKDEKHMLFF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15701800)
#define GBKDEKHMLFF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x157014C0)
#define GBKDEKHMLFF_UPDATE_OFFSET UNITYSDK_OFFSET(0x15700080)
#define GBKDEKHMLFF__CTOR_OFFSET UNITYSDK_OFFSET(0x157004A0)

inline static constexpr unsigned int GBKDEKHMLFF_TypeDefinitionIndex = 63090;

class GBKDEKHMLFF : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* GLPAONOPNBC; // 0x28
	::System::Action_2<::AJIPNPMOPCO*, ::GEIHCPAOKKK*>* AKEDDEOLCCJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKDEKHMLFF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_UPDATE_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void PLPONJAKNEB(::AJIPNPMOPCO* EEELOAEDGIC, ::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::PVOID, ::AJIPNPMOPCO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_PLPONJAKNEB_OFFSET))(this, EEELOAEDGIC, PFDGHBCJCNP);
	}

	::System::Void EPBJOODDHDG(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* EMHAEPCMBFN, ::UnityEngine::Vector3 CPILJNMFPJL, ::UnityEngine::Vector3 JCNEMPCJLGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_EPBJOODDHDG_OFFSET))(this, EMHAEPCMBFN, CPILJNMFPJL, JCNEMPCJLGK);
	}

	::System::Void DOFIJHBHHOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_DOFIJHBHHOK_OFFSET))(this);
	}

	::System::Void HAFPFGLCCCE(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* EMHAEPCMBFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_HAFPFGLCCCE_OFFSET))(this, EMHAEPCMBFN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKDEKHMLFF_CMFOMGGDPPA_OFFSET))(this);
	}
};
