#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIDANIMFIEC.h"
#include "unitysdk/EAKBGHBOKIG.h"
#include "unitysdk/FDHAEHHIKDL.h"
#include "unitysdk/HCCMNPPNCIL.h"
#include "unitysdk/KJIHPGIHKFK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define IDOHKCEJPJP_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CEB8FC0)
#define IDOHKCEJPJP_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define IDOHKCEJPJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define IDOHKCEJPJP_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CEB8E90)
#define IDOHKCEJPJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3A6D0)
#define IDOHKCEJPJP_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CEB8D80)
#define IDOHKCEJPJP_FHFLPOIECIB_OFFSET UNITYSDK_OFFSET(0x3C3A850)
#define IDOHKCEJPJP_FIMLADIEBCE_OFFSET UNITYSDK_OFFSET(0x3C3A8C0)
#define IDOHKCEJPJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define IDOHKCEJPJP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define IDOHKCEJPJP_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define IDOHKCEJPJP_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define IDOHKCEJPJP_HHAOPMOMNFO_OFFSET UNITYSDK_OFFSET(0x3C3A830)
#define IDOHKCEJPJP_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define IDOHKCEJPJP_KDLPKOPFMPL_OFFSET UNITYSDK_OFFSET(0x3C3A770)
#define IDOHKCEJPJP_LBDGHJDBPKM_OFFSET UNITYSDK_OFFSET(0x3C3A700)
#define IDOHKCEJPJP_MPJFKBMLPEK_OFFSET UNITYSDK_OFFSET(0x3C3A6E0)
#define IDOHKCEJPJP_NEMPHCJIIGI_OFFSET UNITYSDK_OFFSET(0x3C3A8A0)
#define IDOHKCEJPJP_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CEB9070)
#define IDOHKCEJPJP_OEEBEHAPIPD_OFFSET UNITYSDK_OFFSET(0x3C3A7E0)
#define IDOHKCEJPJP_PBGHLMEDMBA_OFFSET UNITYSDK_OFFSET(0x3C3A7C0)
#define IDOHKCEJPJP_POEGANGJCPG_OFFSET UNITYSDK_OFFSET(0x3C3A750)

inline static constexpr unsigned int IDOHKCEJPJP_TypeDefinitionIndex = 10669;

	struct alignas(8) IDOHKCEJPJP
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::IDOHKCEJPJP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::IDOHKCEJPJP, ::System::Object*))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::IDOHKCEJPJP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::IDOHKCEJPJP, ::System::Object*))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::IDOHKCEJPJP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::IDOHKCEJPJP a1)
		{
			return ((::System::Boolean(*)(::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::IDOHKCEJPJP a1)
		{
			return ((::System::Boolean(*)(::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::HCCMNPPNCIL> MPJFKBMLPEK()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::HCCMNPPNCIL>(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_MPJFKBMLPEK_OFFSET))(this);
		}

		::System::Void LBDGHJDBPKM(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::HCCMNPPNCIL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::HCCMNPPNCIL>))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_LBDGHJDBPKM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DIDANIMFIEC> POEGANGJCPG()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DIDANIMFIEC>(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_POEGANGJCPG_OFFSET))(this);
		}

		::System::Void KDLPKOPFMPL(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DIDANIMFIEC> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DIDANIMFIEC>))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_KDLPKOPFMPL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KJIHPGIHKFK> PBGHLMEDMBA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KJIHPGIHKFK>(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_PBGHLMEDMBA_OFFSET))(this);
		}

		::System::Void OEEBEHAPIPD(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KJIHPGIHKFK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KJIHPGIHKFK>))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_OEEBEHAPIPD_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EAKBGHBOKIG> HHAOPMOMNFO()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EAKBGHBOKIG>(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_HHAOPMOMNFO_OFFSET))(this);
		}

		::System::Void FHFLPOIECIB(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EAKBGHBOKIG> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EAKBGHBOKIG>))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_FHFLPOIECIB_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHAEHHIKDL> NEMPHCJIIGI()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHAEHHIKDL>(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_NEMPHCJIIGI_OFFSET))(this);
		}

		::System::Void FIMLADIEBCE(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHAEHHIKDL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHAEHHIKDL>))((::PBYTE)hIl2Cpp + IDOHKCEJPJP_FIMLADIEBCE_OFFSET))(this, a1);
		}

	};
