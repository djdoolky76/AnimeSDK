#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define NBFIHEKABBN_AJMEAJDDNHN_OFFSET UNITYSDK_OFFSET(0x3E8C400)
#define NBFIHEKABBN_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E402FD0)
#define NBFIHEKABBN_BIMHFLODEHE_OFFSET UNITYSDK_OFFSET(0x3E8C4E0)
#define NBFIHEKABBN_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define NBFIHEKABBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define NBFIHEKABBN_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E402EA0)
#define NBFIHEKABBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8C3E0)
#define NBFIHEKABBN_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E402D90)
#define NBFIHEKABBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define NBFIHEKABBN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define NBFIHEKABBN_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define NBFIHEKABBN_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define NBFIHEKABBN_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define NBFIHEKABBN_JNCEDMDJPHF_OFFSET UNITYSDK_OFFSET(0x3E8C4C0)
#define NBFIHEKABBN_LNOGNCDPOOA_OFFSET UNITYSDK_OFFSET(0x3E8C3F0)
#define NBFIHEKABBN_MDBEKFGBJPJ_OFFSET UNITYSDK_OFFSET(0x3E8C450)
#define NBFIHEKABBN_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E403080)
#define NBFIHEKABBN_ONNPONNBGHJ_OFFSET UNITYSDK_OFFSET(0x3E8C470)

inline static constexpr unsigned int NBFIHEKABBN_TypeDefinitionIndex = 10655;

	struct alignas(8) NBFIHEKABBN
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + NBFIHEKABBN_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::NBFIHEKABBN a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NBFIHEKABBN, ::System::Object*))((::PBYTE)hIl2Cpp + NBFIHEKABBN_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::NBFIHEKABBN a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NBFIHEKABBN, ::System::Object*))((::PBYTE)hIl2Cpp + NBFIHEKABBN_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::NBFIHEKABBN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBFIHEKABBN))((::PBYTE)hIl2Cpp + NBFIHEKABBN_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBFIHEKABBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::NBFIHEKABBN a1)
		{
			return ((::System::Boolean(*)(::NBFIHEKABBN))((::PBYTE)hIl2Cpp + NBFIHEKABBN_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::NBFIHEKABBN a1)
		{
			return ((::System::Boolean(*)(::NBFIHEKABBN))((::PBYTE)hIl2Cpp + NBFIHEKABBN_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 LNOGNCDPOOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_LNOGNCDPOOA_OFFSET))(this);
		}

		::System::Void AJMEAJDDNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBFIHEKABBN_AJMEAJDDNHN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> MDBEKFGBJPJ()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_MDBEKFGBJPJ_OFFSET))(this);
		}

		::System::Void ONNPONNBGHJ(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NBFIHEKABBN_ONNPONNBGHJ_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> JNCEDMDJPHF()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFIHEKABBN_JNCEDMDJPHF_OFFSET))(this);
		}
		*/

		/*
		::System::Void BIMHFLODEHE(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>))((::PBYTE)hIl2Cpp + NBFIHEKABBN_BIMHFLODEHE_OFFSET))(this, a1);
		}
		*/

	};
