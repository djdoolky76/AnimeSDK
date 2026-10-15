#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPCONPIKIEK.h"
class BJBDLDCDDJH;
class LELCKJPOPAO;
namespace System { class Object; }

#define BJBDLDCDDJH_AKPPFMPDBIO_OFFSET UNITYSDK_OFFSET(0x1D7DF370)
#define BJBDLDCDDJH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D7DE530)
#define BJBDLDCDDJH_BJIGDAALLHC_OFFSET UNITYSDK_OFFSET(0x1D7DEA00)
#define BJBDLDCDDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DF710)
#define BJBDLDCDDJH_DBLKIFNMHDF_OFFSET UNITYSDK_OFFSET(0x1D7DEE00)
#define BJBDLDCDDJH_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1D7DE340)
#define BJBDLDCDDJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7DE170)
#define BJBDLDCDDJH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D7DE330)
#define BJBDLDCDDJH_DLNFHNDPLDI_OFFSET UNITYSDK_OFFSET(0x1D7DF540)
#define BJBDLDCDDJH_ELAJLDJHHNJ_OFFSET UNITYSDK_OFFSET(0x1D7DF150)
#define BJBDLDCDDJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7DE400)
#define BJBDLDCDDJH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D7DE180)
#define BJBDLDCDDJH_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0x1D7DE6B0)
#define BJBDLDCDDJH_GCOONOPINLG_OFFSET UNITYSDK_OFFSET(0x1D7DF4F0)
#define BJBDLDCDDJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7DE510)
#define BJBDLDCDDJH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D7DE0A0)
#define BJBDLDCDDJH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D7DE150)
#define BJBDLDCDDJH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D7DE160)
#define BJBDLDCDDJH_GGKACDDOJIG_OFFSET UNITYSDK_OFFSET(0x1D7DEF80)
#define BJBDLDCDDJH_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1D7DEBE0)
#define BJBDLDCDDJH_HCFOFCEPPEO_OFFSET UNITYSDK_OFFSET(0x1D7DF320)
#define BJBDLDCDDJH_IFEJEBOOCPL_OFFSET UNITYSDK_OFFSET(0x1D7DF1A0)
#define BJBDLDCDDJH_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0x1D7DE820)
#define BJBDLDCDDJH_INIT_OFFSET UNITYSDK_OFFSET(0x1D7DE090)
#define BJBDLDCDDJH_IOKLLBPGFJM_OFFSET UNITYSDK_OFFSET(0x1D7DE870)
#define BJBDLDCDDJH_KFDIPBBFOOE_OFFSET UNITYSDK_OFFSET(0x1D7DEC30)
#define BJBDLDCDDJH_KHJDGLDDGJF_OFFSET UNITYSDK_OFFSET(0x1D7DF6C0)
#define BJBDLDCDDJH_LNPKEFPPIGN_OFFSET UNITYSDK_OFFSET(0x1D7DEDB0)
#define BJBDLDCDDJH_MBMAKFCPLBP_OFFSET UNITYSDK_OFFSET(0x1D7DEFD0)
#define BJBDLDCDDJH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1D7DEA50)
#define BJBDLDCDDJH_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D7DE5F0)

inline static constexpr unsigned int BJBDLDCDDJH_TypeDefinitionIndex = 10649;

	class BJBDLDCDDJH : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::BJBDLDCDDJH* a1, ::BJBDLDCDDJH* a2)
		{
			return ((::System::Boolean(*)(::BJBDLDCDDJH*, ::BJBDLDCDDJH*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::BJBDLDCDDJH* a1, ::BJBDLDCDDJH* a2)
		{
			return ((::System::Boolean(*)(::BJBDLDCDDJH*, ::BJBDLDCDDJH*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::BJBDLDCDDJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJBDLDCDDJH*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::BJBDLDCDDJH* a1)
		{
			return ((::System::Boolean(*)(::BJBDLDCDDJH*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::BJBDLDCDDJH* a1)
		{
			return ((::System::Boolean(*)(::BJBDLDCDDJH*))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_NHCFLDCDLCP_OFFSET))(a1);
		}

		::System::Int32 FGICNJPNNCB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_FGICNJPNNCB_OFFSET))(this);
		}

		::System::Void IJCHBCGOIII(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_IJCHBCGOIII_OFFSET))(this, a1);
		}

		::JPCONPIKIEK IOKLLBPGFJM()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_IOKLLBPGFJM_OFFSET))(this);
		}

		::System::Void BJIGDAALLHC(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_BJIGDAALLHC_OFFSET))(this, a1);
		}

		::JPCONPIKIEK MLMGEFIOION()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::Single KFDIPBBFOOE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_KFDIPBBFOOE_OFFSET))(this);
		}

		::System::Void LNPKEFPPIGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_LNPKEFPPIGN_OFFSET))(this, a1);
		}

		::System::Single DBLKIFNMHDF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_DBLKIFNMHDF_OFFSET))(this);
		}

		::System::Void GGKACDDOJIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GGKACDDOJIG_OFFSET))(this, a1);
		}

		::System::Single MBMAKFCPLBP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_MBMAKFCPLBP_OFFSET))(this);
		}

		::System::Void ELAJLDJHHNJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_ELAJLDJHHNJ_OFFSET))(this, a1);
		}

		::System::Single IFEJEBOOCPL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_IFEJEBOOCPL_OFFSET))(this);
		}

		::System::Void HCFOFCEPPEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_HCFOFCEPPEO_OFFSET))(this, a1);
		}

		::System::Single AKPPFMPDBIO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_AKPPFMPDBIO_OFFSET))(this);
		}

		::System::Void GCOONOPINLG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_GCOONOPINLG_OFFSET))(this, a1);
		}

		::System::Single DLNFHNDPLDI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_DLNFHNDPLDI_OFFSET))(this);
		}

		::System::Void KHJDGLDDGJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJBDLDCDDJH_KHJDGLDDGJF_OFFSET))(this, a1);
		}

	};
