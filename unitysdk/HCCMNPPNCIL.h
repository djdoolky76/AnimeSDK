#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define HCCMNPPNCIL_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE5D5E0)
#define HCCMNPPNCIL_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define HCCMNPPNCIL_DICPLJJBAGA_OFFSET UNITYSDK_OFFSET(0x3C39F40)
#define HCCMNPPNCIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define HCCMNPPNCIL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE5D4B0)
#define HCCMNPPNCIL_DOANMLKOCMK_OFFSET UNITYSDK_OFFSET(0x3C39FA0)
#define HCCMNPPNCIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C39F10)
#define HCCMNPPNCIL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE5D3A0)
#define HCCMNPPNCIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define HCCMNPPNCIL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define HCCMNPPNCIL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define HCCMNPPNCIL_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define HCCMNPPNCIL_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define HCCMNPPNCIL_JNCNGPMMDAG_OFFSET UNITYSDK_OFFSET(0x3C39F20)
#define HCCMNPPNCIL_KOCKKEIPIDM_OFFSET UNITYSDK_OFFSET(0x3C39F90)
#define HCCMNPPNCIL_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE5D690)

inline static constexpr unsigned int HCCMNPPNCIL_TypeDefinitionIndex = 10663;

	struct alignas(8) HCCMNPPNCIL
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::HCCMNPPNCIL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HCCMNPPNCIL, ::System::Object*))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::HCCMNPPNCIL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HCCMNPPNCIL, ::System::Object*))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::HCCMNPPNCIL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCCMNPPNCIL))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::HCCMNPPNCIL a1)
		{
			return ((::System::Boolean(*)(::HCCMNPPNCIL))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::HCCMNPPNCIL a1)
		{
			return ((::System::Boolean(*)(::HCCMNPPNCIL))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK JNCNGPMMDAG()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_JNCNGPMMDAG_OFFSET))(this);
		}

		::System::Void DICPLJJBAGA(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_DICPLJJBAGA_OFFSET))(this, a1);
		}

		::System::Single KOCKKEIPIDM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_KOCKKEIPIDM_OFFSET))(this);
		}

		::System::Void DOANMLKOCMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCCMNPPNCIL_DOANMLKOCMK_OFFSET))(this, a1);
		}

	};
