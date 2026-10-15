#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define DIDANIMFIEC_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CD25580)
#define DIDANIMFIEC_BIHIPBDGIOJ_OFFSET UNITYSDK_OFFSET(0x3C36890)
#define DIDANIMFIEC_CEOFPCKLOAD_OFFSET UNITYSDK_OFFSET(0x3C368A0)
#define DIDANIMFIEC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define DIDANIMFIEC_DICPLJJBAGA_OFFSET UNITYSDK_OFFSET(0x3C36840)
#define DIDANIMFIEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define DIDANIMFIEC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CD25450)
#define DIDANIMFIEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36810)
#define DIDANIMFIEC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CD25340)
#define DIDANIMFIEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define DIDANIMFIEC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define DIDANIMFIEC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DIDANIMFIEC_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DIDANIMFIEC_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define DIDANIMFIEC_JNCNGPMMDAG_OFFSET UNITYSDK_OFFSET(0x3C36820)
#define DIDANIMFIEC_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CD25630)

	struct alignas(8) DIDANIMFIEC
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DIDANIMFIEC_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::DIDANIMFIEC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DIDANIMFIEC, ::System::Object*))((::PBYTE)hIl2Cpp + DIDANIMFIEC_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::DIDANIMFIEC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DIDANIMFIEC, ::System::Object*))((::PBYTE)hIl2Cpp + DIDANIMFIEC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::DIDANIMFIEC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIDANIMFIEC))((::PBYTE)hIl2Cpp + DIDANIMFIEC_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIDANIMFIEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::DIDANIMFIEC a1)
		{
			return ((::System::Boolean(*)(::DIDANIMFIEC))((::PBYTE)hIl2Cpp + DIDANIMFIEC_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::DIDANIMFIEC a1)
		{
			return ((::System::Boolean(*)(::DIDANIMFIEC))((::PBYTE)hIl2Cpp + DIDANIMFIEC_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK JNCNGPMMDAG()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_JNCNGPMMDAG_OFFSET))(this);
		}

		::System::Void DICPLJJBAGA(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + DIDANIMFIEC_DICPLJJBAGA_OFFSET))(this, a1);
		}

		::System::Int32 BIHIPBDGIOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDANIMFIEC_BIHIPBDGIOJ_OFFSET))(this);
		}

		::System::Void CEOFPCKLOAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIDANIMFIEC_CEOFPCKLOAD_OFFSET))(this, a1);
		}

	};
