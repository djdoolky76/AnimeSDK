#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDHANMKHJBF.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/OKLBEPJCBJG.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define JEDLNCLNLEE_ACNDOCHDEGC_OFFSET UNITYSDK_OFFSET(0x7F7210)
#define JEDLNCLNLEE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0xCA9A360)
#define JEDLNCLNLEE_BMIGIHHCPNK_OFFSET UNITYSDK_OFFSET(0x7F7230)
#define JEDLNCLNLEE_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define JEDLNCLNLEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define JEDLNCLNLEE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xCA9A100)
#define JEDLNCLNLEE_EIDCEFMFFLJ_OFFSET UNITYSDK_OFFSET(0x7F7050)
#define JEDLNCLNLEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F7040)
#define JEDLNCLNLEE_FEFBENPCICM_OFFSET UNITYSDK_OFFSET(0x7F71A0)
#define JEDLNCLNLEE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xCA9A010)
#define JEDLNCLNLEE_FJBKOBHDOJH_OFFSET UNITYSDK_OFFSET(0x7F72E0)
#define JEDLNCLNLEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define JEDLNCLNLEE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define JEDLNCLNLEE_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define JEDLNCLNLEE_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define JEDLNCLNLEE_GHJJHIDGFGI_OFFSET UNITYSDK_OFFSET(0x7F71C0)
#define JEDLNCLNLEE_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x7F70E0)
#define JEDLNCLNLEE_IAPAGFOHJKB_OFFSET UNITYSDK_OFFSET(0x7F7280)
#define JEDLNCLNLEE_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define JEDLNCLNLEE_IOPIJGBHKFH_OFFSET UNITYSDK_OFFSET(0x7F7150)
#define JEDLNCLNLEE_JAKHIGKMCNP_OFFSET UNITYSDK_OFFSET(0x7F7070)
#define JEDLNCLNLEE_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x7F70C0)
#define JEDLNCLNLEE_NECNDMGKLFC_OFFSET UNITYSDK_OFFSET(0x7F72F0)
#define JEDLNCLNLEE_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0xCA9A410)
#define JEDLNCLNLEE_ODGJNANEPEB_OFFSET UNITYSDK_OFFSET(0x7F7130)
#define JEDLNCLNLEE_PJPFCEMEGBP_OFFSET UNITYSDK_OFFSET(0x7F7290)

inline static constexpr unsigned int JEDLNCLNLEE_TypeDefinitionIndex = 10671;

	struct alignas(8) JEDLNCLNLEE
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::JEDLNCLNLEE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE, ::System::Object*))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::JEDLNCLNLEE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE, ::System::Object*))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::JEDLNCLNLEE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEDLNCLNLEE))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::JEDLNCLNLEE a1)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::JEDLNCLNLEE a1)
		{
			return ((::System::Boolean(*)(::JEDLNCLNLEE))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK EIDCEFMFFLJ()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_EIDCEFMFFLJ_OFFSET))(this);
		}

		::System::Void JAKHIGKMCNP(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_JAKHIGKMCNP_OFFSET))(this, a1);
		}

		::JPCONPIKIEK MLMGEFIOION()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_HABCMACJEIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHANMKHJBF> ODGJNANEPEB()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHANMKHJBF>(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_ODGJNANEPEB_OFFSET))(this);
		}

		::System::Void IOPIJGBHKFH(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHANMKHJBF> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FDHANMKHJBF>))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_IOPIJGBHKFH_OFFSET))(this, a1);
		}

		::JPCONPIKIEK FEFBENPCICM()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_FEFBENPCICM_OFFSET))(this);
		}

		::System::Void GHJJHIDGFGI(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_GHJJHIDGFGI_OFFSET))(this, a1);
		}

		::OKLBEPJCBJG ACNDOCHDEGC()
		{
			return ((::OKLBEPJCBJG(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_ACNDOCHDEGC_OFFSET))(this);
		}

		::System::Void BMIGIHHCPNK(::OKLBEPJCBJG a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLBEPJCBJG))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_BMIGIHHCPNK_OFFSET))(this, a1);
		}

		::System::Int32 IAPAGFOHJKB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_IAPAGFOHJKB_OFFSET))(this);
		}

		::System::Void PJPFCEMEGBP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_PJPFCEMEGBP_OFFSET))(this, a1);
		}

		::System::UInt64 FJBKOBHDOJH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_FJBKOBHDOJH_OFFSET))(this);
		}

		::System::Void NECNDMGKLFC(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JEDLNCLNLEE_NECNDMGKLFC_OFFSET))(this, a1);
		}

	};
