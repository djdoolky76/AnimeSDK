#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define KMMGJIFCBHL_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D0867E0)
#define KMMGJIFCBHL_BCDDLBAHIKC_OFFSET UNITYSDK_OFFSET(0x3C3C3C0)
#define KMMGJIFCBHL_CGCKLGMLFGE_OFFSET UNITYSDK_OFFSET(0x3C3C430)
#define KMMGJIFCBHL_CGMBGIJNGEJ_OFFSET UNITYSDK_OFFSET(0x3C3C2A0)
#define KMMGJIFCBHL_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0x3C3C1C0)
#define KMMGJIFCBHL_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define KMMGJIFCBHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define KMMGJIFCBHL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D086580)
#define KMMGJIFCBHL_EALEDHGJKBE_OFFSET UNITYSDK_OFFSET(0x3C3C3E0)
#define KMMGJIFCBHL_EHLHNDBBKCE_OFFSET UNITYSDK_OFFSET(0x3C3C2F0)
#define KMMGJIFCBHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3C1B0)
#define KMMGJIFCBHL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D086490)
#define KMMGJIFCBHL_FNMJKOMOPKJ_OFFSET UNITYSDK_OFFSET(0x3C3C370)
#define KMMGJIFCBHL_GDKAAONEHNI_OFFSET UNITYSDK_OFFSET(0x3C3C350)
#define KMMGJIFCBHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define KMMGJIFCBHL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define KMMGJIFCBHL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define KMMGJIFCBHL_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define KMMGJIFCBHL_HFJEOOLEPIK_OFFSET UNITYSDK_OFFSET(0x3C3C220)
#define KMMGJIFCBHL_IBMKFPKPJED_OFFSET UNITYSDK_OFFSET(0x3C3C280)
#define KMMGJIFCBHL_IDCGHHPJLGF_OFFSET UNITYSDK_OFFSET(0x3C3C1D0)
#define KMMGJIFCBHL_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define KMMGJIFCBHL_KPCPPCEAMOH_OFFSET UNITYSDK_OFFSET(0x3C3C230)
#define KMMGJIFCBHL_LJKEODPEFPG_OFFSET UNITYSDK_OFFSET(0x3C3C300)
#define KMMGJIFCBHL_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D086890)
#define KMMGJIFCBHL_NNGCACOLOEJ_OFFSET UNITYSDK_OFFSET(0x3C3C450)

inline static constexpr unsigned int KMMGJIFCBHL_TypeDefinitionIndex = 10660;

	struct alignas(8) KMMGJIFCBHL
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::KMMGJIFCBHL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::KMMGJIFCBHL, ::System::Object*))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::KMMGJIFCBHL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::KMMGJIFCBHL, ::System::Object*))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::KMMGJIFCBHL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMMGJIFCBHL))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::KMMGJIFCBHL a1)
		{
			return ((::System::Boolean(*)(::KMMGJIFCBHL))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::KMMGJIFCBHL a1)
		{
			return ((::System::Boolean(*)(::KMMGJIFCBHL))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 CIMKMBDNGIK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_CIMKMBDNGIK_OFFSET))(this);
		}

		::System::Void IDCGHHPJLGF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_IDCGHHPJLGF_OFFSET))(this, a1);
		}

		::System::Single HFJEOOLEPIK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_HFJEOOLEPIK_OFFSET))(this);
		}

		::System::Void KPCPPCEAMOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_KPCPPCEAMOH_OFFSET))(this, a1);
		}

		::JPCONPIKIEK IBMKFPKPJED()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_IBMKFPKPJED_OFFSET))(this);
		}

		::System::Void CGMBGIJNGEJ(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_CGMBGIJNGEJ_OFFSET))(this, a1);
		}

		::System::Int32 EHLHNDBBKCE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_EHLHNDBBKCE_OFFSET))(this);
		}

		::System::Void LJKEODPEFPG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_LJKEODPEFPG_OFFSET))(this, a1);
		}

		::JPCONPIKIEK GDKAAONEHNI()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_GDKAAONEHNI_OFFSET))(this);
		}

		::System::Void FNMJKOMOPKJ(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_FNMJKOMOPKJ_OFFSET))(this, a1);
		}

		::BMAGJGLPIIF BCDDLBAHIKC()
		{
			return ((::BMAGJGLPIIF(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_BCDDLBAHIKC_OFFSET))(this);
		}

		::System::Void EALEDHGJKBE(::BMAGJGLPIIF a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_EALEDHGJKBE_OFFSET))(this, a1);
		}

		::BMAGJGLPIIF CGCKLGMLFGE()
		{
			return ((::BMAGJGLPIIF(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_CGCKLGMLFGE_OFFSET))(this);
		}

		::System::Void NNGCACOLOEJ(::BMAGJGLPIIF a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + KMMGJIFCBHL_NNGCACOLOEJ_OFFSET))(this, a1);
		}

	};
