#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKOBDFANDBE.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GFBNDCCANOG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E62EC10)
#define GFBNDCCANOG_BIMHFLODEHE_OFFSET UNITYSDK_OFFSET(0x3F29940)
#define GFBNDCCANOG_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define GFBNDCCANOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define GFBNDCCANOG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E62EAE0)
#define GFBNDCCANOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F29840)
#define GFBNDCCANOG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E62E9D0)
#define GFBNDCCANOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define GFBNDCCANOG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define GFBNDCCANOG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define GFBNDCCANOG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define GFBNDCCANOG_HMMBFGCDKHO_OFFSET UNITYSDK_OFFSET(0x3F298B0)
#define GFBNDCCANOG_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define GFBNDCCANOG_JNCEDMDJPHF_OFFSET UNITYSDK_OFFSET(0x3F29920)
#define GFBNDCCANOG_JONHDNGIEEF_OFFSET UNITYSDK_OFFSET(0x3F298D0)
#define GFBNDCCANOG_LFKFHNNOLLN_OFFSET UNITYSDK_OFFSET(0x3F29860)
#define GFBNDCCANOG_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x3F29850)
#define GFBNDCCANOG_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E62ECC0)

inline static constexpr unsigned int GFBNDCCANOG_TypeDefinitionIndex = 10657;

	struct alignas(8) GFBNDCCANOG
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GFBNDCCANOG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GFBNDCCANOG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GFBNDCCANOG, ::System::Object*))((::PBYTE)hIl2Cpp + GFBNDCCANOG_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GFBNDCCANOG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GFBNDCCANOG, ::System::Object*))((::PBYTE)hIl2Cpp + GFBNDCCANOG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GFBNDCCANOG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFBNDCCANOG))((::PBYTE)hIl2Cpp + GFBNDCCANOG_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFBNDCCANOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GFBNDCCANOG a1)
		{
			return ((::System::Boolean(*)(::GFBNDCCANOG))((::PBYTE)hIl2Cpp + GFBNDCCANOG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GFBNDCCANOG a1)
		{
			return ((::System::Boolean(*)(::GFBNDCCANOG))((::PBYTE)hIl2Cpp + GFBNDCCANOG_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Void LFKFHNNOLLN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFBNDCCANOG_LFKFHNNOLLN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> HMMBFGCDKHO()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_HMMBFGCDKHO_OFFSET))(this);
		}

		::System::Void JONHDNGIEEF(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + GFBNDCCANOG_JONHDNGIEEF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> JNCEDMDJPHF()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBNDCCANOG_JNCEDMDJPHF_OFFSET))(this);
		}

		::System::Void BIMHFLODEHE(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>))((::PBYTE)hIl2Cpp + GFBNDCCANOG_BIMHFLODEHE_OFFSET))(this, a1);
		}

	};
