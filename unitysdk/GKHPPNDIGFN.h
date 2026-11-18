#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class MPKNAJFMBLA;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define GKHPPNDIGFN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15F25690)
#define GKHPPNDIGFN_GKGEIBBMPDO_OFFSET UNITYSDK_OFFSET(0x15F25A00)
#define GKHPPNDIGFN_JBNHAAHAOFE_OFFSET UNITYSDK_OFFSET(0x15F25AE0)
#define GKHPPNDIGFN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15F25840)
#define GKHPPNDIGFN_LFMEGDKBILB_OFFSET UNITYSDK_OFFSET(0x15F25BC0)
#define GKHPPNDIGFN_MCMCAJGFEBO_OFFSET UNITYSDK_OFFSET(0x15F262D0)
#define GKHPPNDIGFN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15F26370)
#define GKHPPNDIGFN_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x15F26240)
#define GKHPPNDIGFN_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x15F25B70)
#define GKHPPNDIGFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F259B0)

inline static constexpr unsigned int GKHPPNDIGFN_TypeDefinitionIndex = 78378;

class GKHPPNDIGFN : public ::OAOOLPCNHKA
{
public:
	// static const ::System::String* NKINIIGKFAB; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHPPNDIGFN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_LATEUPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 GKGEIBBMPDO(::UnityEngine::Vector3 HAAEBCOBKFF, ::UnityEngine::Vector3 LMLPPLMKLFL, ::System::Single DMJCDNMNFMB, ::System::Single PBCAAADNEPK)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_GKGEIBBMPDO_OFFSET))(HAAEBCOBKFF, LMLPPLMKLFL, DMJCDNMNFMB, PBCAAADNEPK);
	}

	static ::System::Void JBNHAAHAOFE(::MPKNAJFMBLA* HOKLICGCBPA, ::UnityEngine::Vector3 DMILOGLGDEN, ::System::ValueTuple_2<::System::Single, ::System::Single> LCCCJNLHCAC)
	{
		return ((::System::Void(*)(::MPKNAJFMBLA*, ::UnityEngine::Vector3, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_JBNHAAHAOFE_OFFSET))(HOKLICGCBPA, DMILOGLGDEN, LCCCJNLHCAC);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void LFMEGDKBILB(::GEIHCPAOKKK* OHPJHPEOFLD, ::MPKNAJFMBLA* HOKLICGCBPA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MPKNAJFMBLA*, ::System::Single))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_LFMEGDKBILB_OFFSET))(OHPJHPEOFLD, HOKLICGCBPA, PMNLNNGEIFM);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void MCMCAJGFEBO(::MPKNAJFMBLA* HOKLICGCBPA, ::System::ValueTuple_2<::System::Single, ::System::Single> LCCCJNLHCAC)
	{
		return ((::System::Void(*)(::MPKNAJFMBLA*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_MCMCAJGFEBO_OFFSET))(HOKLICGCBPA, LCCCJNLHCAC);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GKHPPNDIGFN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
