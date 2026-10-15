#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHNHAFKEOC.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define ABAGMFKDCLG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CC6D720)
#define ABAGMFKDCLG_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define ABAGMFKDCLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define ABAGMFKDCLG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CC6D4C0)
#define ABAGMFKDCLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36860)
#define ABAGMFKDCLG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CC6D3D0)
#define ABAGMFKDCLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define ABAGMFKDCLG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define ABAGMFKDCLG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define ABAGMFKDCLG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define ABAGMFKDCLG_HFONDJHPCBK_OFFSET UNITYSDK_OFFSET(0x3C368D0)
#define ABAGMFKDCLG_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define ABAGMFKDCLG_LFKFHNNOLLN_OFFSET UNITYSDK_OFFSET(0x3C36880)
#define ABAGMFKDCLG_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x3C36870)
#define ABAGMFKDCLG_MMKMOEIDFGG_OFFSET UNITYSDK_OFFSET(0x3C368F0)
#define ABAGMFKDCLG_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CC6D7D0)

inline static constexpr unsigned int ABAGMFKDCLG_TypeDefinitionIndex = 10708;

	struct alignas(8) ABAGMFKDCLG
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::ABAGMFKDCLG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::ABAGMFKDCLG, ::System::Object*))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::ABAGMFKDCLG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::ABAGMFKDCLG, ::System::Object*))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::ABAGMFKDCLG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABAGMFKDCLG))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::ABAGMFKDCLG a1)
		{
			return ((::System::Boolean(*)(::ABAGMFKDCLG))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::ABAGMFKDCLG a1)
		{
			return ((::System::Boolean(*)(::ABAGMFKDCLG))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Void LFKFHNNOLLN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_LFKFHNNOLLN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FFHNHAFKEOC> HFONDJHPCBK()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FFHNHAFKEOC>(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_HFONDJHPCBK_OFFSET))(this);
		}

		::System::Void MMKMOEIDFGG(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FFHNHAFKEOC> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FFHNHAFKEOC>))((::PBYTE)hIl2Cpp + ABAGMFKDCLG_MMKMOEIDFGG_OFFSET))(this, a1);
		}

	};
