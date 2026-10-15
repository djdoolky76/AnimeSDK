#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define HHCKBNMKFAI_AOFPPFNHFLK_OFFSET UNITYSDK_OFFSET(0x3C398F0)
#define HHCKBNMKFAI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CEA8EB0)
#define HHCKBNMKFAI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define HHCKBNMKFAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define HHCKBNMKFAI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CEA8D80)
#define HHCKBNMKFAI_DNEKNLFCJCN_OFFSET UNITYSDK_OFFSET(0x3C39900)
#define HHCKBNMKFAI_EFJCHCBMOKD_OFFSET UNITYSDK_OFFSET(0x3C39950)
#define HHCKBNMKFAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C398E0)
#define HHCKBNMKFAI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CEA8C70)
#define HHCKBNMKFAI_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x3C399C0)
#define HHCKBNMKFAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define HHCKBNMKFAI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define HHCKBNMKFAI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define HHCKBNMKFAI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define HHCKBNMKFAI_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3C399B0)
#define HHCKBNMKFAI_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define HHCKBNMKFAI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CEA8F60)
#define HHCKBNMKFAI_OOGKECBIKHC_OFFSET UNITYSDK_OFFSET(0x3C39960)

	struct alignas(8) HHCKBNMKFAI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::HHCKBNMKFAI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HHCKBNMKFAI, ::System::Object*))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::HHCKBNMKFAI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HHCKBNMKFAI, ::System::Object*))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::HHCKBNMKFAI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHCKBNMKFAI))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::HHCKBNMKFAI a1)
		{
			return ((::System::Boolean(*)(::HHCKBNMKFAI))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::HHCKBNMKFAI a1)
		{
			return ((::System::Boolean(*)(::HHCKBNMKFAI))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt64 AOFPPFNHFLK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_AOFPPFNHFLK_OFFSET))(this);
		}

		::System::Void DNEKNLFCJCN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_DNEKNLFCJCN_OFFSET))(this, a1);
		}

		::System::UInt32 EFJCHCBMOKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_EFJCHCBMOKD_OFFSET))(this);
		}

		::System::Void OOGKECBIKHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_OOGKECBIKHC_OFFSET))(this, a1);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHCKBNMKFAI_FKHABBFPGFA_OFFSET))(this, a1);
		}

	};
