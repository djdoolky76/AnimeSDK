#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystem.h"
#include "unitysdk/PAMPOBIPLCE.h"

class OGJNHDLJIBM;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define FJCAJJEAJPC_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x175005A0)
#define FJCAJJEAJPC_AJBLNLJNCKG_OFFSET UNITYSDK_OFFSET(0x175007F0)
#define FJCAJJEAJPC_BIOEHNHCKJM_OFFSET UNITYSDK_OFFSET(0x17500030)
#define FJCAJJEAJPC_BNNOHGEGPEB_OFFSET UNITYSDK_OFFSET(0x174FFD80)
#define FJCAJJEAJPC_CLNKHGCCCME_OFFSET UNITYSDK_OFFSET(0x17500920)
#define FJCAJJEAJPC_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x17500890)
#define FJCAJJEAJPC_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x17500310)
#define FJCAJJEAJPC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x174FFC70)
#define FJCAJJEAJPC_EILHANNLKFD_OFFSET UNITYSDK_OFFSET(0x17500AC0)
#define FJCAJJEAJPC_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x175001D0)
#define FJCAJJEAJPC_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x175007E0)
#define FJCAJJEAJPC_FIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x175000D0)
#define FJCAJJEAJPC_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17500090)
#define FJCAJJEAJPC_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x175009B0)
#define FJCAJJEAJPC_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x17500280)
#define FJCAJJEAJPC_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x17500750)
#define FJCAJJEAJPC_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x17500110)
#define FJCAJJEAJPC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x174FFF10)
#define FJCAJJEAJPC_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x17500470)
#define FJCAJJEAJPC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17500500)
#define FJCAJJEAJPC_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x175006C0)
#define FJCAJJEAJPC_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x17500A30)
#define FJCAJJEAJPC_NJCCGKBKICE_OFFSET UNITYSDK_OFFSET(0x17500630)
#define FJCAJJEAJPC_NNNJECDELMB_OFFSET UNITYSDK_OFFSET(0x17500800)
#define FJCAJJEAJPC_ODCDHIHKBON_OFFSET UNITYSDK_OFFSET(0x17500590)
#define FJCAJJEAJPC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174FFD00)
#define FJCAJJEAJPC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x174FFFD0)
#define FJCAJJEAJPC_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17500150)
#define FJCAJJEAJPC_START_OFFSET UNITYSDK_OFFSET(0x174FFCC0)
#define FJCAJJEAJPC_UPDATE_OFFSET UNITYSDK_OFFSET(0x174FFDE0)
#define FJCAJJEAJPC_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17500190)
#define FJCAJJEAJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17500210)

inline static constexpr unsigned int FJCAJJEAJPC_TypeDefinitionIndex = 73775;

class FJCAJJEAJPC : public ::Nap::NapECS::EcsSystem
{
public:
	::System::Type* DGBMIECEEPH; // 0x20
	::Nap::NapECS::EcsWorld* _NHKFGJHNPGL_k__BackingField; // 0x28
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x30
	::Nap::NapECS::EcsFilter* _PNCHNIJPHNJ_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_LATEUPDATE_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BIOEHNHCKJM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_BIOEHNHCKJM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_FIXEDUPDATEAGAIN_OFFSET))(this);
	}

	::System::Void LateUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_LATEUPDATEAGAIN_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void BNNOHGEGPEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_BNNOHGEGPEB_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_LDCJONOBGEB_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::Nap::NapECS::EcsFilter* ODCDHIHKBON()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_ODCDHIHKBON_OFFSET))(this);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_AHDLBAAJCCC_OFFSET))(this);
	}

	::System::Void NJCCGKBKICE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_NJCCGKBKICE_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_INEGOEGIOKM_OFFSET))(this);
	}

	::Nap::NapECS::EcsWorld* EODBBODDHIL()
	{
		return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void AJBLNLJNCKG(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_AJBLNLJNCKG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NNNJECDELMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_NNNJECDELMB_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void CLNKHGCCCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_CLNKHGCCCME_OFFSET))(this);
	}

	::System::Void IEICNHEBIGL(::PAMPOBIPLCE GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_IEICNHEBIGL_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void EILHANNLKFD(::Nap::NapECS::EcsWorld* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FJCAJJEAJPC_EILHANNLKFD_OFFSET))(this, EGEGIMGMJHN);
	}
};
