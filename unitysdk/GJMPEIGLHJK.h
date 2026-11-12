#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABAGMFKDCLG.h"
#include "unitysdk/INBCAKDBHHE.h"
#include "unitysdk/OANLHANJEII.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/RPG/GameCore/LevelEntityBakedInfo.h"
#include "unitysdk/RPG/GameCore/LevelNPCBakedInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GJMPEIGLHJK_AFBCPIDABCO_OFFSET UNITYSDK_OFFSET(0x3E88710)
#define GJMPEIGLHJK_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E033630)
#define GJMPEIGLHJK_BFIGJEBKAMO_OFFSET UNITYSDK_OFFSET(0x3E883A0)
#define GJMPEIGLHJK_BKBNDOGLLHM_OFFSET UNITYSDK_OFFSET(0x3E88780)
#define GJMPEIGLHJK_CFIMMAAIHHH_OFFSET UNITYSDK_OFFSET(0x3E885E0)
#define GJMPEIGLHJK_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define GJMPEIGLHJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define GJMPEIGLHJK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E0333D0)
#define GJMPEIGLHJK_EPEJKIMMKBB_OFFSET UNITYSDK_OFFSET(0x3E88650)
#define GJMPEIGLHJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E88390)
#define GJMPEIGLHJK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E0332E0)
#define GJMPEIGLHJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define GJMPEIGLHJK_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define GJMPEIGLHJK_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GJMPEIGLHJK_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GJMPEIGLHJK_GHILGCBIHEE_OFFSET UNITYSDK_OFFSET(0x3E88480)
#define GJMPEIGLHJK_HNHJPGOPBMA_OFFSET UNITYSDK_OFFSET(0x3E88860)
#define GJMPEIGLHJK_HOAEJAIHJFC_OFFSET UNITYSDK_OFFSET(0x3E88630)
#define GJMPEIGLHJK_HPKILPMEKCA_OFFSET UNITYSDK_OFFSET(0x3E883C0)
#define GJMPEIGLHJK_IEBAKANFFOE_OFFSET UNITYSDK_OFFSET(0x3E887A0)
#define GJMPEIGLHJK_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define GJMPEIGLHJK_IPGGNIHJBCB_OFFSET UNITYSDK_OFFSET(0x3E88730)
#define GJMPEIGLHJK_KDAIMAHMMEN_OFFSET UNITYSDK_OFFSET(0x3E887F0)
#define GJMPEIGLHJK_KJALPJDIOMO_OFFSET UNITYSDK_OFFSET(0x3E884F0)
#define GJMPEIGLHJK_KOHLDKJJAOA_OFFSET UNITYSDK_OFFSET(0x3E886A0)
#define GJMPEIGLHJK_LCGKLDFLFAM_OFFSET UNITYSDK_OFFSET(0x3E88880)
#define GJMPEIGLHJK_LFKFHNNOLLN_OFFSET UNITYSDK_OFFSET(0x3E88570)
#define GJMPEIGLHJK_LMIKIAMKMMP_OFFSET UNITYSDK_OFFSET(0x3E88430)
#define GJMPEIGLHJK_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x3E88560)
#define GJMPEIGLHJK_MJJAOKHLCJJ_OFFSET UNITYSDK_OFFSET(0x3E88810)
#define GJMPEIGLHJK_NAGEAJFIOJM_OFFSET UNITYSDK_OFFSET(0x3E884A0)
#define GJMPEIGLHJK_NCOKBLLDAIL_OFFSET UNITYSDK_OFFSET(0x3E88410)
#define GJMPEIGLHJK_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E0336E0)
#define GJMPEIGLHJK_NILAALOGGDL_OFFSET UNITYSDK_OFFSET(0x3E88510)
#define GJMPEIGLHJK_PKCNPJMKHHP_OFFSET UNITYSDK_OFFSET(0x3E886C0)
#define GJMPEIGLHJK_PNDOLKGIOJG_OFFSET UNITYSDK_OFFSET(0x3E885C0)

inline static constexpr unsigned int GJMPEIGLHJK_TypeDefinitionIndex = 10729;

	struct alignas(8) GJMPEIGLHJK
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GJMPEIGLHJK a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GJMPEIGLHJK, ::System::Object*))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GJMPEIGLHJK a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GJMPEIGLHJK, ::System::Object*))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GJMPEIGLHJK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJMPEIGLHJK))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GJMPEIGLHJK a1)
		{
			return ((::System::Boolean(*)(::GJMPEIGLHJK))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GJMPEIGLHJK a1)
		{
			return ((::System::Boolean(*)(::GJMPEIGLHJK))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> BFIGJEBKAMO()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_BFIGJEBKAMO_OFFSET))(this);
		}

		::System::Void HPKILPMEKCA(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_HPKILPMEKCA_OFFSET))(this, a1);
		}

		::OANLHANJEII NCOKBLLDAIL()
		{
			return ((::OANLHANJEII(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_NCOKBLLDAIL_OFFSET))(this);
		}

		::System::Void LMIKIAMKMMP(::OANLHANJEII a1)
		{
			return ((::System::Void(*)(::PVOID, ::OANLHANJEII))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_LMIKIAMKMMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::ABAGMFKDCLG> GHILGCBIHEE()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::ABAGMFKDCLG>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_GHILGCBIHEE_OFFSET))(this);
		}

		::System::Void NAGEAJFIOJM(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::ABAGMFKDCLG> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::ABAGMFKDCLG>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_NAGEAJFIOJM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> KJALPJDIOMO()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_KJALPJDIOMO_OFFSET))(this);
		}

		::System::Void NILAALOGGDL(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_NILAALOGGDL_OFFSET))(this, a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Void LFKFHNNOLLN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_LFKFHNNOLLN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> PNDOLKGIOJG()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_PNDOLKGIOJG_OFFSET))(this);
		}

		::System::Void CFIMMAAIHHH(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_CFIMMAAIHHH_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNPCBakedInfo> HOAEJAIHJFC()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNPCBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_HOAEJAIHJFC_OFFSET))(this);
		}

		::System::Void EPEJKIMMKBB(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNPCBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNPCBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_EPEJKIMMKBB_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> KOHLDKJJAOA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_KOHLDKJJAOA_OFFSET))(this);
		}

		::System::Void PKCNPJMKHHP(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_PKCNPJMKHHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::INBCAKDBHHE> AFBCPIDABCO()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::INBCAKDBHHE>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_AFBCPIDABCO_OFFSET))(this);
		}

		::System::Void IPGGNIHJBCB(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::INBCAKDBHHE> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::INBCAKDBHHE>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_IPGGNIHJBCB_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> BKBNDOGLLHM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_BKBNDOGLLHM_OFFSET))(this);
		}

		::System::Void IEBAKANFFOE(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_IEBAKANFFOE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> KDAIMAHMMEN()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_KDAIMAHMMEN_OFFSET))(this);
		}

		::System::Void MJJAOKHLCJJ(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_MJJAOKHLCJJ_OFFSET))(this, a1);
		}

		::OANLHANJEII HNHJPGOPBMA()
		{
			return ((::OANLHANJEII(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_HNHJPGOPBMA_OFFSET))(this);
		}

		::System::Void LCGKLDFLFAM(::OANLHANJEII a1)
		{
			return ((::System::Void(*)(::PVOID, ::OANLHANJEII))((::PBYTE)hIl2Cpp + GJMPEIGLHJK_LCGKLDFLFAM_OFFSET))(this, a1);
		}

	};
