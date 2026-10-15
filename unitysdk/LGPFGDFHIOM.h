#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMELLFNBBDH.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define LGPFGDFHIOM_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D0EEB10)
#define LGPFGDFHIOM_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define LGPFGDFHIOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define LGPFGDFHIOM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D0EE8B0)
#define LGPFGDFHIOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3CB10)
#define LGPFGDFHIOM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D0EE7C0)
#define LGPFGDFHIOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define LGPFGDFHIOM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define LGPFGDFHIOM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define LGPFGDFHIOM_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define LGPFGDFHIOM_IDLPBKDFBIG_OFFSET UNITYSDK_OFFSET(0x3C3CB20)
#define LGPFGDFHIOM_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define LGPFGDFHIOM_KDNEJKGDECC_OFFSET UNITYSDK_OFFSET(0x3C3CB40)
#define LGPFGDFHIOM_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D0EEBC0)

inline static constexpr unsigned int LGPFGDFHIOM_TypeDefinitionIndex = 10670;

	struct alignas(8) LGPFGDFHIOM
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::LGPFGDFHIOM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::LGPFGDFHIOM, ::System::Object*))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::LGPFGDFHIOM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::LGPFGDFHIOM, ::System::Object*))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::LGPFGDFHIOM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::LGPFGDFHIOM a1)
		{
			return ((::System::Boolean(*)(::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::LGPFGDFHIOM a1)
		{
			return ((::System::Boolean(*)(::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMELLFNBBDH> IDLPBKDFBIG()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMELLFNBBDH>(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_IDLPBKDFBIG_OFFSET))(this);
		}

		::System::Void KDNEJKGDECC(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMELLFNBBDH> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMELLFNBBDH>))((::PBYTE)hIl2Cpp + LGPFGDFHIOM_KDNEJKGDECC_OFFSET))(this, a1);
		}

	};
