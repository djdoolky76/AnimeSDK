#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/OKLBEPJCBJG.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define JEDLNCLNLEE_ACNDOCHDEGC_OFFSET UNITYSDK_OFFSET(0x3C3AD20)
#define JEDLNCLNLEE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D01B750)
#define JEDLNCLNLEE_BMIGIHHCPNK_OFFSET UNITYSDK_OFFSET(0x3C3AD40)
#define JEDLNCLNLEE_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define JEDLNCLNLEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define JEDLNCLNLEE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D01B620)
#define JEDLNCLNLEE_EIDCEFMFFLJ_OFFSET UNITYSDK_OFFSET(0x3C3ABD0)
#define JEDLNCLNLEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3ABC0)
#define JEDLNCLNLEE_FEFBENPCICM_OFFSET UNITYSDK_OFFSET(0x3C3ACB0)
#define JEDLNCLNLEE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D01B510)
#define JEDLNCLNLEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define JEDLNCLNLEE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define JEDLNCLNLEE_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define JEDLNCLNLEE_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define JEDLNCLNLEE_GHJJHIDGFGI_OFFSET UNITYSDK_OFFSET(0x3C3ACD0)
#define JEDLNCLNLEE_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x3C3AC60)
#define JEDLNCLNLEE_IAPAGFOHJKB_OFFSET UNITYSDK_OFFSET(0x3C3AD90)
#define JEDLNCLNLEE_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define JEDLNCLNLEE_JAKHIGKMCNP_OFFSET UNITYSDK_OFFSET(0x3C3ABF0)
#define JEDLNCLNLEE_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x3C3AC40)
#define JEDLNCLNLEE_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D01B800)
#define JEDLNCLNLEE_PJPFCEMEGBP_OFFSET UNITYSDK_OFFSET(0x3C3ADA0)

inline static constexpr unsigned int JEDLNCLNLEE_TypeDefinitionIndex = 10655;

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

	};
